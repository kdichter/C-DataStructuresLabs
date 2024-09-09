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
    struct ListNode {
    int data;
    ListNode *next;  // pointer to the next node in the list
};
}
/*
void
PrintList(ListNode *L)
{
    ListNode *temp = L
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    
}
*/
/*
void
PrintReverse(ListNode *L)
{
    if(L == NULL)
    return;
    PrintReverse(L-> next);  
    cout << L->data << endl;
}
*/