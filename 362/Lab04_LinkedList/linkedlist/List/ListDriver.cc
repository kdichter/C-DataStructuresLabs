/*
  Filename   : ListDriver.cc
  Authors    : Gary M. Zoppetti, William Killian
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Test some, but NOT ALL, methods of the List class.
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

#include "List.hpp"

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
  List<int> A;
 
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

  for (List<int>::iterator i = A.begin (); i != A.end (); )
    i = A.erase (i);

  cout << "Erased all elements of A\n";
  cout << A << endl;
  cout << endl;

  // Size ctor, with a fill value. 
  List<int> B (3, 9);
  cout << "B (3, 9): 3 9's\n";
  cout << B << endl;
  cout << endl;

  // Range ctor.
  List<int> C (B.begin (), std::next(B.begin (), 2));
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

  // Test capacity

  // ...
  List<int> list;
  list.push_back (1);
  list.push_back (2);
  list.push_back (3);
  list.push_back (4);
  cout << "Creating list with 4 elements;" << endl;
  cout << list << endl;
  cout << endl;

  List<int> copyList;
  copyList = list;
  cout << "Copying list with 4 elements;" << endl;
  cout << copyList << endl;
  cout << endl;

  
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
