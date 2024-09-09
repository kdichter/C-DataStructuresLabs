/*
  Filename   : Rectangle.h
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Date       : 01/19/2023
  Assignment : N/A
  Description: Do some stuff
*/
/************************************************************/
// System includes

#include <iostream>

/************************************************************/
// Local includes

#include "Rectangle.h"

/************************************************************/
// Using declarations

/****************************************/
//Function prototypes/global vars/type definitions

/************************************************************/

//Cannot repeat default arguments in the implementation
Rectangle::Rectangle (double width, double length)
 :m_width (width), m_length (length) //sets width to m_width and length to m_length
 {
 }
/************************************************************/

double 
Rectangle::calculateArea () const
{
    return m_width * m_length;
}

/************************************************************/

double
Rectangle::calculatePerimeter () const
{
    return 2 * (m_width + m_length);
}

/************************************************************/

void
Rectangle::setSides (double width, double length)
{
    m_width = width;
    m_length = length;
}

/************************************************************/

double 
Rectangle::getWidth () const
{
    return m_width;
}

/************************************************************/

double 
Rectangle::getLength () const
{
    return m_length;
}

/************************************************************/

void
Rectangle::display (ostream& outputStream) const
{
    outputStream << "Width =  " << m_width;
    outputStream << ", Length = " << m_length;
    outputStream << ", Area = " << this->calculateArea ();
}

/************************************************************/

//Place all free function prototypes after the class declaration

ostream&
operator << (ostream& outputStream, const Rectangle & r)
{
    r.display (outputStream);

    return outputStream;
}