////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2007-2009 William Hachfeld. All Rights Reserved.
// Copyright (c) 2012  The Krell Institute. All Rights Reserved.
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, write to the Free Software Foundation, Inc., 59 Temple
// Place, Suite 330, Boston, MA  02111-1307  USA
////////////////////////////////////////////////////////////////////////////////

/** @file
 *
 * Definition of the Callbacks namespace.
 *
 */

#include "Address.hxx"
#include "AddressBitmap.hxx"
#include "AddressRange.hxx"
#include "Blob.hxx"
#include "Callbacks.hxx"
#include "Database.hxx"
#include "DataQueues.hxx"
#include "Extent.hxx"
#include "EntrySpy.hxx"
#include "Frontend.hxx"
#include "LinkedObject.hxx"
#include "SmartPtr.hxx"
#include "Path.hxx"
#include "PCBuffer.hxx"
#include "SymbolTable.hxx"
#include "SymtabAPISymbols.hxx"
#include "ThreadGroup.hxx"
#include "ThreadTable.hxx"
#include "Time.hxx"
#include "Utility.hxx"

#include <KrellInstitute/CBTF/BoostExts.hpp>
#include <KrellInstitute/CBTF/Component.hpp>
#include <KrellInstitute/CBTF/SignalAdapter.hpp>
#include <KrellInstitute/CBTF/Type.hpp>
#include <KrellInstitute/CBTF/ValueSink.hpp>
#include <KrellInstitute/CBTF/ValueSource.hpp>
#include <KrellInstitute/CBTF/XML.hpp>
#include "KrellInstitute/Core/LinkedObjectEntry.hpp"
#include "KrellInstitute/Core/SymbolTable.hpp"
#include "KrellInstitute/Core/ThreadName.hpp"

#include <algorithm>
#include <set>
#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace OpenSpeedShop::Framework;
using namespace KrellInstitute::Core;


namespace OpenSpeedShop { namespace Framework {
    typedef std::map<AddressRange, std::pair<SymbolTable, std::set<LinkedObject> > > SymbolTableMap;
    static std::map<AddressRange, std::string> allfuncs;
}}

namespace {

    void convert(const ThreadName& in, CBTF_Protocol_ThreadName& out)
    {
        out.experiment = 0;
        OpenSpeedShop::Framework::convert(in.getHost(), out.host);
        out.pid = in.getPid().second;
        std::pair<bool, pthread_t> posix_tid = in.getPosixThreadId();
        out.has_posix_tid = posix_tid.first;
        if(posix_tid.first)
            out.posix_tid = posix_tid.second;
    }



    /**
     * Get a linked object's identifier.
     *
     * Returns the identifier for the specified linked object's file name
     * in the passed database. An invalid identifier (-1) is returned if the
     * linked object does not exist.
     *
     * @param database         Database containing the linked object.
     * @param linked_object    Name of the linked object's file.
     * @return                 Identifier of the linked object or an invalid
     *                         identifier (-1) if no such linked object is
     *                         found.            
     */
    int getLinkedObjectIdentifier(SmartPtr<Database>& database,
				  const CBTF_Protocol_FileName& linked_object)
    {
	int identifier = -1;

	// Find the identifier of the specified linked object's file name
	BEGIN_TRANSACTION(database);
	database->prepareStatement(
	    "SELECT LinkedObjects.id "
	    "FROM LinkedObjects "
	    "    JOIN Files "
	    "ON LinkedObjects.file = Files.id "
	    "WHERE Files.path = ?;"
	    );
	database->bindArgument(1, linked_object.path);

	// TODO: compare the checksum
	
	while(database->executeStatement())
	    identifier = database->getResultAsInteger(1);
	END_TRANSACTION(database);
	
	// Return the identifier to the caller
	return identifier;
    }



    /**
     * Get a thread's identifier.
     *
     * Returns the identifier for the specified thread name in the passed
     * database. An invalid identifier (-1) is returned if the thread does
     * not exist.
     *
     * @param database    Database containing the thread.
     * @param thread      Name of the thread.
     * @return            Identifier of the thread or an invalid identifier
     *                    (-1) if no such thread is found.
     */
    int getThreadIdentifier(SmartPtr<Database>& database,
			    const CBTF_Protocol_ThreadName& thread)
			    
    {
	int identifier = -1;

	// Find the identifier of the specified thread name
	BEGIN_TRANSACTION(database);
	if(thread.has_posix_tid)
	    database->prepareStatement(
	        "SELECT id "
		"FROM Threads "
		"WHERE host = ? "
		"  AND pid = ? "
		"  AND posix_tid = ?;"
		);
	else
	    database->prepareStatement(
	        "SELECT id FROM Threads WHERE host = ? AND pid = ?;"
		);
	database->bindArgument(1, thread.host);
	database->bindArgument(2, static_cast<int>(thread.pid));
	if(thread.has_posix_tid)
	    database->bindArgument(3, static_cast<pthread_t>(thread.posix_tid));
	while(database->executeStatement())
	    identifier = database->getResultAsInteger(1);
	END_TRANSACTION(database);

	// Return the identifier to the caller
	return identifier;
    }

ThreadGroup getThreads(SmartPtr<Database>& database)
{
    ThreadGroup threads;
    BEGIN_TRANSACTION(database);
    database->prepareStatement("SELECT id FROM Threads;");
    while(database->executeStatement())
        threads.insert(Thread(database, database->getResultAsInteger(1)));
    END_TRANSACTION(database);
    return threads;
}

    LinkedObjectEntryVec linkedobjectvec;
    std::vector<ThreadName> threadvec;
    std::vector<CBTF_Protocol_SymbolTable> symvec;
}

void process_symvec(const CBTF_Protocol_SymbolTable& message);

// Helper function to do bulk updates of the thread table from a vector
// of ThreadNames created by the attachToThreads callback.
// Threads are queued in the threadvec and not flush to the database until
// we need to (like when a data blob needs to be added to the DataQueue).
void updateThreads()
{
    // thread vector is empty so no need to access database.
    //if (threadvec.size() == 0) {
    if (threadvec.empty()) {
	return;
    }

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << OpenSpeedShop::Framework::Time::Now() << " [TID " << pthread_self()
	    << "] entered updateThreads with " << threadvec.size() << " threads" << std::endl;
	std::cerr << output.str();
    }
#endif

	// Begin a transaction on this thread's database
        SmartPtr<Database> database = DataQueues::getDatabase(0);
	if(database.isNull()) {

#ifndef NDEBUG
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] "
		       << "updateThreads(): Experiment " 
		       << 0 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
#endif

	   return;
	}

    // This can be potentially large so do it in one transaction!
    BEGIN_WRITE_TRANSACTION(database);
    std::vector<ThreadName>::const_iterator i;
    for(i=threadvec.begin(); i != threadvec.end(); i++)
    {
	

	// Is there an existing placeholder for the entire process?
	// The initial createdprocess creates the database entry for
	// a process with the posix_tid of null. The initial thread
	// will be updated with it's posix_tid.  All new threads
	// will look for an exiting host:pid in the database and if
	// one is found, a new thread entry in the data base will
	// be created.
	int thread = -1;
	database->prepareStatement(
	    "SELECT id "
	    "FROM Threads "
	    "WHERE host = ? "
	    "  AND pid = ? "
	    "  AND posix_tid ISNULL;"
	    );
	database->bindArgument(1, (*i).getHost());
	database->bindArgument(2, static_cast<int>((*i).getPid().second));
	while(database->executeStatement())
	    thread = database->getResultAsInteger(1);

	// Reuse the placeholder if appropriate
	if(thread != -1) {
	    if((*i).getPosixThreadId().first && (thread != -1)) {

#ifndef NDEBUG
		if(Frontend::isDebugEnabled()) {
		    std::stringstream output;
		    output << "[TID " << pthread_self() << "] "
		       << "updateThreads(): " 
		       << "UPDATE Threads SET posix_tid:" << (*i).getPosixThreadId().second
		       << " rank:" << (*i).getMPIRank().second
		       << " For thread id:" << thread << std::endl;
		    std::cerr << output.str();
		}
#endif

		database->prepareStatement(
		    "UPDATE Threads SET posix_tid = ? WHERE id = ?;"
		    );
		database->bindArgument(
		    1, static_cast<pthread_t>((*i).getPosixThreadId().second)
		    );
		database->bindArgument(2, thread);
		while(database->executeStatement());

		if ((*i).getMPIRank().second >= 0 ) {
		  database->prepareStatement(
		    "UPDATE Threads SET mpi_rank = ? WHERE id = ?;"
		    );
		  database->bindArgument(
		    1, static_cast<int>((*i).getMPIRank().second)
		    );
		  database->bindArgument(2, thread);
		  while(database->executeStatement());
		}
	    }
	}

	// See if there is already an entry for this host and pid.
	// Create a new thread entry for this posix_tid for this host:pid
	// and include the mpi_rank. For non-mpi jobs this is -1 and
	// is already set to that by the collector.
	else {

	thread = -1;
	database->prepareStatement(
	    "SELECT id "
	    "FROM Threads "
	    "WHERE host = ? "
	    "  AND pid = ? "
	    );

	database->bindArgument(1, (*i).getHost());
	database->bindArgument(2, static_cast<int>((*i).getPid().second));

	while(database->executeStatement())
	    thread = database->getResultAsInteger(1);

	    if( thread != -1) {
#ifndef NDEBUG
		if(Frontend::isDebugEnabled()) {
		    std::stringstream output;
		    output << "[TID " << pthread_self() << "] "
		       << "updateThreads(): " 
		       << "FOUND existing HOST:PID in database"
		       << " host:" << (*i).getHost()
		       << " pid:" << (*i).getPid().second
		       << " posix_tid:" << (*i).getPosixThreadId().second
		       << " mpi_rank:" << (*i).getMPIRank().second << std::endl;
		    std::cerr << output.str();
		}
#endif
		database->prepareStatement(
		    "INSERT INTO Threads (host, pid, posix_tid) VALUES (?, ?, ?);"
		    );
	        database->bindArgument(1, (*i).getHost());
	        database->bindArgument(2, static_cast<int>((*i).getPid().second));
		database->bindArgument(3, static_cast<pthread_t>((*i).getPosixThreadId().second));
	        while(database->executeStatement());

	        int thread = database->getLastInsertedUID();
	        ThreadTable::TheTable.addThread(Thread(database, thread));

		if ((*i).getMPIRank().second >= 0) {
		  database->prepareStatement(
		    "UPDATE Threads SET mpi_rank = ? WHERE id = ?;"
		    );
		  database->bindArgument(
		    1, static_cast<int>((*i).getMPIRank().second)
		    );
		  database->bindArgument(2, thread);
		  while(database->executeStatement());
		}

	    } else {
		// Must be a new host pid.  Add it to the thread table.
		// For CBTF, we likely will not enter this case.
#ifndef NDEBUG
		if(Frontend::isDebugEnabled()) {
		    std::stringstream output;
		    output << "[TID " << pthread_self() << "] "
		       << "updateThreads(): " 
		       << "New Thread - INSERTING"
		       << " host:" << (*i).getHost()
		       << " pid:" << (*i).getPid().second
		       << " posix tid:" << static_cast<pthread_t>((*i).getPosixThreadId().second)
		       << " rank:" << (*i).getMPIRank().second << std::endl;
		    std::cerr << output.str();
		}
#endif
		database->prepareStatement(
		    "INSERT INTO Threads (host, pid) VALUES (?, ?);"
		    );

	        database->bindArgument(1, (*i).getHost());
	        database->bindArgument(2, static_cast<int>((*i).getPid().second));
	        while(database->executeStatement());

	        int thread = database->getLastInsertedUID();
	        ThreadTable::TheTable.addThread(Thread(database, thread));

		if ((*i).getPosixThreadId().first ) {
		  database->prepareStatement(
		    "UPDATE Threads SET posix_tid = ? WHERE id = ?;"
		    );
		  database->bindArgument(
		    1, static_cast<pthread_t>((*i).getPosixThreadId().second)
		    );
		  database->bindArgument(2, thread);
		  while(database->executeStatement());
		}

		if ((*i).getMPIRank().second >= 0) {
		  database->prepareStatement(
		    "UPDATE Threads SET mpi_rank = ? WHERE id = ?;"
		    );
		  database->bindArgument(
		    1, static_cast<int>((*i).getMPIRank().second)
		    );
		  database->bindArgument(2, thread);
		  while(database->executeStatement());
		}
	    }
	}
	// End the transaction on this thread's database
    }
    END_TRANSACTION(database);

    // clear for any potential new threads
    threadvec.clear();
}


/**
 * Attached to threads.
 *
 * Callback function called by the frontend message pump when a message that
 * indicates threads have been attached is received. Updates the experiment
 * databases as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::attachedToThreads(const boost::shared_ptr<CBTF_Protocol_AttachedToThreads> & in)
{
    // Decode the message
    CBTF_Protocol_AttachedToThreads message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_AttachedToThreads)); 

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::attachedToThreads"
		<< std::endl;
	std::cerr << output.str();
    }
    if(Frontend::isDebugEnabled()) {
	std::stringstream output;
	output << "[TID " << pthread_self() << "] Callbacks::"
	       << toString(message);
	std::cerr << output.str();
    }
#endif

    // Iterate over each thread attached in this message
    // and add it to vector for later updating of database.
    for(int i = 0; i < message.threads.names.names_len; ++i) {
//	ThreadName tname(message.threads.names.names_val[i]);
	threadvec.push_back(message.threads.names.names_val[i]);
//std::cerr << "pushed host " << message.threads.names.names_val[i].host << std::endl;
    }
}

/**
 * Created a process.
 *
 * Callback function called by the frontend message pump when a message that
 * indicates a process was created is received. Updates the experiment databases
 * as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::createdProcess(const boost::shared_ptr<CBTF_Protocol_CreatedProcess> & in)
{


    // This is a holdover from online instrumentation and in particular
    // is not needed for offline type instrumentation like cbtf collectors use.
    // So we will return early here.  Likely we do not need to send
    // this message for cbtf/offline collection as it is redundant and
    // causes uneeded message traffic and database updates.  all the info
    // we need to update the thread table in the database comes from the
    // attachedToThreads messages.
    return;

    // Decode the message
    CBTF_Protocol_CreatedProcess message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_CreatedProcess)); 

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::"
	       << toString(message);
	std::cerr << output.str();
    }
#endif

    // Update the thread with its real process identifier
    SmartPtr<Database> database = 
	DataQueues::getDatabase(message.original_thread.experiment);
    if(database.isNull()) {
	
#ifndef NDEBUG
	if(Frontend::isDebugEnabled()) {
	    std::stringstream output;
	    output << "[TID " << pthread_self() << "] Callbacks::"
		   << "createdProcess(): Experiment " 
		   << message.original_thread.experiment 
		   << " no longer exists." << std::endl;
	    std::cerr << output.str();
	}
#endif

	return;
    }

    // Is there an existing placeholder for the entire process?
    BEGIN_WRITE_TRANSACTION(database);
#if 0
    int thread = -1;
    database->prepareStatement(
	    "SELECT id "
	    "FROM Threads "
	    "WHERE host = ? "
	    "  AND pid = ? "
	    "  AND posix_tid ISNULL;"
	    );
    database->bindArgument(1, message.original_thread.host);
    database->bindArgument(2, static_cast<int>(message.original_thread.pid));
    while(database->executeStatement())
	thread = database->getResultAsInteger(1);

    if(thread != -1) {
#ifndef NDEBUG
	if(Frontend::isDebugEnabled()) {
	    std::cerr << "[TID " << pthread_self() << "] Callbacks::createdProcess(): "
	    << "UPDATE Threads SET pid = " << static_cast<int>(message.created_thread.pid)
	    << " WHERE id = " << - static_cast<int>(message.original_thread.pid) << std::endl;
	}
#endif
	database->prepareStatement("UPDATE Threads SET pid = ? WHERE id = ?;");
	database->bindArgument(1, static_cast<int>(message.created_thread.pid));
	database->bindArgument(2, - static_cast<int>(message.original_thread.pid));
	while(database->executeStatement());
    } else {
#ifndef NDEBUG
	if(Frontend::isDebugEnabled()) {
	    std::cerr << "[TID " << pthread_self() << "] Callbacks::createdProcess(): "
	    << "INSERT INTO Threads "
	    << " host = " << (message.created_thread.host)
	    << " pid = " << static_cast<int>(message.created_thread.pid)
	    << std::endl;
	}
#endif
        database->prepareStatement(
            "INSERT INTO Threads (host,pid) VALUES (?,?);"
            );
        database->bindArgument(1, (message.created_thread.host));
        database->bindArgument(2, static_cast<int>(message.created_thread.pid));
	while(database->executeStatement());
    }
#else
        database->prepareStatement(
            "INSERT INTO Threads (host,pid) VALUES (?,?);"
            );
        database->bindArgument(1, (message.created_thread.host));
        database->bindArgument(2, static_cast<int>(message.created_thread.pid));
	while(database->executeStatement());

#endif
    END_TRANSACTION(database);
}

static int abuftimes = 0;


/**
 * When all threads have terminated, this address buffer is sent,
 *
 * @param in    address buffer containing the unique addresses with counts.
 */
void Callbacks::addressBuffer(const AddressBuffer& in)
{
 
    // This message come after all threads have finished and therefore
    // all datablobs have been sent and are queued.
    // Flush the dataqueues now.
    DataQueues::flushPerformanceData();

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
       //in.printResults();
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer entered" << std::endl;
	std::cerr << output.str();
    }
#endif

    // create a set of  addresses in the passed buffer.
    // We do this so we can use the OSS symbol resolution functions.
    AddressCounts::const_iterator aci;
    AddressCounts ac = in.addresscounts;
 
    // create the set of addresses used to restrict entries into the database
    // to those that contain a valid sample or sample related address.
    std::set<OpenSpeedShop::Framework::Address> addresses;
    for (aci = ac.begin(); aci != ac.end(); ++aci) {
	addresses.insert(aci->first.getValue());
    }

    // this updates the addresspace table.
    process_addressspace(addresses);

    OpenSpeedShop::Framework::SymbolTableMap symtabmap;

    // For our purposes there is only the one experiment (0).
    SmartPtr<Database> database = DataQueues::getDatabase(0);

    // at this point we should have recorded threads into the
    // database. So we will just get the list of threads from
    // the database.  This should be safe since at the end of
    // an experiment all threads will already be recorded into
    // the database and all individual threads will dump
    // any remaining performance data blobs prior to exiting.
    ThreadGroup threads;

    BEGIN_TRANSACTION(database);
	database->prepareStatement("SELECT id FROM Threads;");
	while(database->executeStatement())
	    threads.insert(Thread(database, database->getResultAsInteger(1)));
    END_TRANSACTION(database);

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
       //in.printResults();
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer find symbol tables" << std::endl;
	std::cerr << output.str();
    }
#endif


    // DEBUG
    //std::cerr << "Callbacks::addressBuffer number of addresses "
    //   << addresses.size() << std::endl;
    //std::cerr << "Callbacks::addressBuffer number of threads "
    //   << threads.size() << std::endl;

    // Now get the currently recorded linkedobjects for these threads
    // from the database. 
    std::set<LinkedObject> ttgrp_lo = threads.getLinkedObjects();

    // loop through linkedobjects looking for those with addresseranges
    // that contain an address from the passed addressbuffer.
    std::set<std::string> linkedobjs;
    for(std::set<LinkedObject>::const_iterator li = ttgrp_lo.begin();
	li != ttgrp_lo.end(); ++li) {

	// loop through any addressrange for the linkedobject.
	std::set<AddressRange> addr_range(li->getAddressRange());
	for(std::set<AddressRange>::const_iterator ar = addr_range.begin();
            ar != addr_range.end(); ++ar) {

	    // now see if there is a sample address in this addressrange.
	    bool foundaddress = false;
	    for (aci = in.addresscounts.begin(); aci != in.addresscounts.end(); ++aci) {

	      if (!foundaddress && ar->doesContain(aci->first.getValue()) ) {
		// found an address. create a symtab for it if object path
		// is not already present in symtab.
		std::set<LinkedObject> stlo;
		std::pair<std::set<std::string>::iterator,bool> ret = linkedobjs.insert((*li).getPath());
		if (ret.second) {
#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
       //in.printResults();
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer insert symtab " << (*li).getPath() << std::endl;
	std::cerr << output.str();
    }
#endif
		    stlo.insert(*li);
		    symtabmap.insert(std::make_pair(*ar,
				std::make_pair(SymbolTable(*ar), stlo)
                                ));
		}

		foundaddress = true;
		break;
	      }
	      if (foundaddress) break;
	    }
        }

    }

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
       //in.printResults();
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer resolving symbols" << std::endl;
	std::cerr << output.str();
    }
#endif

    // Use symtabapi for symbols. TODO: add support for BFD???
    SymtabAPISymbols stapi_symbols;

    // cycle through the symboltables and resolve symbols.
    for(SymbolTableMap::iterator i = symtabmap.begin();
					i != symtabmap.end(); ++i) {
	std::set<LinkedObject> le = i->second.second;
        for(std::set<LinkedObject>::const_iterator li = le.begin();
		li != le.end(); ++li) {
	    //stapi_symbols.getSymbols(&pcbuff,*li,symtabmap);
	    stapi_symbols.getSymbols(addresses,*li,symtabmap);
	}
    }

    for(SymbolTableMap::iterator i = symtabmap.begin();
                i != symtabmap.end(); ++i) {

	// This records any previously resolved function symbols.
	// We will use this later to remove them from the corresponding
	// symboltable since we do not want processAndStore to record
	// them into the database more than once.
	std::map<AddressRange, std::string> existingfunctions;

	SymbolTable st = i->second.first;
	std::map<AddressRange, std::string> stfuncs = st.getFunctions();
	for (std::map<AddressRange,
	     std::string>::iterator kk = stfuncs.begin();
	     kk != stfuncs.end(); ++kk) {

	    // allfuncs records already processed function symbols.
	    // look for the function there first.
	    std::map<AddressRange, std::string>::iterator it = allfuncs.find(kk->first);

	    if (it == allfuncs.end()) {
		// We have not seen this function before. so this function
		// will be processed for storage into the database.
		allfuncs.insert(*kk);
	    }  else {
		// need to remove this function from this symtabs dm_functions
		// before calling processandStore.
		existingfunctions.insert(*kk);
	    }
	}

	// remove any functions for which we have added to the database.
	i->second.first.removeFunctions(existingfunctions);

	// finally record functions and statements to the database.
        for(std::set<LinkedObject>::const_iterator j = i->second.second.begin();
                j != i->second.second.end(); ++j) {
            i->second.first.processAndStore(*j);
        }
    }

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer finished resolving symbols" << std::endl;
	std::cerr << output.str();
    }
#endif

    // process that symboltable here...
    for(std::vector<CBTF_Protocol_SymbolTable>::const_iterator si = symvec.begin();
	si != symvec.end(); si++) {
	process_symvec(*si);
    }

    // Now clean up any remaining linkedobjects, files, addressspaces,
    // and threads that do not contain any sample date, functions or statements.
    // Begin a multi-statement transaction
    BEGIN_WRITE_TRANSACTION(database);

    // delete any thread entries where no sample data was recorded.
    database->prepareStatement(
	"DELETE FROM Threads "
	"WHERE id NOT IN (SELECT DISTINCT thread FROM Data);"
	);
    while(database->executeStatement());

    // delete any linkedobject entries where no functions or statements
    // where recorded.
    database->prepareStatement(
	"DELETE FROM LinkedObjects "
	"WHERE id NOT IN (SELECT DISTINCT linked_object FROM Functions) "
	"  AND id NOT IN (SELECT DISTINCT linked_object FROM Statements);"
	);
    while(database->executeStatement());

    // delete any file entries where no linkedobjects or statements
    // where recorded.
    database->prepareStatement(
	"DELETE FROM Files "
	"WHERE id NOT IN (SELECT DISTINCT file FROM LinkedObjects) "
	"  AND id NOT IN (SELECT DISTINCT file FROM Statements);"
	);
    while(database->executeStatement());

    // delete any addresspace entries where no linkedobjects or statements
    // where recorded.
    database->prepareStatement(
	"DELETE FROM AddressSpaces "
	"WHERE linked_object NOT IN (SELECT DISTINCT id FROM LinkedObjects) "
	"  AND linked_object NOT IN (SELECT DISTINCT linked_object FROM Statements);"
	);
    while(database->executeStatement());

    // delete any addresspace entries for threads where no data
    // was recorded.
    database->prepareStatement(
	"DELETE FROM AddressSpaces "
	"WHERE thread NOT IN (SELECT DISTINCT id FROM Threads);"
	);
    while(database->executeStatement());

    // TODO:  Could look at removing any thread entries for which there
    // are no performance data blobs in the data table.
    END_TRANSACTION(database);

#if 0
    ThreadGroup allThreads = getThreads(database);
    std::set<Statement> allStatements = allThreads.getStatements();

std::cerr << "FOUND " << allStatements.size() << " statements from " << allThreads.size() << " threads" << std::endl;

    std::set<Thread>::iterator ti;
    //std::set<std::pair<Statement,uint64_t> > sCounts;
    std::map<Statement, uint64_t> scMap;
int totalcounts = 0;
int totalstatementcounts = 0;
    for (aci = ac.begin(); aci != ac.end(); ++aci) {
	OpenSpeedShop::Framework::Address addr(aci->first.getValue());
	std::cerr << "NEW ADDReSS:" << addr << " counts:" << aci->second << std::endl;
	totalcounts += aci->second;
        for(ti=allThreads.begin(); ti!=allThreads.end();ti++)
        {
	    std::set<Statement> tstmts = (*ti).getStatementsAt(addr);
	    if (tstmts.size() > 0 && aci->second > 0) {
		totalstatementcounts += aci->second;
		std::set<Statement>::const_iterator si;
		for (si=tstmts.begin(); si!=tstmts.end(); ++si)
		{
		    //sCounts.insert(std::make_pair((*si),aci->second));
		    std::pair<std::map<Statement,uint64_t>::iterator,bool> ret;
		    ret = scMap.insert(std::pair<Statement,uint64_t>(*si,aci->second));

		    if (ret.second==false) {
			ret.first->second += aci->second;
std::cerr << "Address:" << addr <<  " file:" << (*si).getPath() << " line:" << (*si).getLine() << " count:" << aci->second << " tot counts:" << ret.first->second << " UPDATED" << std::endl;
  		    } else {
std::cerr << "Address:" << addr <<  " file:" << (*si).getPath() << " line:" << (*si).getLine() << " count:" << aci->second << " tot counts:" << ret.first->second << " INSERTED" << std::endl;
		    }
		}
	std::cerr << "BREAK THREAD" << std::endl;
		break;
	    }
	    
        }
    }

std::cerr << "TOTAL ADDRESS COUNTS:" << totalcounts  << " STATEMENT COUNTS:" << totalstatementcounts << std::endl;


    std::map<Statement,uint64_t>::iterator it;
    for(it=scMap.begin(); it!=scMap.end(); ++it)
    {
std::cerr << "Statement at file:" << (*it).first.getPath() << " line:" << (*it).first.getLine() << " counts:" << (*it).second  << std::endl;
    }
#endif

    // Now run vacuum on the database cleanup after removing entries.
    database->vacuum();
#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
        //in.printResults();
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "]"
	       << " Callbacks::addressBuffer exits" << std::endl;
	std::cerr << output.str();
    }
#endif

}

/**
 * Linked object has been loaded. (dlopen only)
 *
 * Callback function called by the frontend message pump when a message that
 * indicates a linked object was loaded into one or more threads is received.
 * Updates the experiment databases as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::loadedLinkedObject(const boost::shared_ptr<CBTF_Protocol_LoadedLinkedObject> & in)
{
    // Decode the message
    CBTF_Protocol_LoadedLinkedObject message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_LoadedLinkedObject)); 

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::"
	       << toString(message);
	std::cerr << output.str();
    }
#endif

    LinkedObjectEntry entry;

    // Iterate over each thread loading this linked object
    for(int i = 0; i < message.threads.names.names_len; ++i) {
	const CBTF_Protocol_ThreadName& msg_thread =
	    message.threads.names.names_val[i];

	ThreadName tname(msg_thread);
        entry.tname = tname;
        entry.path = message.linked_object.path;
        entry.addr_begin = message.range.begin;
        entry.addr_end = message.range.end;
        entry.is_executable = message.is_executable;
        entry.time_loaded = message.time;
        entry.time_unloaded = KrellInstitute::Core::Time::Now();

        linkedobjectvec.push_back(entry);

	// Begin a transaction on this thread's database
	SmartPtr<Database> database = 
	    DataQueues::getDatabase(msg_thread.experiment);


	if(database.isNull()) {

#ifndef NDEBUG
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "loadedLinkedObject(): Experiment "
		       << msg_thread.experiment
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
#endif

	    continue;
	}
	BEGIN_WRITE_TRANSACTION(database);

	// Find the existing thread in the database
	int thread = getThreadIdentifier(database, msg_thread);
#ifndef NDEBUG
	if(thread == -1) {
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "loadedLinkedObject(): Thread "
		       << toString(msg_thread) 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
	}
#endif

	// Only proceed if the thread was found
	if(thread != -1) {
	    
	    // Is there an existing linked object in the database?
	    int linked_object = 
		getLinkedObjectIdentifier(database, message.linked_object);

	    // Create this linked object if it wasn't present in the database
	    if(linked_object == -1) {

		// Create the file entry
		database->prepareStatement(
	            "INSERT INTO Files (path) VALUES (?);"
		    );
		database->bindArgument(1, message.linked_object.path);

		// TODO: insert the checksum
		
		while(database->executeStatement());
		int file = database->getLastInsertedUID();
	    
		// Create the linked object entry
		database->prepareStatement(
	            "INSERT INTO LinkedObjects "
		    "  (addr_begin, addr_end, file, is_executable) "
		    "VALUES (0, ?, ?, ?);"
		    );
		database->bindArgument(1, Address(message.range.end -
						  message.range.begin));
		database->bindArgument(2, file);
		database->bindArgument(3, message.is_executable);
		while(database->executeStatement());
		linked_object = database->getLastInsertedUID();
		
	    }

	    // Create an address space entry for this load
	    database->prepareStatement(
	        "INSERT INTO AddressSpaces "
	        "  (thread, time_begin, time_end, "
	        "   addr_begin, addr_end, linked_object) "
	        "VALUES (?, ?, ?, ?, ?, ?);"
	        );
	    database->bindArgument(1, thread);
	    database->bindArgument(2, Time(message.time));
	    database->bindArgument(3, Time::TheEnd());
	    database->bindArgument(4, Address(message.range.begin));
	    database->bindArgument(5, Address(message.range.end));
	    database->bindArgument(6, linked_object);
	    while(database->executeStatement());
	    
	}

	// End the transaction on this thread's database
	END_TRANSACTION(database);

    }
}

/**
 * Linked object group (protocol handler) has been loaded.
 *
 * Callback function called by the frontend message pump when a message that
 * indicates a linked object was loaded into one or more threads is received.
 * Updates the experiment databases as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::linkedObjectGroup(const boost::shared_ptr<CBTF_Protocol_LinkedObjectGroup> & in)
{
    // Decode the message
    CBTF_Protocol_LinkedObjectGroup message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_LinkedObjectGroup)); 

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::"
	       << toString(message) << " num objs " << message.linkedobjects.linkedobjects_len;
	std::cerr << output.str();
    }
#endif

    const CBTF_Protocol_ThreadName& msg_thread = message.thread;
    ThreadName tname(msg_thread);

    // Begin a transaction on this thread's database
    SmartPtr<Database> database = 
	    DataQueues::getDatabase(msg_thread.experiment);


    if(database.isNull()) {
#ifndef NDEBUG
	if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "linkedObjectGroup(): Experiment "
		       << msg_thread.experiment
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	}
#endif
	return;
    }


    BEGIN_WRITE_TRANSACTION(database);
    // Find the existing thread in the database
    int thread = getThreadIdentifier(database, msg_thread);

    // Only proceed if the thread was found
    if(thread != -1) {

	for(int i = 0; i < message.linkedobjects.linkedobjects_len; ++i) {
	    const CBTF_Protocol_LinkedObject& msg_lo =
                                message.linkedobjects.linkedobjects_val[i];

	    // Is there an existing linked object in the database?
	    int linked_object = 
		getLinkedObjectIdentifier(database, msg_lo.linked_object);

	    // Create this linked object if it wasn't present in the database
	    if(linked_object == -1) {

		// Create the file entry
		database->prepareStatement(
	            "INSERT INTO Files (path) VALUES (?);"
		    );
		database->bindArgument(1, msg_lo.linked_object.path);

		// TODO: insert the checksum
		
		while(database->executeStatement());
		int file = database->getLastInsertedUID();
	    
		// Create the linked object entry
		database->prepareStatement(
	            "INSERT INTO LinkedObjects "
		    "  (addr_begin, addr_end, file, is_executable) "
		    "VALUES (0, ?, ?, ?);"
		    );
		database->bindArgument(1, Address(msg_lo.range.end -
						  msg_lo.range.begin));
		database->bindArgument(2, file);
		database->bindArgument(3, msg_lo.is_executable);
		while(database->executeStatement());
		linked_object = database->getLastInsertedUID();
		
	    }

	    // Create an address space entry for this load
	    database->prepareStatement(
	        "INSERT INTO AddressSpaces "
	        "  (thread, time_begin, time_end, "
	        "   addr_begin, addr_end, linked_object) "
	        "VALUES (?, ?, ?, ?, ?, ?);"
	        );
	    database->bindArgument(1, thread);
	    database->bindArgument(2, Time(msg_lo.time_begin));
	    database->bindArgument(3, Time::TheEnd());
	    database->bindArgument(4, Address(msg_lo.range.begin));
	    database->bindArgument(5, Address(msg_lo.range.end));
	    database->bindArgument(6, linked_object);
	    while(database->executeStatement());
	}
    }

    // End the transaction on this thread's database
    END_TRANSACTION(database);
}

/**
 * vector of Linked object entry initially loaded.
 *
 * @param in  vector in LinkedObjectEntry.
 */
void Callbacks::linkedObjectEntryVec(const KrellInstitute::Core::LinkedObjectEntryVec & in)
{
    linkedobjectvec = in;
}

/**
 * vector of Linked object entry initially loaded.
 *
 * Updates the experiment databases as necessary.
 *
 * @param addresses  set of addresses used to compute inclusion into database.
 */
void Callbacks::process_addressspace(const std::set<OpenSpeedShop::Framework::Address> addresses)
{
    // For offline ld_preloaded collection runtimes, the getDatabase argument
    // experiment ID is always 0.
    SmartPtr<Database> database = DataQueues::getDatabase(0);
    KrellInstitute::Core::LinkedObjectEntryVec in = linkedobjectvec;

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] "
	       <<  " Callbacks::process_addressspace entered vec size is " << in.size() << std::endl;
	std::cerr << output.str();
    }
#endif

    // This can be potentially very large so do it in one transaction.
    BEGIN_WRITE_TRANSACTION(database);

    // iterate through all the linkedobjects sent and record only those for
    // which we have a sample or callstack frame address.
    LinkedObjectEntryVec::const_iterator li;
    for (li = in.begin(); li != in.end(); ++li) {

	// create a range for this linkedobjects addressspace. will search
	// this range for any sample address.
	AddressRange range((*li).addr_begin.getValue(),
			   (*li).addr_end.getValue()) ;

	// use the begin address of the linkedobject range to see if any
	// addresses in the set of unique addresses is contained in it.
	// For now this seems sufficient to determine whether to include
	// this linkedobject into the linkedobject table and create an
	// addresspace for it. The end of range is commented out in case
	// we find a case where we need it.
	std::set<Address>::const_iterator aib = addresses.equal_range(range.getBegin()).first;
        //std::set<Address>::const_iterator aie = addresses.equal_range(range.getEnd()).second;
        // aie--;
	if ( !(range.doesContain(*aib) /*|| range.doesContain(*aie)*/) ) {
	    continue;
	}
	
	CBTF_Protocol_ThreadName message;
	::convert((*li).tname, message);
        int thread = getThreadIdentifier(database, message);

	// Only proceed if the thread was found
	if(thread != -1) {
	    // Is there an existing linked object in the database?
	    CBTF_Protocol_FileName fmessage;
	    std::string lopath((*li).path);
	    OpenSpeedShop::Framework::convert( lopath, fmessage.path);
	    int linked_object = 
		getLinkedObjectIdentifier(database, fmessage);

	    // Create this linked object if it wasn't present in the database
	    if(linked_object == -1) {

		// Create the file entry
		database->prepareStatement(
	            "INSERT INTO Files (path) VALUES (?);"
		    );
		database->bindArgument(1, lopath);

		// TODO: insert the checksum
		
		while(database->executeStatement());
		int file = database->getLastInsertedUID();

#ifndef NDEBUG
		if(0 && Frontend::isDebugEnabled()) {
		    std::cerr << "Callbacks::process_addresspace INSERT INTO LinkedObjects "
		    << AddressRange(0,Address((*li).addr_end - (*li).addr_begin))
		    << " file " << file << " is_executable " << (*li).isExecutable()
		    << std::endl;
		}
#endif

		// Create the linked object entry
		database->prepareStatement(
	            "INSERT INTO LinkedObjects "
		    "  (addr_begin, addr_end, file, is_executable) "
		    "VALUES (0, ?, ?, ?);"
		    );
		database->bindArgument(1, Address((*li).addr_end -
						  (*li).addr_begin));
		database->bindArgument(2, file);
		database->bindArgument(3, (*li).isExecutable());
		while(database->executeStatement());
		linked_object = database->getLastInsertedUID();
	    }

#ifndef NDEBUG
		if(0 && Frontend::isDebugEnabled()) {
		    std::cerr << "Callbacks::process_addresspace INSERT INTO AddressSpaces "
			<< " threadID " << thread
			<< " interval:" << TimeInterval(Time((*li).time_loaded.getValue()), Time((*li).time_unloaded.getValue()))
			<< " range:" << AddressRange(Address((*li).addr_begin.getValue()), Address((*li).addr_end.getValue()))
			<< " linked_object " << linked_object 
			<< std::endl;
		}
#endif
	    // Create an address space entry for this load
	    database->prepareStatement(
	        "INSERT INTO AddressSpaces "
	        "  (thread, time_begin, time_end, "
	        "   addr_begin, addr_end, linked_object) "
	        "VALUES (?, ?, ?, ?, ?, ?);"
	        );
	    database->bindArgument(1, thread);
	    database->bindArgument(2, Time((*li).time_loaded.getValue()) );
	    database->bindArgument(3, Time((*li).time_unloaded.getValue()) );
	    database->bindArgument(4, Address((*li).addr_begin.getValue()));
	    database->bindArgument(5, Address((*li).addr_end.getValue()));
	    database->bindArgument(6, linked_object);
	    while(database->executeStatement());
	}
    }

    // End the transaction on this thread's database
    END_TRANSACTION(database);

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] "
	       <<  " Callbacks::process_addresspace exits" << std::endl;
	std::cerr << output.str();
    }
#endif

}


#if 0
/**
 * Thread's state has changed.
 *
 * Callback function called by the frontend message pump when a message that
 * indicates a state change occured in one or more threads is received. Updates
 * the thread table entries as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::threadsStateChanged(const Blob& blob)
{
    // Decode the message
    CBTF_Protocol_ThreadsStateChanged message;
    memset(&message, 0, sizeof(message));
    blob.getXDRDecoding(
	reinterpret_cast<xdrproc_t>(xdr_CBTF_Protocol_ThreadsStateChanged),
	&message
	);

#ifndef NDEBUG
    if(Frontend::isDebugEnabled()) {
	std::stringstream output;
	output << "[TID " << pthread_self() << "] Callbacks::"
	       << toString(message);
	std::cerr << output.str();
    }
#endif

    // Convert from CBTF_Protocol_ThreadState to Thread::State
    Thread::State state;
    switch(message.state) {
    case Disconnected:
	state = Thread::Disconnected;
	break;
    case Connecting:
	state = Thread::Connecting;
	break;
    case Nonexistent:
	state = Thread::Nonexistent;
	break;
    case Running:
	state = Thread::Running;
	break;
    case Suspended:
	state = Thread::Suspended;
	break;
    case Terminated:
	state = Thread::Terminated;
	break;
    default:
	state = Thread::Disconnected;
	break;
    }

    // Iterate over each thread changing state
    for(int i = 0; i < message.threads.names.names_len; ++i) {
	const CBTF_Protocol_ThreadName& msg_thread =
	    message.threads.names.names_val[i];

std::cerr << "Callbacks::threadsStateChanged for thread name " << toString(message) << std::endl;
	
	// Get the threads matching this thread name
	ThreadGroup threads = ThreadTable::TheTable.
	    getThreads(msg_thread.host, msg_thread.pid,
		       std::make_pair(msg_thread.has_posix_tid,
				      msg_thread.posix_tid)
		       );
	
	// Update these threads with their new state
	for(ThreadGroup::const_iterator
		i = threads.begin(); i != threads.end(); ++i) {
std::cerr << "Callbacks::threadsStateChanged calling ThreadTable::TheTable.setThreadState" << std::endl;
	    ThreadTable::TheTable.setThreadState(*i, state);
	}
    }
}



/**
 * Linked object has been unloaded.
 *
 * Callback function called by the frontend message pump when a message that
 * indicates a linked object was unloaded from one or more threads is received.
 * Updates the experiment databases as necessary.
 *
 * @param blob    Blob containing the message.
 */
void Callbacks::unloadedLinkedObject(const Blob& blob)
{
    // Decode the message
    CBTF_Protocol_UnloadedLinkedObject message;
    memset(&message, 0, sizeof(message));
    blob.getXDRDecoding(
	reinterpret_cast<xdrproc_t>(xdr_CBTF_Protocol_UnloadedLinkedObject),
	&message
	);

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {
	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::"
	       << toString(message);
	std::cerr << output.str();
    }
#endif

    // Iterate over each thread unloading this linked object
    for(int i = 0; i < message.threads.names.names_len; ++i) {
	const CBTF_Protocol_ThreadName& msg_thread =
	    message.threads.names.names_val[i];

	// Begin a transaction on this thread's database
	SmartPtr<Database> database = 
	    DataQueues::getDatabase(msg_thread.experiment);
	if(database.isNull()) {

#ifndef NDEBUG
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "unloadedLinkedObject(): Experiment "
		       << msg_thread.experiment 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
#endif

	    continue;
	}
	BEGIN_WRITE_TRANSACTION(database);

	// Find the existing thread in the database
	int thread = getThreadIdentifier(database, msg_thread);
#ifndef NDEBUG
	if(thread == -1) {
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "unloadedLinkedObject(): Thread "
		       << toString(msg_thread) 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
	}
#endif

	// Find the existing linked object in the database
	int linked_object = 
	    getLinkedObjectIdentifier(database, message.linked_object);
#ifndef NDEBUG
	if(linked_object == -1) {
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "unloadedLinkedObject(): Linked Object "
		       << toString(message.linked_object) 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
	}
#endif
	
	// Only proceed if the thread and linked object were found
	if((thread != -1) && (linked_object != -1)) {
	    
	    // Update the correct address space entry for this unload
	    database->prepareStatement(
	        "UPDATE AddressSpaces "
		"SET time_end = ? "
		"WHERE thread = ? "
		"  AND time_end = ? "
		"  AND linked_object = ?;"
	        );
	    database->bindArgument(1, Time(message.time));
	    database->bindArgument(2, thread);
	    database->bindArgument(3, Time::TheEnd());
	    database->bindArgument(4, linked_object);	
	    while(database->executeStatement());	    
	    
	}

	// End the transaction on this thread's database
	END_TRANSACTION(database);

    }
}

#endif


/**
 * Performance data.
 *
 * Callback function called by the frontend message pump when performance
 * data is received. Simply enqueues this performance data for later storage
 * in an experiment database.
 *
 * @param blob    Blob containing the performance data.
 */
void Callbacks::performanceData(const boost::shared_ptr<CBTF_Protocol_Blob> & in)
{
    // Decode the message
    CBTF_Protocol_Blob message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_Blob)); 

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {

	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::performanceData("
	       << ") entered" << std::endl;
	std::cerr << output.str();
    }
#endif
 
    updateThreads();
    

    // Enqueue this performance data.  For now we will not flush
    // the dataqueue per blob as that is going to thrash the database.
    OpenSpeedShop::Framework::Blob blob(message.data.data_len,message.data.data_val);
    DataQueues::enqueuePerformanceData(blob);
    // used to flush queue here.

#ifndef NDEBUG
    if(Frontend::isTimingDebugEnabled()) {

	std::stringstream output;
	output << "TIME " << Time::Now() << " [TID " << pthread_self() << "] Callbacks::performanceData("
	       << ") exits" << std::endl;
	std::cerr << output.str();
    }
#endif
}

void Callbacks::symbolTable(const boost::shared_ptr<CBTF_Protocol_SymbolTable> & in)
{

    // Decode the message
    CBTF_Protocol_SymbolTable message;
    memset(&message, 0, sizeof(message));
    memcpy(&message, in.get(),sizeof(CBTF_Protocol_SymbolTable)); 
    symvec.push_back(message);
}

void process_symvec(const CBTF_Protocol_SymbolTable& message) {
	// Begin a transaction on this experiment's database
        SmartPtr<Database> database = DataQueues::getDatabase(0);
	if(database.isNull()) {

#ifndef NDEBUG
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "symbolTable(): Experiment "
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
#endif

	}
	BEGIN_WRITE_TRANSACTION(database);
	
	// Find the existing linked object in the database
	int linked_object = 
	    getLinkedObjectIdentifier(database, message.linked_object);
#ifndef NDEBUG
	if(linked_object == -1) {
	    if(Frontend::isDebugEnabled()) {
		std::stringstream output;
		output << "[TID " << pthread_self() << "] Callbacks::"
		       << "symbolTable(): Linked Object "
		       << toString(message.linked_object) 
		       << " no longer exists." << std::endl;
		std::cerr << output.str();
	    }
	}
#endif

	// Only proceed if the linked object was found
	if(linked_object != -1) {

	    // Are there functions in the database for this linked object?
	    bool has_functions = false;
	    database->prepareStatement(
	        "SELECT COUNT(*) FROM Functions WHERE linked_object = ?;"
	        );
	    database->bindArgument(1, linked_object);
	    while(database->executeStatement())
		if(database->getResultAsInteger(1) > 0)
		    has_functions = true;

	    // Skip adding these functions if they are already present
	    if(!has_functions) {
	  
		// Iterate over each function entry
		for(int j = 0; j < message.functions.functions_len; ++j) {
		    const CBTF_Protocol_FunctionEntry& msg_function = 
			message.functions.functions_val[j];

		    // Create the function entry
		    database->prepareStatement(
		        "INSERT INTO Functions "
			"  (linked_object, name) "
			"VALUES (?, ?);"
		        );
		    database->bindArgument(1, linked_object);
		    database->bindArgument(2, msg_function.name);
		    while(database->executeStatement());
		    int function = database->getLastInsertedUID();
	    
		    // Iterate over each bitmap for this function
		    for(int k = 0; k < msg_function.bitmaps.bitmaps_len; ++k) {
			const CBTF_Protocol_AddressBitmap& msg_bitmap =
			    msg_function.bitmaps.bitmaps_val[k];

			// Create the function ranges entry
			database->prepareStatement(
		            "INSERT INTO FunctionRanges "
			    "  (function, addr_begin, addr_end, valid_bitmap) "
			    "VALUES (?, ?, ?, ?);"
			    );
			database->bindArgument(1, function);
			database->bindArgument(2,
			    OpenSpeedShop::Framework::Address(msg_bitmap.range.begin)
			    );
			database->bindArgument(3,
			    OpenSpeedShop::Framework::Address(msg_bitmap.range.end)
			    );
			database->bindArgument(4, 
			    Blob(msg_bitmap.bitmap.data.data_len,
				 msg_bitmap.bitmap.data.data_val)
			    );
			while(database->executeStatement());
			
		    }
		    
		}
		
	    }
	    
	    // Are there statements in the database for this linked object?
	    bool has_statements = false;
	    database->prepareStatement(
                "SELECT COUNT(*) FROM Statements WHERE linked_object = ?;"
	        );
	    database->bindArgument(1, linked_object);
	    while(database->executeStatement())
		if(database->getResultAsInteger(1) > 0)
		    has_statements = true;

	    // Skip adding these statements if they are already present
	    if(!has_statements) {

		// Iterate over each statement entry
		for(int j = 0; j < message.statements.statements_len; ++j) {
		    const CBTF_Protocol_StatementEntry& msg_statement =
			message.statements.statements_val[j];
		    
		    // Is there an existing file in the database?
		    int file = -1;
		    database->prepareStatement(
		        "SELECT id FROM Files WHERE path = ?;"
		        );
		    database->bindArgument(1, msg_statement.path.path);

		    // TODO: compare the checksum
		    
		    while(database->executeStatement())
			file = database->getResultAsInteger(1);

		    // Create the file entry if it wasn't present
		    if(file == -1) {
			database->prepareStatement(
		            "INSERT INTO Files (path) VALUES (?);"
			    );
			database->bindArgument(1, msg_statement.path.path);

			// TODO: insert the checksum
			
			while(database->executeStatement());
			file = database->getLastInsertedUID();
		    }

		    // Create the statement entry
		    database->prepareStatement(
	                "INSERT INTO Statements "
		        "  (linked_object, file, line, \"column\") "
		        "VALUES (?, ?, ?, ?);"
		        );
		    database->bindArgument(1, linked_object);
		    database->bindArgument(2, file);
		    database->bindArgument(3, msg_statement.line);
		    database->bindArgument(4, msg_statement.column);
		    while(database->executeStatement());
		    int statement = database->getLastInsertedUID();

		    // Iterate over each bitmap for this statement
		    for(int k = 0; k < msg_statement.bitmaps.bitmaps_len; ++k) {
			const CBTF_Protocol_AddressBitmap& msg_bitmap =
			    msg_statement.bitmaps.bitmaps_val[k];
		
			// Create the statement ranges entry
			database->prepareStatement(
		            "INSERT INTO StatementRanges "
			    "  (statement, addr_begin, addr_end, valid_bitmap) "
			    "VALUES (?, ?, ?, ?);"
			    );
			database->bindArgument(1, statement);
			database->bindArgument(2,
			    OpenSpeedShop::Framework::Address(msg_bitmap.range.begin)
			    );
			database->bindArgument(3,
			    OpenSpeedShop::Framework::Address(msg_bitmap.range.end)
			    );
			database->bindArgument(4, 
		            Blob(msg_bitmap.bitmap.data.data_len,
				 msg_bitmap.bitmap.data.data_val)
			    );
			while(database->executeStatement());
		    
		    }
		    
		}
		
	    }

	}
	
	// End the transaction on this thread's database
	END_TRANSACTION(database);
	
}
