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
//int
//NumGrads(Student A[], int size);

/*****************************************/
int
main(int argc, char* argv[])
{
    struct Student
    {
        int id;
        bool isGrad;
    };
}
int
NumGrads(int A[], int size)
{
    int total = 0;
    for(int i = 0; i < size; ++i)
    {
        //if(A[i].isGrad)
        if(A[i] > 1)
            total++;
    }
    return total;
}