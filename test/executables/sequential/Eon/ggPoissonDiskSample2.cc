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



// Function definition for Poisson Disk sampling over unit square. Refer to 
// the source file ggPoissonDiskSample2.h
//
// Author:     Peter Shirley
// Modified:   Rajesh Kamath, 1993
//
// Copyright 1993 by Peter Shirley, Rajesh Kamath
//
// Permission to use, copy, and distribute for non-commercial purposes,
// is hereby granted without fee, providing that the above copyright
// notice appears in all copies.
//
// The software may be modified for your own purposes, but modified versions
// may not be distributed.
//
#include <ggRanNum.h>
#include <ggPoissonDiskSample2.h>

//Constructor: 1
//Inputs: none
//Side Effects: All data members initialized to 0
//              Data Index initialized to be (int *)0
//              Separation set to minimum

ggPoissonDiskSample2 :: ggPoissonDiskSample2(){
  Nsamples = npixel =0;
  dataIndex = (int *)0;
  sqMinDist = 0.0;
}


//Inputs: number of samples required
//Side Effects: all data members initialized, requirement recorded
//              Data Index constructed and initialized
//Checks: Input sanity check

ggPoissonDiskSample2 :: ggPoissonDiskSample2(const int& n){

#ifdef GGSAFE
  assert( n > 0);
  assert( n < ggMaxSamples);
#endif

  Nsamples  = 0;
  npixel = n;
  dataIndex = InitSequence(npixel);
  sqMinDist = 0.0;
}



//Constructor: 3
//Inputs: number of samples required, minimum separation required
//Side Effects: all data members initialized, requirement recorded
//              Data Index constructed and initialized
//Checks: Input sanity check
ggPoissonDiskSample2 :: ggPoissonDiskSample2(const int& n,
						     const double& sep){
#ifdef GGSAFE
  assert( (n>0) && (n < ggMaxSamples));
  assert( sep <= ggSqrtTwo);	// Minimum separation has to be less than
#endif			        // sqrt 2, the diagonal length

  npixel = n;
  dataIndex = InitSequence(npixel);

  Nsamples = 0;
  sqMinDist = sep*sep;
}

//Member Function: SetN
//Inputs: number of samples required, minmum separation required
//Side Effects: all data members initialized, requirement recorded
//              Data Index constructed and initialized
//Checks: Input sanity check, Old data deleted, if any

void ggPoissonDiskSample2 :: SetN(const int& n, const double& sep)
{

#ifdef GGSAFE
  assert((n>0) && (n < ggMaxSamples));
  assert( sep <= ggSqrtTwo);	// Minimum separation has to be less than
#endif			        // sqrt 2, the diagonal length

  if(npixel)
    delete [] dataIndex;
  npixel = n;

  dataIndex = InitSequence(npixel);
  
  if(Nsamples)
    data.Clear();		// Delete the old train, if any
  Nsamples = 0;

  sqMinDist = sep*sep;
}



//Member Function: Set Separation
//Input: separation required
//Return: none
//Side Effects: The minimum separation is recorded, npixels does NOT change
//              Old Data cleared.
//Checks: Input Sanity

void ggPoissonDiskSample2 :: SetSeparation(const double& sep)
{
#ifdef GGSAFE
  assert(sep >= 0.0 );
  assert(sep <= ggSqrtTwo);  
#endif

  sqMinDist = sep * sep;

  if(Nsamples)
    data.Clear();

  Nsamples = 0;
}



//Member Function: Generate
//Input: None
//Return: the number of Samples generated
//Side Effects: Generates the points according to strategy, but degenerates
//              into Random Sampling if failure rate is high.
//              Permutes Data Index freshly

int ggPoissonDiskSample2 :: Generate(){
  int i,j;
  ggPoint2 testPt;
  ggBoolean flag;
  ggRanReal<double> r01;
  int maxFailures = 10*npixel;
  double smd = sqMinDist;

#ifdef GGSAFE
  assert(npixel);
#endif
  
  
  for(i = 0; i < npixel;)
    {
      testPt.Set( r01(), r01());
      flag = ggTrue;
      for(j =0; j < i; j++)
	if( isProximal(testPt, data[j], smd )) {
	  if(--maxFailures);	// Close to an earlier point
	  else  smd=0.0;	// Too many failures, random strategy
	  flag = ggFalse;	// only recourse
	  break;
	}
      if(flag)
	{data.Append(testPt);
	 i++;
       }
    }
  Nsamples = i;

  return (Nsamples);
}

  
	    

	
	
    
  
