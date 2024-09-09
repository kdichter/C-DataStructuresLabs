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
int
main(int argc, char* argv[])
{
    /*
    int total = 0;

    for(int i = 1; i <= 10; ++i)
    {
        total += i;
    }

    cout << "Total is: " << total << endl;
    return 0;
    */
   int total = 0;
   int x;
   for(int i = 0; i < 10; ++i){
        cin >> x;
        total += x;
   }
    cout << "Total is: " << total << endl;
    return 0;
}