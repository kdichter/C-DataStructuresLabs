// System includes

#include <iostream>
//for EXIT_SUCCESS
#include <cstdlib>
#include <string>


/************************************************************/
// Using declarations

using std::cout;
using std::cin;
using std::string;
using std::endl; //adds a new line

/****************************************/
//Function prototypes/global vars/type definitions
bool
ArrayEq(int A1[], int A2[], int size);

/*****************************************/
int
main(int argc, char* argv[])
{
    
}
bool
ArrayEq(int A1[], int A2[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(A1[i] != A2[i])
            return false;
    }
    return true;
}