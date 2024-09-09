/*
 Filename   : RandomNumberDriver.cc
 Author     : Gary M. Zoppetti
 Course     : CSCI 362-01
 Assignment : N/A
 Description: Test the RandomNumber class
 */

/************************************************************/
// System includes

#include <iostream>
#include <cstdlib>

/************************************************************/
// Local includes

#include "RandomNumber.h"

/************************************************************/
// Using declarations

using std::cout;
using std::endl;

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

int
main (int argc, char* argv[])
{
  RandomNumber rndA, rndB;
  
  const size_t NUM_ITERATIONS = 5;
  for (size_t i = 0; i < NUM_ITERATIONS; ++i)
  {
    int randInt = rndA.random (40);
    int randIntInRange = rndA.random (5, 12);
    double randDouble = rndB.frandom ();
    cout << "randInt = " << randInt 
	 << " randDouble = " << randDouble 
	 << " randIntInRange = " << randIntInRange
	 << endl;
  }
  
  return EXIT_SUCCESS;
}

/************************************************************/
/************************************************************/
