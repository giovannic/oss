//////////////////////////////// -*- C++ -*- //////////////////////////////
//
// AUTHOR
//    Peter Shirley, Cornell University, shirley@graphics.cornell.edu 
//
// COPYRIGHT
//    Copyright (c) 1995  Peter Shirley. All rights reserved.
//
//    Permission to use, copy, modify, and distribute this software for any
//    purpose without fee is hereby granted, provided that this entire
//    notice is included in all copies of any software which is or includes
//    a copy or modification of this software and in all copies of the
//    a copy or modification of this software and in all copies of the
//    supporting documentation for such software.
//
// DISCLAIMER
//    Neither the Peter Shirley nor Cornell nor any of their
//    employees, makes any warranty, express or implied, or assumes any
//    liability or responsibility for the accuracy, completeness, or
//    usefulness of any information, apparatus, product, or process
//    disclosed, or represents that its use would not infringe
//    privately-owned rights.  
//
///////////////////////////////////////////////////////////////////////////



#include <ggBRDF.h>
#include <iostream.h>


ggSpectrum ggBRDF::averageValue() const {

   #ifdef GGSAFE
         cerr << "Warning: ggBRDF::average value not defined for this material \n";
   #endif

   return ggSpectrum((float) 0.0);
}


ggSpectrum ggBRDF::value(const ggVector3&,
                           const ggVector3&,
                           const ggONB3&) const {
   #ifdef GGSAFE
         cerr << "Warning: ggBRDF::value not defined for this material \n";
   #endif

   return ggSpectrum((float) 0.0);
}
