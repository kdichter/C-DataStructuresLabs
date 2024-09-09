/***************************************************
 Name: Your Name
 Course: 
 Date: 
 Assignment: 
 Description: 
 
 ***************************************************/

// Include Directives
// **************************************************
#include <iostream>
// TODO: other includes go here

#include "Statistician.h"
#include <vector>

// Using Statements
// **************************************************
using std::cout;
using std::cin;
using std::vector;
using std::endl;
// TODO: any extra using statements would go here

// Forward Declarations
// **************************************************

// TODO: any functions you implement AFTER main must be defined here


// Main
// **************************************************

int
main(int argc, char* argv[])
{
    int count;
    cout << "Enter number of values ==> "; cin >> count;
    vector <float> nums = populate(count);
    cout << "\nThe statistics of all " << count << " values are:" << endl;
    cout << "  Sum: " << sumOfValues (nums) << endl;
    cout << "  Avg: " << average (nums) << endl;
    cout << "  Min: " << minimum (nums) << endl;
    cout << "  Max: " << maximum (nums) << endl;

    return 0;
}


// Function Implementations
// **************************************************

// TODO: any functions you call within main that are a part of this
// file must be implemented AFTER main
