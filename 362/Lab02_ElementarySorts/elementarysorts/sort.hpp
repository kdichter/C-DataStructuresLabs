// Author: Professor William Killian
// Date: 2019 May 17
// Class: CSCI 362.93 - Data Structures
// Assignment: 2a - Analyzing Sorting Algorithms
//
// Description:
//
// Header file for templated sorting algorithms, specifically
// bubble sort (optimized), insertion sort, and selection sort.
// Includes a 'Statistics' datatype for aggregating counts for
// swaps and comparisons.

#ifndef SORTING_ALGORITHMS_HPP_
#define SORTING_ALGORITHMS_HPP_

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Statistics {
  // default constructs swaps and compares to zero
  std::size_t numSwaps { 0 };
  std::size_t numCompares { 0 };
};

template <typename T>
void
bubbleSort (std::vector<T>& v, Statistics& s)
{
  for (size_t i = v.size () - 1; i >= 1; --i)
  {
    bool didSwap = false;
    for (size_t j = 0; j < i; ++j)
    {
      s.numCompares++;
      if (v[j] > v[j + 1])
      { 
        std::swap (v[j], v[j + 1]);
        s.numSwaps++;
        didSwap = true;
      }
    }
    if (!didSwap) break;
  }

}
template <typename T>
void
insertionSort (std::vector<T>& v, Statistics& s)
{
  for (size_t i = 1; i < v.size (); ++i)
  { // Invariant: A[0..i) sorted
    T e = v[i]; // Element to place
    T j = i; // Index to place ‘v’
    if(!(j >= 1 && e < v[j - 1]))
    {
      s.numCompares++;
    }
    while (j >= 1 && e < v[j- 1])
    {
      s.numCompares++;
      v[j] = v[j - 1];
      --j;
    }
    // Invariant: j == 0 or v >= A[j - 1]
    v[j] = e;
      
  }

}

template <typename T>
void
selectionSort (std::vector<T>& v, Statistics& s)
{
  for (size_t i = 0; i < v.size () - 1; ++i)
  {
    T min = i;
    for (size_t j = i + 1; j < v.size (); ++j)
    {
      s.numCompares++;
      if (v[j] < v[min])
      {
        min = j;
      }
    }
    std::swap (v[i], v[min]);
    s.numSwaps++;
  }
}

#endif
