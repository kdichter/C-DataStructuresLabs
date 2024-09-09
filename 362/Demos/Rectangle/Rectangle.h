/*
  Filename   : Rectangle.h
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Date       : 01/19/2023
  Assignment : N/A
  Description: Do some stuff
*/
/************************************************************/
// Macro guard to prevent multiple inclusions

#ifndef RECTANGLE_H //all caps
#define RECTANGLE_H

/************************************************************/
// System includes

#include <iostream>

/************************************************************/
// Local includes

//.h files would go here

/************************************************************/
// Using declarations

using std::ostream;

/****************************************/
//Function prototypes/global vars/type definitions

class Rectangle
{
//default constructor
public:

Rectangle (double width = 0.0, double length = 0.0);
// For non-default Rectangle (double width, double length);

// Calculations
double
calculateArea () const; //const - doesn't change state of object

double
calculatePerimeter () const;

// Setters
void
setSides (double width, double length);

//Getters
double
getWidth () const;

double
getLength () const;

void
display (ostream& outputStream) const; //toString

private:

double m_width;
double m_length;
};

//Place all free function prototypes after the class declaration

ostream&
operator << (ostream& outputStream, const Rectangle & r);

/*****************************************/
#endif

