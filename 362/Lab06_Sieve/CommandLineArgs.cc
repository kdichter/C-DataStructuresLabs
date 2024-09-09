/*
  Author     : Gary M. Zoppetti
  Course     : CSCI 362
  Description: Using command line arguments
*/

/************************************************************/
// System includes

#include <iostream>
#include <string>
#include <cstdlib>

/************************************************************/
// Local includes


/************************************************************/
// Using declarations

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stoul;

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

int
main (int argc, char* argv[])
{
  cout << "You invoked this program with " << argv[0] << endl;
  for (int i = 0; i < argc; ++i)
  {
    cout << "argv[" << i << "] = " << argv[i] << endl;
  }

  // argc will ALWAYS be at least 1
  if (argc != 3)
  {
    cerr << "Usage: " << argv[0] << " <Name> <Number>" << endl;
    exit (EXIT_FAILURE);
  }
    
  // To convert the first argument to a C++ string
  string arg1 (argv[1]);
  if (arg1 == "Bert")
    cout << "Hey Bert!" << endl;
  
  string arg2 (argv[2]);
  // Assuming arg2 is a number. If not, this will crash
  //   the program.
  unsigned long N = stoul (arg2);
  cout << N << ", wow, that's a big number." << endl;

  return EXIT_SUCCESS;
}

/************************************************************/
/************************************************************/