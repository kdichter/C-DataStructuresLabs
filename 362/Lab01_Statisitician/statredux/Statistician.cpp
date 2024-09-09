/***************************************************
 Filename   : Statisitician.cpp
 Name       : Kevin Dichter
 Course     : CSCI 362-01
 Date       : 01/24/2023
 Assignment : Lab01
 Description: Populate a vector with numbers read in from the user and display a view statistics: sum, average, minimum, and maximum
 
 ***************************************************/

// TODO: other includes go here

#include <iostream>
#include "Statistician.h"
#include <vector>


/************************************************************/
// Using declarations

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;


/****************************************/

// Function Implementations
// **************************************************

// Finds the largest value in the passed vector
// Assumes nums is not empty
float
maximum (const std::vector<float>& nums)
{
	float max = nums[0];
	for (size_t i = 1; i < nums.size (); ++i)
	{
		if(nums[i] > max)
			max = nums[i];
	}
	return max;
}


// Finds the smallest value in the passed vector
// Assumes nums is not empty
float
minimum (const std::vector<float>& nums)
{
	float min = nums[0];
	for (size_t i = 1; i < nums.size (); ++i)
	{
		if(nums[i] < min)
			min = nums[i];
	}
	return min;
}


// Finds the sum of values from the passed vector
// Should return zero if the vector is empty
float
sumOfValues (const std::vector<float>& nums)
{
	float total = 0;
	for (size_t i = 0; i < nums.size (); ++i)
	{
		total += nums[i];
	}
	return total;
}


// Finds the average of all values from the passed vector
// assumes nums is not empty
float
average (const std::vector<float>& nums)
{
	float total = sumOfValues (nums);
	return total / nums.size ();
}

// Creates and returns a new vector. Reads in count number
// of values from the user by prompting for each one
// should return an empty vector if count <= 0
std::vector<float>
populate (int count)
{
	std::vector<float> result;
	float num;
	for (int i = 0; i < count; ++i)
	{
		cout << "Enter value ==> "; cin >> num;
		result.push_back(num);
	}
	return result;
}
