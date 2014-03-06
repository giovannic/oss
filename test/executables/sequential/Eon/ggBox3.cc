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




//
// ggBox3.C-- definitions of the functions for class ggBox3
//
// Author:  Peter Shirley
//          Aug. 30, 1993
// Modified: Byung Sung Cho
//           Nov. 1, 1993
//
// Copyright 1993 by Peter Shirley and Byung Sung Cho
//
// Permission to use, copy, and distribute for non-commercial purposes,
// is hereby granted without fee, providing that the above copyright
// notice appears in all copies.
//
// The software may be modified for your own purposes, but modified versions
// may not be distributed.
//

#include <ggConstants.h>
#include <ggBox3.h>


//
// ggONB3
//

//
// Constructors
//


//
// Operators
//

//
// Methods
//

ggBoolean ggBox3::hitByRay(const ggRay3& r, double& t1, double& t2) const
{
    double tx1, tx2, ty1, ty2, tz1, tz2;

    if (r.direction().x() > ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().x()) > 0.0000001);
#endif
        tx1 = (min().x() - r.origin().x()) / r.direction().x();
        tx2 = (max().x() - r.origin().x()) / r.direction().x();
    }
    else if (r.direction().x() < -ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().x()) > 0.0000001);
#endif
        tx1 = (max().x() - r.origin().x()) / r.direction().x();
        tx2 = (min().x() - r.origin().x()) / r.direction().x();
    }
    else {
         tx1 = -ggInfinity;
         tx2 = ggInfinity;
    }

    if (r.direction().y() > ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().y()) > 0.0000001);
#endif
        ty1 = (min().y() - r.origin().y()) / r.direction().y();
        ty2 = (max().y() - r.origin().y()) / r.direction().y();
    }
    else if (r.direction().y() < -ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().y()) > 0.0000001);
#endif
        ty1 = (max().y() - r.origin().y()) / r.direction().y();
        ty2 = (min().y() - r.origin().y()) / r.direction().y();
    }
    else {
         ty1 = -ggInfinity;
         ty2 = ggInfinity;
    }

    if (r.direction().z() > ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().z()) > 0.0000001);
#endif
        tz1 = (min().z() - r.origin().z()) / r.direction().z();
        tz2 = (max().z() - r.origin().z()) / r.direction().z();
    }
    else if (r.direction().z() < -ggEpsilon) {
#ifdef GGSAFE
        assert(fabs(r.direction().z()) > 0.0000001);
#endif
        tz1 = (max().z() - r.origin().z()) / r.direction().z();
        tz2 = (min().z() - r.origin().z()) / r.direction().z();
    }
    else {
         tz1 = -ggInfinity;
         tz2 = ggInfinity;
    }
   
    if (tx1 > ty1)
        t1 = tx1;
    else
        t1 = ty1;
    if (tz1 > t1) t1 = tz1;
   
    if (tx2 < ty2)
        t2 = tx2;
    else
        t2 = ty2;
    if (tz2 < t2) t2 = tz2;

    return (t2 > t1);

}


//
// Members
//


//
// Non-friends
//

// == operator
ggBoolean  operator==(const ggBox3& o1, const ggBox3 &o2) {
    return ( o1.min() == o2.min() && o1.max() == o2.max() );
}

// Output operator
ostream & operator<<(ostream &os, const ggBox3 &t) {
    os <<  "( " << t.min() << ", " << t.max() << " )";
    return os;
}


ggBoolean ggCommonIntersectBox3(const ggBox3& b1, const ggBox3& b2, ggBox3& bi)
{
   double mx, my, mz;

   if (ggOverlapBox3(b1, b2)) {
    if (b1.min().x() < b2.min().x() )
      mx = b2.min().x();
    else 
      mx = b1.min().x();

    if (b1.min().y() < b2.min().y() )
      my = b2.min().y();
    else 
      my = b1.min().y();

    if (b1.min().z() < b2.min().z() )
      mz = b2.min().z();
    else 
      mz = b1.min().z();

    bi.SetMin( ggPoint3(mx, my, mz) );

    if (b1.max().x() < b2.max().x() )
      mx = b1.max().x();
    else 
      mx = b2.max().x();

    if (b1.max().y() < b2.max().y() )
      my = b1.max().y();
    else 
      my = b2.max().y();

    if (b1.max().z() < b2.max().z() )
      mz = b1.max().z();
    else 
      mz = b2.max().z();

    bi.SetMax( ggPoint3(mx, my, mz) );

    return ggTrue;
  }
  else
    return ggFalse;
}
    

