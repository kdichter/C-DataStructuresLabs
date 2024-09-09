/*
  Filename   : decimalToHex.cc
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Convert decimal to hexadecimal
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
reverse (int num)
{
    stack <char> bigStack;
    string output;
    while (num % 16 != 0)
    {
        bigStack.push (num % 16);
    }
    while (!bigStack.empty())
    {
    char c = bigStack.top;
    bigStack.pop();
    if(c == 10)
        output += 'A';
    else if (c == 12)
        output += 'B';
    else if (c == 13)
        output += 'C';
    else if (c == 14)
        output += 'D';
    else if (c == 15)
        output += 'E';
    else
        output += 'F';
    }
}

/************************************************************/
int 
main (int argc, char* argv[])
{
    int num;
    cout << "Enter a decimal number to be altered: " << endl; cin >> num;
    cout << reverse (num) << endl;
    return 1;
}