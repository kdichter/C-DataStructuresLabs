/*
  Filename   : ArrayDriver.cc
  Author     : Gary M. Zoppetti
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Test some, but NOT ALL, methods of the Array class.
*/   

/************************************************************/
// System includes

#include <cstdlib>
#include <iostream>
#include <string>
#include <iterator>
#include <sstream>
#include <cassert>

/************************************************************/
// Local includes

#include "Array.hpp"

/************************************************************/
// Using declarations

using std::cin;
using std::cout;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::ostringstream;

/************************************************************/
// Function prototypes/global vars/typedefs

void
printTestResult (const string& test,
		 const string& expected,
		 const ostringstream& actual);

/************************************************************/

int      
main (int argc, char* argv[]) 
{        
  
  Array<int> A;

  // For holding the actual result
  ostringstream output;
  // Put the actual result into the output stream
  output << A;
  printTestResult ("no-arg ctor", "[ ]", output);

  // Must clear the output stream each time
  output.str ("");
  output << A.empty ();
  // "1" for true, "0" for false
  printTestResult ("empty", "1", output);
  
  A.push_back (5);
  A.push_back (10);
  A.push_back (15);

  output.str ("");
  output << A;
  printTestResult ("push_back", "[ 5 10 15 ]", output);

  output.str ("");
  output << A.size ();
  printTestResult ("size", "3", output);
  
  A.pop_back ();
  A.pop_back ();

  output.str ("");
  output << A;
  printTestResult ("pop_back", "[ 5 ]", output);
  
  /************************************************************/
  // Convert the following tests to use printTestResult
  /************************************************************/
  for (int i = 0; i < 10; ++i)
    A.insert (A.begin (), i);

  cout << "Inserted 9 8 ... 0 at beginning\n";
  cout << A << endl;
  cout << endl;
  
  for (Array<int>::iterator i = A.begin (); i != A.end (); )
    i = A.erase (i);

  cout << "Erased all elements of A\n";
  cout << A << endl;
  cout << endl;

  // Size ctor, with a fill value. 
  Array<int> B (3, 9);
  cout << "B (3, 9): 3 9's\n";
  cout << B << endl;
  cout << endl;

  // Range ctor. 
  Array<int> C (B.begin (), B.begin () + 2);
  cout << "C (B.begin (), B.begin () + 2): 9 9\n";
  cout << C << endl;
  cout << endl;

  // Assignment operator. 
  B = A;
  cout << "B = A: empty\n";
  cout << B << endl;
  cout << endl;

  cout << "Inserting 0, 1, 2, 3, 4 at beginning of B\n";
  for (int i = 0; i < 5; ++i)
  B.insert (B.begin (), i);
  cout << B << endl;
  cout << endl;
  /************************************************************/
  // START WRITING YOUR TESTS HERE
  /************************************************************/

  // Test range ctor (a different case than I test above)

  // Test copy ctor
  cout << "**************************" << endl;
  Array<int> D;

  for (size_t i = 1; i <= 10; ++i)
  {
    D.push_back (i);
  }

  // cout << "Insert with empty array: " << endl;
  // D.insert (D.begin(), 55);
  // cout << D << endl;

  cout << "Push_back the first element: " << endl;
  D.push_back (33);
  cout << D << endl;

  cout << "Push_back a second element: " << endl;
  D.push_back (44);
  cout << D << endl;

  cout << "Push_back a third element: " << endl;
  D.push_back (88);
  cout << D << endl;

  //D.erase (D.begin() + 5);
  //cout << D << endl;

  // cout << "Insert at begining: " << endl;
  // D.insert (D.begin (), 77);
  // cout << D << endl;

  // cout << "Insert in middle: " << endl;
  // D.insert (D.begin() + 6, 111);
  // cout << D << endl;

  // cout << "Resize smaller and insert value: " << endl;
  // D.resize (8, 6);
  // cout << D << endl;
  // cout << D.size () << endl;

  // cout << "Resize larger and insert value: " << endl;
  // D.resize (15, 3);
  // cout << D << endl;
  // cout << D.size () << endl;

  // cout << "Big Test: " << endl;
  // cout << D << endl;
  // D.insert (D.begin (), 77);
  // cout << D << endl;
  // D.resize (1, 3);
  // cout << D << endl;
  // D.resize (12, -11);
  // cout << D << endl;
  // cout << "Size: " << D.size () << endl;

  //cout << D[0] << endl;
  // Test capacity

  // ...
  
  return EXIT_SUCCESS;
}

/************************************************************/

void
printTestResult (const string& test,
		 const string& expected,
		 const ostringstream& actual)
{
  cout << "Test: " << test << endl;
  cout << "==========================" << endl;
  cout << "Expected: " << expected << endl;
  cout << "Actual  : " << actual.str () << endl;
  cout << "==========================" << endl << endl;

  // Ensure the two results are the same
  assert (expected == actual.str ());
}

/************************************************************/
