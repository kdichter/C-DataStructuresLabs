/*
  Filename   : RandomNumber.cc
  Author     : Gary M. Zoppetti
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Implementation of member functions in RandomNumber.h
*/   

/************************************************************/
// System includes

#include <cstdlib>
#include <ctime>

/************************************************************/
// Local includes

#include "RandomNumber.h"

/************************************************************/
// Using declarations

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/
// Member function definitions

RandomNumber::RandomNumber (unsigned int seed)
{
  if (seed != 0)
  {
    srand (seed);
  }
  else
  {
    srand (time (nullptr));
  }
}

/************************************************************/

int
RandomNumber::random () const
{
  return rand ();
}

/************************************************************/

int
RandomNumber::random (unsigned int rangeSize) const
{
  return rand () % rangeSize;
}

/************************************************************/

int
RandomNumber::random (int min, int max) const
{
  unsigned rangeSize = (max - min) + 1;
  return random (rangeSize) + min;
}

/************************************************************/

double
RandomNumber::frandom () const
{
  // Bad generation algorithm
  return (rand () / (static_cast<double> (RAND_MAX) + 1));
}

/************************************************************/
