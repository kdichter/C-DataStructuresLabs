/*
  Filename   : reverseString.cc
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Reverse the order of a string.
*/   

/************************************************************/
// System includes

#include <iostream>
#include <stack>

/************************************************************/
// Local includes

/************************************************************/
// Using declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;

// Function prototypes/global vars/typedefs

string
reverse (string s)
{
    stack <char> bigStack;
    string newString;
    for (char c : s)
    {
          bigStack.push (c);
    }
    while (!bigStack.empty())
    {
        newString += bigStack.top();
        bigStack.pop();
    }
    return newString;
  
}

/************************************************************/
int 
main (int argc, char* argv[])
{
    string word;
    cout << "Enter a string to reverse: " << endl; cin >> word;
    cout << reverse (word) << endl;
    return 1;
}