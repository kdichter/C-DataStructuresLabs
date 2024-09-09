/*
  Filename   : Hello.cc
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Date       : 01/19/2023
  Assignment : Learn C++
  Description: Do some stuff
*/
/************************************************************/
// System includes

#include <iostream>
//for EXIT_SUCCESS
#include <cstdlib>
#include <string>


/************************************************************/
// Local includes

//#inlude "Hello.h" - includes Hello.h file

/************************************************************/
// Using declarations

using std::cout;
using std::cin;
using std::string;
using std::endl; //adds a new line

/****************************************/
//Function prototypes/global vars/type definitions
int
add (int num1, int num2);

/*****************************************/
int
main (int argc, char* argv[])
{
    cout << "Enter your name -->";
    string name;
    cin >> name;

    cout << "Hey, " << name << ", nice to meet you.";
    cout << "I'm C++. but you can call me A1." << endl;
    cout << add (3,5) << endl;

    return EXIT_SUCCESS;
}

//function implemenetations
int
add (int num1, int num2)
{
    return num1 + num2;
}

