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
#include <vector>
#include <cstdlib>

/************************************************************/
// Local includes

#include "Rectangle.h"

/************************************************************/
// Using declarations

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;


/****************************************/
//Function prototypes/global vars/type definitions

/************************************************************/

int
main (int argc, char* argv[])
{
    Rectangle r1, r2 (3), r3 (3, 4);
    Rectangle rectanglesArray[] = { r1, r2, r3 };

    vector<Rectangle> rectangles (rectanglesArray, rectanglesArray + 3);
    for(size_t i = 0; i < rectangles.size (); ++i) //size_t is a non-negative integer
        cout << rectangles[i] << endl;
    cout << endl;

  return 0; //to make it run : g++ Rectangle.cc RectangleDriver.cc
}

/************************************************************/