/*
 In general, your program should be split up into different sections

 Section 0: Top Comment Block
   Always include the following:
   - First and last name
   - Last date of modification
   - Course + Section
   - Assignment Name
   - File Description

 Section 1: Includes (must be in the following order)
   1. C++ standard library includes (e.g. <algorithm>)
   2. C library includes (e.g. <math.h> or <cmath>)
   3. System library includes (<name.h> but are not part of the C or C++ standard)
   4. User includes (ones contained in quotes -- e.g. "Timer.hpp")

 Section 2: Preprocessor Definitions
   - Anything that starts with #define (or appropriate guards around it

 Section 3: Compile-time constants, type aliases, using directives, type definitions
   - constexpr Type name = value-expr;
   - using Type = type-expr;
   - using std::cout;
   - declarations of file-scoped struct/class/union

 Section 4: Global variables -- NOTE: use sparingly and ONLY if necessary

 Section 5: Forward declarations for non-template functions
   - A forward declaration is a function without a body.
   - Any default parameters MUST be specified in the forward declaration

 Section 6: Template function implementations
   - Any functions beginning with 'template <...>'

 Section 7: main() function implementation [[[entry point of program]]]
   - main must always have the following signature:
     int main (int argc, char* argv[])

 Section 8: Implementations of non-template functions
   - Must be listed in the SAME ORDER as the forward declarations above
   - REMINDER: whenever you update the parameter types/counts, update
     them in BOTH locations. Otherwise you can get a compiler error!
*/

// Author: Kevin Dichter
// Date: 1/31/23
// Class: CSCI 362.93 - Data Structures
// Assignment: elementarysorts
// Description: Using the 3 basic sorting algorithms, compare the # of comparisons and swaps to the default sorting algorithm


// Includes
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
////////////////////////////////////////////////////////////////////////////////

// TODO: add include you may use here

#include "sort.hpp"

// Forward declarations
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
////////////////////////////////////////////////////////////////////////////////

// -- for any helper functions you write


// Main
////////////////////////////////////////////////////////////////////////////////
int
main (int argc, char* argv[])
{
  size_t count;
  string algorithm;
  char type;

  //collects user input.
  cout << "N         ==> "; cin >> count;
  cout << "Algorithm ==> "; cin >> algorithm;
  cout << "Type      ==> "; cin >> type;

  Statistics S;
  vector<size_t> A;

  //creates a vector with appropriate data based on the type.
  if (type == 'a')
  {
    for(size_t i = 1; i <= count; ++i)
      {
        A.push_back (i);
      }
  }
  else if (type == 'd')
  {
     for(size_t i = count; i >= 1; --i)
      {
        A.push_back (i);
      }
  }
  else if (type == 'r')
  {
    int seed;
    cout << "Seed      ==> "; cin >> seed;

    std::minstd_rand random;
    random.seed (seed);

      for(size_t i = 0; i < count; ++i)
      {
        A.push_back (random() % 10000);
      }
  }
  else
  {
    cout << "invalid type";
  }
  vector<size_t> ACopy = A;
  std::sort (ACopy.begin(), ACopy.end());

  cout << "\n";
  //Determines what method to used based on the algorithm
  if (algorithm == "bubble")
  {
    bubbleSort(A, S);
  }
  else if (algorithm == "insertion")
  {
    insertionSort(A, S);
  }
  else if (algorithm == "selection")
  {
    selectionSort(A, S);
  }
  else
  {
    cout << "algorithm does not exist";
  }
  //Prints the number of compares and swaps after the sorting algorithms are finished.
  cout << "# Compares: " << S.numCompares << endl;
  cout << "# Swaps   : " << S.numSwaps << endl;

  //checks if A is equal to ACopy and prints yes if it's equal.
  if(A == ACopy)
  {
    cout << "Sort ok?    yes\n";
  }
  else
  {
    cout << "Sort ok?    no\n";
  }


}

// Function implementations
////////////////////////////////////////////////////////////////////////////////
