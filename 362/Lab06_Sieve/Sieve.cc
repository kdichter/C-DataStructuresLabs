/*
  Filename   : Sieve.cc
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Assignment : Do the sieve problem.
  Description: Find all prime numbers between 2 and N.
*/   

/************************************************************/
// System includes

#include <cstdlib>
#include <iostream>
#include <string>
#include <iterator>
#include <set>
#include <cmath>
#include <vector>

/************************************************************/
// Local includes

#include "Timer.hpp"

/************************************************************/
// Using declarations

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stoul;
using std::set;
using std::vector;

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

// Return the set of primes between 2 and N.
// Use a set to implement the sieve.
set<unsigned>
sieveSet (unsigned N)
{
    set<unsigned> s;
    for (size_t i = 2; i <= N; ++i)
    {
        s.insert (i);
    }
    auto it = s.begin (); //set<unsigned>::iterator
    for (size_t i = 2; i <= sqrt (N); ++i)
    {
        size_t mult = i;
        size_t size = s.size ();
        for (size_t j = 0; j < size; ++j)
        {
            if(*it > i * mult)
            {
                mult += 1;
            }
            if (*it == i * mult)
            {
                auto temp = it;
                temp++;
                s.erase (it);
                it = temp;
            }
            else
            {
                it++;
            }
        }
        it = s.begin ();
    }
    return s;
}

// Return the set of primes between 2 and N.
// Use a vector to implement the sieve.
// After filtering out the composites, put the primes in a set
//   to return to the caller. 
set<unsigned>
sieveVector (unsigned N)
{
    set<unsigned> s;
    vector<unsigned> v;
    for (size_t i = 2; i <= N; ++i)
    {
        v.push_back (i);
    }
    auto it = v.begin ();
    for (size_t i = 2; i <= sqrt (N); ++i)
    {
        size_t size = v.size ();
        size_t mult = i;
        for (size_t j = 0; j < size; ++j)
        {
            if(*it > i * mult)
            {
                mult += 1;
            }
            if (*it == i * mult)
            {
                v[j] = 0;
            }
            it++;
        }
        it = v.begin ();
    }
    for (size_t i = 0; i < v.size (); ++i)
    {
        if (v[i] != 0)
        {
            s.insert (v[i]);
        }
    }
    return s;
}

int
main (int argc, char* argv[])
{
    set<unsigned> s;
    Timer <std::chrono::steady_clock> t;
    string arg1 (argv[1]);
    string arg2 (argv[2]);
    unsigned long N = stoul (arg2);
    //cout << "N is " << N << endl;
    if (arg1 == "set")
    {
        t.start ();
        s = sieveSet (N);
        t.stop ();
        cout << "Pi[" << arg2 << "] = " << s.size () << " (using a set)" << endl;
    }
    else if (arg1 == "vector")
    {
        t.start ();
        s = sieveVector (N);
        t.stop ();
        cout << "Pi[" << arg2 << "] = " << s.size () << " (using a vector)" << endl;
    }
    else
    {
        exit (EXIT_FAILURE);
    }
    cout << "Time: " << t.getElapsedMs () << " ms"<< endl;
    //printf ("Time: %.2f", t.getElapsedMs ());
    //cout << " ms " << endl;

    /*
    N       10,000,000    20,000,000   40,000,000
    ===================================================================
    set        376,407.23       1,005,356.91      2,718,796.42
    vector     352,070.47       990,647.87      2,767,574.13

    Although my computer took a while to compute these numbers, and 
    it's odd that for 40,000,000 the set was faster than the vector,
    I tried my best to get the fastest time. Also, my computer probably
    can't handle running the things three times each, so one will have 
    to do. Sorry.

    1. The vector ran faster, or rather should have ran faster faster, than the set.
    This is because while the vector simply changed a value at an index to indicate
    the number wasn't prime, the set had to erase the value at an iterator position.
    Some of the values that were erased could have been erased at the end of the list,
    meaning the erase was done in linear time, which would lead to the slower run times.

    2. Another reason why the vector ran faster than the set is because every
    time the erase method was called on the set, a new temp variable had to store away
    the previous iterator. The temp variable then went to the next element in the list, 
    and the iterator was then sent to temp. This made it so a segmentation fault wouldn't 
    arise from doing "it++" after erase was called.
    */

   
  return 0;
}