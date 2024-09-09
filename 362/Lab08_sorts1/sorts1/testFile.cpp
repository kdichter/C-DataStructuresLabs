#include <iterator>
#include <utility>
#include <vector>
#include <iostream>

#include "DivideAndConquer.hpp"

int 
main (int argc, char* argv[])
{
    std::vector<int> vec;
    vec.push_back (9);
    vec.push_back (6);
    vec.push_back (5);
    vec.push_back (3);
    vec.push_back (7);
    vec.push_back (2);

    std::cout << std::endl << "orginal vector : ";
    std::cout <<"[ ";
    for (int i : vec)
        std::cout << i << " ";
    std::cout << "]" << std::endl;

    SortUtils::merge_sort (vec.begin (), vec.end ());

    std::cout << std::endl << "sorted vector : ";
    std::cout <<"[ ";
    for (int i : vec)
        std::cout << i << " ";
    std::cout << "]" << std::endl;

    return 0;
}