/*
  Filename   : CDInterest.cpp
  Author     : Kevin Dichter
  Course     : CSCI 362-01
  Date       : 01/22/2023
  Assignment : Lab00
  Description: Calculate the interest earned on a certificate of deposit (CD) over a specified period.
*/
/************************************************************/
// System includes

#include <iostream>
//for EXIT_SUCCESS
#include <cstdlib>
#include <string>


/************************************************************/
// Local includes

/************************************************************/
// Using declarations

using std::cout;
using std::cin;
using std::string;
using std::endl; 

/****************************************/
//Function prototypes/global vars/type definitions

// Inform user what program will do.
void 
printIntro ();
// Print the header followed by all the rows.
void   
printTable (int numRows, double balance, double rate);

// Print one row of table. "interest" is a dollar amount, not a rate.
void   
printRow (int rowNum, double balance, double interest);

// Calculate interest given a balance and percentage rate (like 7.2%)
double 
calcInterest (double balance, double rate);


/*****************************************/
int
main (int argc, char* argv[])
{
    setlocale (LC_NUMERIC, "");
    printIntro ();
    return EXIT_SUCCESS;
}

//function implemenetations

//Prints the info to be collected by the user.
void
printIntro ()
{
    double balance;
    double interest;
    int years;

    cout << "This program will calculate the interest earned" << endl;
    cout << "  on a CD over a period of several years.\n" << endl;
    cout << "Please enter the initial balance: "; cin >> balance;
    cout << "Please enter the interest rate  : "; cin >> interest;
    cout << "Please enter the number of years: "; cin >> years;

    printTable (years, balance, interest);
}

//Creates a table of data based on the user's input and formats it accordingly.
void   
printTable (int numRows, double balance, double rate)
{
    printf ("%-s %11s %12s %15s \n", "Year", "Balance", "Interest", "New Balance");
    printf ("%-s %11s %12s %15s \n", "----", "-------", "--------", "-----------");

    for (int i = 0; i <= numRows; ++i)
    {
        double interest = calcInterest (balance, rate);
        printRow (i, balance, interest);
        balance += interest;
    }
}

//Creates each a row of data for each year that passes that includes the year, balance, interest, and new balance.
void   
printRow (int rowNum, double balance, double interest)
{
    printf ("%-6d", rowNum);
    printf ("%'10.2f", balance);
    printf ("%13.2f", interest);
    printf ("%'16.2f \n", balance + interest);
}

//Calculates the interest based on a balance and a interest rate.
double 
calcInterest (double balance, double rate)
{
    return balance * (rate/100);
}

