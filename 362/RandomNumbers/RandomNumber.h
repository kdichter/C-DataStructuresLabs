/*
 Filename   : RandomNumber.h
 Author     : Gary M. Zoppetti
 Course     : CSCI 362-01
 Assignment : N/A
 Description: Generate random int's and float's
 */

/************************************************************/
// Macro guard

#ifndef RANDOMNUMBER_H
#define RANDOMNUMBER_H

/************************************************************/
// System includes

/************************************************************/
// Local includes

/************************************************************/
// Using declarations

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

class RandomNumber
{
public:

  RandomNumber (unsigned int seed = 0);
  
  int
  random  () const;

  int
  random  (unsigned int rangeSize) const;

  int 
  random  (int min, int max) const;

  double 
  frandom () const;
  
private:
  
};

#endif

/************************************************************/
