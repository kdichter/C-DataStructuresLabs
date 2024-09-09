////////////////////////////////////////////////////////////////////////////////
// Name: Kevin Dichter
// Date: 3/16/2023
// Assignment: Josephus Lab
// Description: Erase elements in a list until only one remains.
//
////////////////////////////////////////////////////////////////////////////////

#include <list>
// TODO: add additional includes

#include "Josephus.h"
#include <iostream>
#include <iterator>
#include <list>
//using std::list;

/* Simulate the Josephus problem modeled as a std::list.
 * This function will modify the passed list with only a
 * single survivor remaining.
 *
 * @param circle -- the linked list of people
 * @param k -- skip amount. NOTE: k > 0
 *
 * @return a list of those who are executed in chronological order
 */
template <typename T>
std::list<T>
// T(N, k) = (N * k) - k
execute (std::list<T>& circle, int k)
{
  std::list<T> killed;
  // TODO :)
  typename std::list<T>::iterator it = circle.begin ();
  size_t count = 0;
  while (circle.size () != 0)
  {
    for (size_t i = 1; i < k; i++)
    {
      if (*it == *(circle.crbegin()))
      {
        it = circle.begin ();
      }
      else
      {
        it++;
      }
      //count++;
    }
    killed.push_back (*it);
    if(*it == *(circle.crbegin()))
    {
    circle.erase (it);
    it = circle.begin ();
    }
    else
    {
    it = circle.erase (it);
    }
    //count++;
  }
  //ran an extra k times to add the last number to the list
  //count -= k;
  //std::cout << std::endl << "count is : " << count << std::endl;
  return killed;
}

/* entry point to the Josephus problem from the autograder / main
 *
 * @param n -- number of people in the circle
 * @param k -- skip amount. NOTE: k > 0
 */
int
josephus (int n, int k)
{
  // 1. make a list
  // 2. populate it with values [1, 2, 3, ... , N]
  // 3. call execute
  // 4. return the lone survivor
  // HINT: While working on this lab, you may also find
  //       it useful to print out the "kill" order.
  if (n == 1)
  {
    return 1;
  }
  std::list<int> list;
  for (size_t i = 1; i <= n; ++i)
  {
    list.push_back (i);
  }
  return (execute (list, k)).back (); 
}
