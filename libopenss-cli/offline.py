################################################################################
# Copyright (c) 2008-2012 Krell Institute  All Rights Reserved.
#
# This library is free software; you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the Free
# Software Foundation; either version 2.1 of the License, or (at your option)
# any later version.
#
# This library is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
# details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this library; if not, write to the Free Software Foundation, Inc.,
# 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
################################################################################

import types
import code
import os
import os.path
import re
import string
import sys

import PY_Input

offlinepy_debug = 0
if 'OPENSS_DEBUG_STARTUP' in os.environ:
    offlinepy_debug = os.environ["OPENSS_DEBUG_STARTUP"]

def create_unique_dbname(db_name):
    cnt = 1
    base_name, ext = os.path.splitext(db_name)
    # Python 2.3 does not have lexists which would be prefered here.
    while os.path.isfile(db_name):
	db_name = "%s-%d%s" % (base_name, cnt, ext)
	cnt += 1
    return db_name



def RunOfflineExp(program="*", collector="*", installed="/usr"):
    """Run offline experiment for Open|SpeedShop.
    """

    if os.environ.has_key("OPENSS_DEBUG_CLI_PYTHON_GC"):
	gc.set_debug(gc.DEBUG_LEAK)
	gc.get_objects()
    gc.disable()
    # set up plugins path
    if os.environ.has_key("OPENSS_TARGET_PLUGIN_PATH"):
	plugins = os.environ["OPENSS_TARGET_PLUGIN_PATH"]
	if offlinepy_debug != 0: print "[openss-debug]: using OPENSS_TARGET_PLUGIN_PATH to find OSS plugins"
    elif os.environ.has_key("OPENSS_PLUGIN_PATH"):
	plugins = os.environ["OPENSS_PLUGIN_PATH"]
	if offlinepy_debug != 0: print "[openss-debug]: using OPENSS_PLUGIN_PATH to find OSS plugins"
    else:
	plugin_dir =  OpenssInstallDir + "/lib64/openspeedshop"
	if not os.path.isdir(plugin_dir):
	    plugin_dir =  OpenssInstallDir + "/lib/openspeedshop"
	if not os.path.isdir(plugin_dir):
	    raise RuntimeError("Failed to locate the openspeedshop plugins directory.")
	plugins = plugin_dir

    if offlinepy_debug != 0: print "[openss-debug]: plugins=" + plugins
    rawdir = "/tmp"

    # always write into /tmp/$USER/offline-oss or
    if 'OPENSS_RAWDATA_DIR' in os.environ:
	rawdir = os.environ["OPENSS_RAWDATA_DIR"]
	print "[openss]: Setting up offline raw data directory in " + rawdir + "/offline-oss"
	tempdir = rawdir + "/offline-oss"
	os.system("/bin/rm -rf " + tempdir)
	os.mkdir(tempdir)
	os.environ['OPENSS_RAWDATA_DIR'] = tempdir
    else:
	if 'USER' in os.environ:
	    user = os.environ["USER"]
	else:
	    user = os.path.expanduser(os.getlogin())

	tempdir = rawdir + "/" + user + "/offline-oss"
	if not collector == "mpiotf":
	  print "[openss]: Setting up offline raw data directory in " + tempdir
	if not os.path.isdir(tempdir):
	    os.makedirs(tempdir)
	else:
	    # Empty rawdata from any previous offline experiment
	    # and then recreate the raw data directory.
	    shutil.rmtree(tempdir);
	    os.makedirs(tempdir)
	os.environ['OPENSS_RAWDATA_DIR'] = tempdir

    # Find libmonitor from the configure settings and the libopenss-cli Makefile operations
    libmonitor = "/home/giovanni/oss/deps/lib64" + "/libmonitor.so"
    if not os.path.isfile(libmonitor):
	systemdir = "/usr"
	libdir = systemdir + "/lib64"
	if not os.path.isdir(libdir):
	    libdir = systemdir + "/lib"
	if not os.path.isdir(libdir):
	    raise RuntimeError("[openss error]: Failed to locate the libmonitor library directory.")
	libmonitor = libdir + "/libmonitor.so"
	if not os.path.isfile(libmonitor):
	    raise RuntimeError("[openss error]: Failed to locate the libmonitor.so library. " + libmonitor)

    if offlinepy_debug != 0: print "[openss-debug]: special checking section, libmonitor=" + libmonitor

    # Set the default mpi implementation defined by the O|SS configuration.
    default_mpi_impl = ""

    program_list = program.split()

    # We need to see if any of the programs participating in the
    # experiment are an mpi program. If so we need to include the
    # mpi plugin and trace only MPI_Init to gather the mpi rank info.
    # If we find there is no mpi program then we do not need the mpi
    # plugin aded to preload_files.
    mpi_executable = ""
    mpi_exe_implmentation = ""
    ismpi = bool(0)
    # This is set to 1 because this is checked based on the exit status from os calls
    # and is not used as a bool as ismpi is (specifed, initialized above)
    ismpidriver = 1
    mpi_driver = ""
    path_list = os.path.expandvars("$PATH").split(":")

    for s in program_list:
	file_arg = s
	if offlinepy_debug != 0: print "[openss-debug]: looping through program_list, file_arg=" + file_arg
	if s.startswith("~"):
	    file_arg = s.replace("~", os.path.expanduser("~"))
	    if offlinepy_debug != 0: print "[openss-debug]: replace tilde, file_arg=" + file_arg
	    program = program.replace("~", os.path.expanduser("~"))
	    
	for p in path_list:
	   if offlinepy_debug != 0: 
	      print "[openss-debug]: ------------ START ------------------------"
	      print "[openss-debug]: looping through path_list, p=" + p
	      print "[openss-debug]: looping through path_list, s=" + s
	      if not os.path.isfile(s):
	         print "[openss-debug]: looping through path_list, not os.path.isfile(s)"
	      else:
	         print "[openss-debug]: looping through path_list, else not os.path.isfile(s)"
	      if not ismpi:
	         print "[openss-debug]: looping through path_list, not ismpi"
	      else:
	         print "[openss-debug]: looping through path_list, else not ismpi"
	      if not s.startswith("-"):
	         print "[openss-debug]: looping through path_list,  not s.startswith"
	      else:
	         print "[openss-debug]: looping through path_list,  else not s.startswith"

	   if offlinepy_debug != 0: print "[openss-debug]: looping through path_list, p=" + p
	   if offlinepy_debug != 0: print "[openss-debug]: looping through path_list, s=" + s
	   if offlinepy_debug != 0: print "[openss-debug]: ------------ END   ------------------------"

	   if not os.path.isfile(s) and not ismpi \
	      and not s.startswith("-"):
		file_arg = p + "/" + s
		if offlinepy_debug != 0: print "[openss-debug]: combining p and s, p=" + p
		if offlinepy_debug != 0: print "[openss-debug]: combining p and s, s=" + s
		if offlinepy_debug != 0: print "[openss-debug]: combining p and s, file_arg=" + file_arg
		if os.path.isfile(file_arg):
		    if offlinepy_debug != 0: print "[openss-debug]: os.path.isfile, break, file_arg=" + file_arg
		    break
		else:
		    file_arg = s
		    if offlinepy_debug != 0: print "[openss-debug]: assigning file_arg to s, s=" + s
		    if offlinepy_debug != 0: print "[openss-debug]: assigning file_arg to s, file_arg=" + file_arg

# being code to replace aliases
#
#       Recognize an alias for the executable and replace the alias with the actual value
#       We must recognize the shell the user is running and execute the alias command using
#       that shell, for example:  /bin/csh -c "alias executable"
#       to see if there is an alias for executable.   Then use the replace command in the
#       file_arg and program strings to put in the real command.
	if os.environ.has_key("OPENSS_ALIAS_DETECTION"):
	    result = ""
	    mySHELL = 'echo $SHELL'
	    myshell_result = commands.getoutput(mySHELL)
	    if myshell_result.find("tcsh") != -1 or myshell_result.find("csh") != -1:
	       myAliasCommand = "alias " + file_arg
	       myAliasString = myshell_result + ' -c "' + myAliasCommand + '"'
	       result = commands.getoutput(myAliasString)
	       if result != "":
		  program = program.replace(file_arg, result)
		  file_arg = s.replace(file_arg, result)
		  if offlinepy_debug != 0: print "[openss-debug]: alias processing with s, file_arg, file_arg=" + file_arg

# end code to replace aliases
	if offlinepy_debug != 0: print "[openss-debug]: before os.path.isfile, check, file_arg=" + file_arg
	
	if os.path.isfile(file_arg):
	    # test if the file is elf binary and has the symbol MPI_Init.
	    # We use os.WEXITSTATUS to properly decode the status.
	    if offlinepy_debug != 0: print "[openss-debug]: inside os.path.isfile, check, file_arg=" + file_arg
	    isexecutable = os.system('file -L ' + file_arg + ' | grep -q ELF')

	    if not os.WEXITSTATUS(isexecutable):
		# is this the actual mpi program.
	        if offlinepy_debug != 0: print "[openss-debug]: inside not os.WEXITSTATUS(isexecutable), check, file_arg=" + file_arg
		if not ismpi:
		  ismpidriver = os.system('nm ' + file_arg + ' | grep -q -i MPIR_')

		  #
		  # Do some special checking on SGI systems because we can not detect
		  # that the SGI mpiexec files are mpidrivers.  They do not contain
		  # MPI specific symbols.  So, check to see we are using MPT and then
		  # if the name is mpiexec or mpiexec_mpt set that it is a mpidriver.
		  # BUT - OPENSS_MPI_IMPLEMENTATION must be set.  So, this seems safe
		  #

		  if offlinepy_debug != 0: print "[openss-debug]: special checking section, file_arg=" + file_arg
		  if os.WEXITSTATUS(ismpidriver):
		     if offlinepy_debug != 0: print "[openss-debug]: inside if not os.WEX(ismpidriver)"
		     if 'OPENSS_MPI_IMPLEMENTATION' in os.environ:
			if offlinepy_debug != 0: print "[openss-debug]: inside OPENSS_MPI_IMPLEMENTATION is set"
			set_mpi_impl = os.environ["OPENSS_MPI_IMPLEMENTATION"]

			if set_mpi_impl == "MPT" or set_mpi_impl == "mpt":
			     if offlinepy_debug != 0: print "[openss-debug]: inside OPENSS_MPI_IMPLEMENTATION is equal to mpt"
			     file_arg_basename = os.path.basename(file_arg)
			     if offlinepy_debug != 0: print "[openss-debug]: file_arg_basename=" + file_arg_basename
			     if file_arg_basename == "mpiexec" or file_arg_basename == "mpiexec_mpt":
				 if offlinepy_debug != 0: print "[openss-debug]: inside file_arg_basename is equal to mpiexec or mpiexec_mpt"
				 ismpidriver = bool(1)
				 if offlinepy_debug != 0: print "[openss-debug]: setting ismpidriver to bool 1"

			     if file_arg_basename == "mpirun":
				 if offlinepy_debug != 0: print "[openss-debug]: inside file_arg_basename is equal to mpirun"
				 ismpidriver = bool(1)
				 if offlinepy_debug != 0: print "[openss-debug]: setting ismpidriver to bool 1"

			if set_mpi_impl == "openmpi":
			     if offlinepy_debug != 0: print "[openss-debug]: inside OPENSS_MPI_IMPLEMENTATION is equal to openmpi"
			     file_arg_basename = os.path.basename(file_arg)
			     if offlinepy_debug != 0: print "[openss-debug]: file_arg_basename=" + file_arg_basename
			     if file_arg_basename == "mpirun" or file_arg_basename == "orterun" or file_arg_basename == "mpiexec":
				 if offlinepy_debug != 0: print "[openss-debug]: inside file_arg_basename is equal to mpirun or orterun"
				 ismpidriver = bool(1)
				 if offlinepy_debug != 0: print "[openss-debug]: setting ismpidriver to bool 1"

		  if not os.WEXITSTATUS(ismpidriver):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(file_arg, mpi_driver)
		    if offlinepy_debug != 0: print "[openss-debug]: setting program to program.replace(file_arg, mpi_driver), program=" + program
		    if offlinepy_debug != 0: print "[openss-debug]: setting program to program.replace(file_arg, mpi_driver), mpi_driver=" + mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: setting program to program.replace(file_arg, mpi_driver), orig_mpi_driver=" + orig_mpi_driver
		    preload_files = ""
		    if ismpi:
			islampi = os.system('nm ' + file_arg + ' | grep -q lampi_environ_init')
			ismpt = os.system('nm ' + file_arg + ' | grep -q  MPI_debug_breakpoint')
			islam = os.system('nm ' + file_arg + ' | grep -q  lam_tv_init')
			isopenmpi = os.system('nm ' + file_arg + ' | grep -q orterun')
			if not os.WEXITSTATUS(isopenmpi):
			  mpi_exe_implmentation = "openmpi"
			elif not os.WEXITSTATUS(islam):
			  mpi_exe_implmentation = "lam"
			elif not os.WEXITSTATUS(islampi):
			  mpi_exe_implmentation = "lampi"
			elif not os.WEXITSTATUS(ismpt):
			  mpi_exe_implmentation = "mpt"

			continue

		# is this the mpidriver and what implementation is it.
		if ismpi:
		  has_mpi_init = os.system('nm ' + file_arg + ' | grep -q -i MPI_Init')
		  #
		  # Do not require that the mpi program run by mpirun have the
		  # symbol MPI_Init.  i.e. mpirun -np 2 /bin/date should be allowed.
		  # We do not find MPI in the file_arg and there is a specific MPI IMPLEMENTATION known
		  # So, we assign the file_arg as the mpi executable.
		  #
		  if offlinepy_debug != 0: print "[openss-debug]: checking whether file_arg is mpi executable, file_arg=" + file_arg
		  if offlinepy_debug != 0: print "[openss-debug]: checking whether file_arg is mpi executable, mpi_exe_implmentation=" + mpi_exe_implmentation
		  if os.WEXITSTATUS(has_mpi_init) and not len(mpi_exe_implmentation) == 0:
		    mpi_executable = file_arg
		    if offlinepy_debug != 0: print "[openss-debug]: mpi executable is not mpi prog, mpi_executable=" + mpi_executable
		    if offlinepy_debug != 0: print "[openss-debug]: mpi executable is not mpi prog, mpi_exe_implmentation=" + mpi_exe_implmentation
		    break
		  #
		  # We do not find MPI in the file_arg 
		  # So, if the OPENSS_MPI_IMPLEMENTATION variable is set then we can assign the file_arg as the mpi executable.
		  # Why?  There are use cases where the user has an executable that does not contain MPI symbols but is an
		  # MPI executable because they use dlopen to load the MPI code into the executable later.
		  #
		  if os.WEXITSTATUS(has_mpi_init) and not os.environ["OPENSS_MPI_IMPLEMENTATION"] == "":
		    mpi_executable = file_arg
		    if offlinepy_debug != 0: print "[openss-debug]: no has_mpi_init and no MPI_IMPLEMENTATION, mpi_executable is file_arg=" + file_arg
		    break
		  if not os.WEXITSTATUS(has_mpi_init):
		    mpi_executable = file_arg
		    if offlinepy_debug != 0: print "[openss-debug]: has_mpi_init, mpi_executable is file_arg=" + file_arg
		    break
		  if mpi_exe_implmentation == "mpich2":
		    if offlinepy_debug != 0: print "[openss-debug]: mpich2, mpi_executable is file_arg=" + file_arg
		    mpi_executable = file_arg
		    mpich2_prefix_val = ""
		    machine_dependent_libdir_val = "lib64"
		    fmpich_so_exists = os.system('test -f' + mpich2_prefix_val + '/' + machine_dependent_libdir_val + '/' + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mpich2_libs = mpich2_prefix_val + '/' + machine_dependent_libdir_val + '/' + libfmpich.so
		    alt_machine_dependent_libdir_val = "lib"
		    fmpich_so_exists = os.system('test -f' + mpich2_prefix_val + '/' + alt_machine_dependent_libdir_val + '/' + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mpich2_libs = mpich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so
		    break
		  if mpi_exe_implmentation == "mpt":
		    if offlinepy_debug != 0: print "[openss-debug]: mpt, mpi_executable is file_arg=" + file_arg
		    mpi_executable = file_arg
		    break
		  if mpi_exe_implmentation == "openmpi":
		    mpi_executable = file_arg
		    if offlinepy_debug != 0: print "[openss-debug]: openmpi, mpi_executable is file_arg=" + file_arg
		    break
		  if mpi_exe_implmentation == "mvapich":
		    mpi_executable = file_arg
		    if offlinepy_debug != 0: print "[openss-debug]: mvapich, mpi_executable is file_arg=" + file_arg
		    break
		  if mpi_exe_implmentation == "mvapich2":
		    mpi_executable = file_arg
		    mvapich2_prefix_val = ""
		    machine_dependent_libdir_val = "lib64"
		    fmpich_so_exists = os.system('test -f' + mvapich2_prefix_val + "/" + machine_dependent_libdir_val + "/" + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mvapich2_libs = mvapich2_prefix_val + "/" + machine_dependent_libdir_val + "/" + libfmpich.so
		    alt_machine_dependent_libdir_val = "lib"
		    fmpich_so_exists = os.system('test -f' + mvapich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mvapich2_libs = mvapich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so
		    break
		    if offlinepy_debug != 0: print "[openss-debug]: mvapich2, mpi_executable is file_arg=" + file_arg
		    break
	    else:
		isscript = os.system('file -L ' + file_arg + ' | grep -q script')
		if not os.WEXITSTATUS(isscript):
		  # Lets hope the mpich2 driver always has Argonne in its copyright.
		  if offlinepy_debug != 0: print "[openss-debug]: isscript section, file_arg=" + file_arg
		  ismpich2_cray_vers1 = os.system('grep -q -i \"srun - Wrapper for Cray\" ' + file_arg)
		  ismpich2_cray_vers2 = os.system('grep -q -i \"aprun -- A wrapper around the Cray aprun\" ' + file_arg)
		  ismpich = os.system('grep -q -i \"MPIRUN for MPICH\" ' + file_arg)
		  ismpich2 = os.system('grep -q -i Argonne ' + file_arg)
		  ismvapich = os.system('grep -q -i \"Wrapper for job submission on Hert related machines\" ' + file_arg)
		  ismvapich2 = os.system('grep -q -i \"MVAPICH2 software package developed\" ' + file_arg)
		  islsf = os.system('grep -q -i \"PJL_WRAPPER\" ' + file_arg)

		  # if both ismpich2 and ismvapich2 are set, choose mpich2
		  if not os.WEXITSTATUS(ismpich2) and not os.WEXITSTATUS(ismvapich2):
			ismpich2 = bool(0)
			if offlinepy_debug != 0: print "[openss-debug]: both ismpich2 and ismvapich2 are set choose mpich2"

		  # if ismpich is set then don't do a check for mpich2
		  if os.WEXITSTATUS(ismpich) and os.WEXITSTATUS(ismpich2) and os.WEXITSTATUS(islsf):
			ismpich2 = os.system('grep -q -i Intel ' + file_arg)
			if offlinepy_debug != 0: print "[openss-debug]: if ismpich is set then don't do a check for mpich2"

		  ismpt = os.system('grep -q -i \"SGI Message Passing Toolkit\" ' + file_arg)
		  isMPT = os.system('grep -q -i sgimpirun ' + file_arg)
		  isopenmpi = os.system('grep -q -i orterun ' + file_arg)
		  if not os.WEXITSTATUS(ismpich):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mpich"
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich program=" + program
 		  if not os.WEXITSTATUS(ismpich2_cray_vers1):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mpich2"
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2_cray_vers1 orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2_cray_vers1 program=" + program
		  if not os.WEXITSTATUS(ismpich2_cray_vers2):
 		    ismpi = bool(1)
 		    mpi_driver = os.path.realpath(file_arg)
 		    orig_mpi_driver = s
 		    program = program.replace(s, file_arg)
 		    preload_files = ""
 		    mpi_exe_implmentation = "mpich2"
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2_cray_vers2 orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2_cray_vers2 program=" + program
		  if not os.WEXITSTATUS(ismpich2):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mpich2"
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2 orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismpich2 program=" + program
		  if not os.WEXITSTATUS(ismpt):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mpt"
		    if offlinepy_debug != 0: print "[openss-debug]: ismpt orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismpt program=" + program
		  if not os.WEXITSTATUS(isMPT):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mpt"
		    if offlinepy_debug != 0: print "[openss-debug]: isMPT orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: isMPT program=" + program
		  if not os.WEXITSTATUS(isopenmpi):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "openmpi"
		    if offlinepy_debug != 0: print "[openss-debug]: isopenmpi orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: isopenmpi program=" + program
		  if not os.WEXITSTATUS(ismvapich):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mvapich"
		    if offlinepy_debug != 0: print "[openss-debug]: ismvapich orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismvapich program=" + program
		  if not os.WEXITSTATUS(ismvapich2):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    mpi_exe_implmentation = "mvapich2"
		    # See if libmpich.so exists and setup the variables for BG specific usage.  Not probably needed at this point, but in for completeness
		    mvapich2_prefix_val = ""
		    machine_dependent_libdir_val = "lib64"
		    fmpich_so_exists = os.system('test -f' + mvapich2_prefix_val + "/" + machine_dependent_libdir_val + "/" + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mvapich2_libs = mvapich2_prefix_val + "/" + machine_dependent_libdir_val + "/" + libfmpich.so
		    alt_machine_dependent_libdir_val = "lib"
		    fmpich_so_exists = os.system('test -f' + mvapich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so)
		    if not os.WEXITSTATUS(fmpich_so_exists):
		      f_mvapich2_libs = mvapich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so
		    if offlinepy_debug != 0: print "[openss-debug]: ismvapich2 orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: ismvapich2 program=" + program

		    # See if libmpich.so exists and setup the variables for BG specific usage. 
		    if mpi_exe_implementation == "mpich2":
		      mpich2_prefix_val = ""
		      machine_dependent_libdir_val = "lib64"
		      fmpich_so_exists = os.system('test -f' + mpich2_prefix_val + '/' + machine_dependent_libdir_val + '/' + libfmpich.so)
		      if not os.WEXITSTATUS(fmpich_so_exists):
			f_mpich2_libs = mpich2_prefix_val + '/' + machine_dependent_libdir_val + '/' + libfmpich.so
		      alt_machine_dependent_libdir_val = "lib"
		      fmpich_so_exists = os.system('test -f' + mpich2_prefix_val + '/' + alt_machine_dependent_libdir_val + '/' + libfmpich.so)
		      if not os.WEXITSTATUS(fmpich_so_exists):
			f_mpich2_libs = mpich2_prefix_val + "/" + alt_machine_dependent_libdir_val + "/" + libfmpich.so
		  if not os.WEXITSTATUS(islsf):
		    ismpi = bool(1)
		    mpi_driver = os.path.realpath(file_arg)
		    orig_mpi_driver = s
		    program = program.replace(s, file_arg)
		    preload_files = ""
		    #mpi_exe_implmentation = "mpich2"
		    #ismpich2 = bool(1)
		    if offlinepy_debug != 0: print "[openss-debug]: islsf orig_mpi_driver=" + orig_mpi_driver
		    if offlinepy_debug != 0: print "[openss-debug]: islsf program=" + program



    # Set the mpiplugin to use for mpi jobs.  The OPENSS_MPI_IMPLEMENTATION
    # is primarily used to choose a different mpi (e.g. mpich vs. openmpi)
    # for systems that have more than on mpi implementation configured for
    # use with O|SS.
    use_mpi_impl = ""

    if ismpi:

      if 'OPENSS_MPI_IMPLEMENTATION' in os.environ:
	use_mpi_impl = os.environ["OPENSS_MPI_IMPLEMENTATION"]
	if offlinepy_debug != 0: print "[openss-debug]: ismpi, and have OPENSS_MPI_IMPLEMENTATION set use_mpi_impl=" + use_mpi_impl
      else:
	if mpi_exe_implmentation == "":
	    use_mpi_impl = default_mpi_impl.lower()
	else:
	    use_mpi_impl = mpi_exe_implmentation

      if mpi_executable == "":
	if use_mpi_impl == "":
	    raise RuntimeError("[openss error]: Failed to locate the mpi program.")
	else:
	    if not os.WEXITSTATUS(ismpidriver):
	       mpi_executable = file_arg
	       if offlinepy_debug != 0: print "[openss-debug]: mpi_exe_implementation is set, mpi_exe_implementation" + mpi_exe_implementation
	       if offlinepy_debug != 0: print "[openss-debug]: because mpi_exe_implementation is set, mpi_executable is file_arg=" + file_arg
	    else:
	       raise RuntimeError("[openss error]: Failed to locate the mpi program.")

      mpiplugin = plugins + "/mpi-" + use_mpi_impl + "-rt-offline.so"
      if offlinepy_debug != 0: print "[openss-debug]: mpiplugin=%(plu)s\n" % {'plu':mpiplugin}

      os.environ['OPENSS_MPI_IMPLEMENTATION'] = use_mpi_impl

      if not os.path.isfile(mpiplugin):
	# TODO: This should only error out for cases where something
	# like pcsamp is the collector and there should be mpi too.
	#raise RuntimeError("Failed to locate the mpi runtime plugin. " + libmonitor)
	#print "[openss warning]: Failed to locate the mpi runtime plugin. " + mpiplugin
	#print "[openss warning]: No MPI rank identifiers will be recorded in the openss database."
	if offlinepy_debug != 0: print "[openss-debug]: NON-NULL case, mpiplugin=%(plu)s\n" % {'plu':mpiplugin}
    else:
	mpiplugin = ""
	if offlinepy_debug != 0: print "[openss-debug]: NULL case, mpiplugin=%(plu)s\n" % {'plu':mpiplugin}

    # Allow the user to just use the know mpi and mpit collector names.
    # We will prepend the proper mpi implementation.
    orig_collectorname = collector;
    if collector.startswith("mpi"):
	preload_files = ""
	if collector == "mpi":
	    collector = collector + "-" + use_mpi_impl
	elif collector == "mpit":
	    collector = collector + "-" + use_mpi_impl
	elif collector == "mpiotf":
	    collector = collector + "-" + use_mpi_impl
	if offlinepy_debug != 0: print "[openss-debug]: mpi collector case, collector=%(col)s\n" % {'col':collector}
    else:
	# In case this may be an mpi program, setup preload_files to
	# also include the mpi plugin.  
	# dpm/jeg 10/15/08 - Removed setting of OPENSS_MPI_TRACED here.
	# The new ossrun sets it instead of doing it here.
	preload_files = mpiplugin

    # Form the command that will run the offline experiment
    # For MPI programs we will call ossrun to handle setting up the
    # collector for just the actual mpi program and not the mpi driver too.

    # Determine if this is a Blue Gene platform.  For shared execution on a Blue Gene platform
    # we can not execute a script (ossrun) on the compute nodes.  We must do the creation of the
    # LD_PRELOAD values for the offline experiment here instead of in ossrun.  We pass the LD_PRELOAD
    # values on the Blue Gene through the mpi driver command as an argument.
    do_preload_here = 0
    ldpreload = ""
    #if os.environ.has_key("OPENSS_TARGET_ARCH"):
    #   targ_arch = os.environ["OPENSS_TARGET_ARCH"]
    if "x86_64-unknown-linux-gnu" == "bgq":
	   do_preload_here = 1
	   if offlinepy_debug != 0: print "[openss-debug]: using target_os=bgq"
    if "x86_64-unknown-linux-gnu" == "bgp":
	   do_preload_here = 1
	   if offlinepy_debug != 0: print "[openss-debug]: using target_os=bgp"

    if do_preload_here == 1:

       if offlinepy_debug != 0: print "[openss-debug]: (1)do_preload_here=%(dph)s" % {'dph':do_preload_here}

       if collector == "mpi" or collector == "mpit" or collector == "mpiotf":
	   mpicollector = collector + "-" + use_mpi_impl
	   ldpreload = plugins + "/" + mpicollector + "-rt-offline.so" + ":" + extra_mpi_libs + ":" + libmonitor
       elif collector == "mpi-*" or collector == "mpit-*" or collector == "mpiotf-*":
	   mpicollector = collector
	   ldpreload = plugins + "/" + mpicollector + "-rt-offline.so" + ":" + extra_mpi_libs + ":" + libmonitor
       else:
	   ldpreload = plugins + "/" + collector + "-rt-offline.so" + ":" + libmonitor

       if offlinepy_debug != 0: print "[openss-debug]: using ldpreload=" + ldpreload
       if offlinepy_debug != 0: print "[openss-debug]: using program=" + program
       if offlinepy_debug != 0: print "[openss-debug]: using mpi_executable=" + mpi_executable

       #command = program.replace(mpi_exe_orig, " " + mpi_executable) 
       #if offlinepy_debug != 0: print "[openss-debug]: using command=" + command
       #--runjob-opts=
       command = program.replace(mpi_executable, "--runjob-opts=\"--envs LD_PRELOAD=" + ldpreload + '"' + " " + mpi_executable) 
       if offlinepy_debug != 0: print "[openss-debug]: using command=" + command

       os.system(command)



    else:
       if offlinepy_debug != 0: print "[openss-debug]: (0)do_preload_here=%(dph)s" % {'dph':do_preload_here}
       real_ossrun_command = "/home/giovanni/oss/build" + "/bin/ossrun" 
       if mpi_executable != "":
	   mpi_exe_orig = mpi_executable
	   if not mpi_executable.startswith("/") and not mpi_executable.startswith("."):
	     mpi_executable = os.curdir + "/" + mpi_executable

	   if collector == "mpiotf":
	    ossrun_command = real_ossrun_command + " -o " + os.environ['OPENSS_RAWDATA_DIR'] 
	   else:
	    ossrun_command = real_ossrun_command 
	   # 
	   # Change made on 10/20/11 to better support redirection inside the quoted executable. (dpm/jeg) Found at NASA
	   # 
	   #command = program.replace(mpi_exe_orig, ossrun_command + " -c " + orig_collectorname + " \"" + mpi_executable)
	   #command = command + "\" " 
	   command = program.replace(mpi_exe_orig, ossrun_command + " -c " + orig_collectorname + " " + mpi_executable) 

       else:
	   preload_files = ""
	   command = program
	   if not command.startswith("/") and not command.startswith("."):
	     command = os.curdir + "/" + command

       collectorplugin =  plugins + "/" + collector + "-rt-offline.so"
       if offlinepy_debug != 0: print "[openss-debug]: Plugins %(plu)s offline %(col)s experiment using the command:\n\"%(cmd)s\"\n" \
	      % {'plu':plugins,'col':collector,'cmd':command}


       if not os.path.isfile(collectorplugin):
	 raise RuntimeError("[openss error]: Failed to locate the " +  collector + " runtime plugin.")
	 # this code below could replace the error here so we could
	 # just let the program run without our data collectors.
	 #collectorplugin = ""
	 #preload_files = ""

       # Prepare our collectors and libmonitor for LD_PRELOAD.
       oss_preload = ""
       if offlinepy_debug != 0: print "[openss-debug]: preload_files=%(plf)s\n" % {'plf':preload_files}
       if mpi_executable == "":
	   oss_preload = \
		 collectorplugin + \
		   ":" + preload_files + \
		   ":" + libmonitor
	   if offlinepy_debug != 0: print "[openss-debug]: oss_preload=%(opl)s\n" % {'opl':oss_preload}


       # Execute the command in a subprocess rather than replacing the
       # current process like os.system does. Need Python 2.4 or later for this.
       print "[openss]: Running offline %(col)s experiment using the command:\n\"%(cmd)s\"\n" \
	      % {'col':collector,'cmd':command}

       python_ver = sys.version[0:3]
       if python_ver > "2.3":
	   # For python versions > 2.4 we run mpi programs using the Popen method
	   # of the subprocess class.  If the program is not MPI then just use
	   # the os.system call.
	   if mpi_executable == "":
	       # This is the easiest way for simple scalar programs.
	       # We do not need to worry about interfering with
	       # interactive programs and muck with any stdIO here.
	       # If we can handle an interactive programm (like openss itself)
	       # with the subprocess method then we should eventually do that.
	       command = "env" +  \
		   " LD_PRELOAD=" + oss_preload + ":$LD_PRELOAD " + command

	       if offlinepy_debug != 0: print "\n[openss debug]: non-mpi, USING os.system to execute " + command
	       if offlinepy_debug != 0: print "\n[openss debug]: non-mpi, oss_preload=" + oss_preload
	       os.system(command)
	   else:
	       # This is specificly here for mpi programs.
	       command = command

	       if offlinepy_debug != 0: print "\n[openss debug]: mpi, USING os.system to execute " + command
	       os.system(command)

	   # Comment out the subprocess code for now.
	       #import subprocess
	       #subp = subprocess.Popen(command, shell=True,
      	       #			    stdout=subprocess.PIPE,
	       #			    stdin=subprocess.PIPE,)
				    #env={"LD_PRELOAD":oss_preload})
	       #    while True:
	       #	o = subp.stdout.readline()
	       #	if o == '' and subp.poll() != None: break
	       #	sys.stdout.write(o)

       else:
	   # For python 2.3 just run the experiment using os.system.
	   # This includes mpi programs.
	   command = "env" +  \
		     " LD_PRELOAD=" + oss_preload + ":$LD_PRELOAD " + command
	   os.system(command)

    # -----------------------------------------------------------------------------------------------------------------------------------
    # After the execution of the application under control of OpenSpeedShop, we now process the raw data files and create a database file
    # -----------------------------------------------------------------------------------------------------------------------------------

    if os.environ.has_key("OPENSS_RAWDATA_ONLY"):
	print "\n[openss]: Raw data files have been created.  Use ossutil to create an Open|SpeedShop database."
	print "[openss]: Raw data files are located at %(rawdata)s " % {'rawdata':os.environ['OPENSS_RAWDATA_DIR']}
	print "[openss]: CAUTION: Subsequent runs may reuse the raw data location and cause the raw data files from this experiment to be lost.\n"
    else:
	if not collector.startswith("mpiotf"):
	  oss_cur_dir = os.getcwd()
	  oss_db_dir = os.getcwd()
	  if os.environ.has_key("OPENSS_DB_DIR"):
	    oss_db_dir = os.environ['OPENSS_DB_DIR']
	    os.chdir(oss_db_dir)
	  print "\n[openss]: Converting raw data from %(rawdata)s into temp file %(ossfile)s\n" \
	      % {'rawdata':os.environ['OPENSS_RAWDATA_DIR'],'ossfile':"X.0.openss"}
   
   	  # currently ossutil writes openss databases to ever increasing
   	  # database files from the lowest it finds.
   	  # Lets just always remove X.0.openss so that is our default for now.
   	  # Always defaulting to X.0.openss allows us to use restore below with
   	  # no need to worry about finding which file was just written.
   	  clean_command = "/bin/rm -f " + oss_db_dir + "/X.0.openss"
   	  os.system(clean_command)
   
   	  # Convert the rawdata files into opens database format.
   	  convert_command = OpenssInstallDir + "/bin/ossutil " + os.environ['OPENSS_RAWDATA_DIR']
   	  os.system(convert_command)
   
   	  # rename the default X.0.openss database with program name
   	  # and collector name as a base.  The create_unique_dbname call
   	  # will ensure we do not overwrite and existing openss database
   	  # by bumping a count and prepending it before the .openss extension.
	  if mpi_executable == "":
	    ossdbfile = os.path.basename(program)
	  else:
	    ossdbfile = os.path.basename(mpi_executable)
   
	  # Remove spaces and any arguments to the program.
	  prgwargs = ossdbfile.split(" ")
	  ossdbfile = prgwargs[0] +  "-" + collector
   
	  tfile = ossdbfile + ".openss"
	  tfile = create_unique_dbname(tfile)
   	  # Python 2.3 does not have lexists which would be prefered here.
 	  if  os.path.isfile('X.0.openss'):
	    os.rename('X.0.openss',tfile)
	  else:
   	    print "\n[openss error]: could not find X.0.openss"
   	    return
   
	  print "\n[openss]: Restoring and displaying default view for:\n\t" + oss_db_dir + "/" + tfile
   
	  # restore the newly created database into openss.
	  r_line = myparse.process("exprestore -f " + oss_db_dir + "/" + tfile)
	  myparse.runsource(r_line, "stderr")
   
	  # restore original rawdata directory
	  os.environ['OPENSS_RAWDATA_DIR'] = rawdir
	  # restore current working directory
	  if os.environ.has_key("OPENSS_DB_DIR"):
	    os.chdir(oss_cur_dir)
	else:
 	  print "\n[openss]: Open Trace Files (OTF) files have been created.  Use an appropriate tool for viewing the OTF files."
   
