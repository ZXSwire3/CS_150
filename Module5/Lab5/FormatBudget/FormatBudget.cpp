// formatBudget.cpp - Formats a monthly budget report
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    //Item variables
    const string rent = "Apartment" ;
    const string food = "Food" ;
    const string utility = "Utilities and Gas" ;
    const string misc = "Miscellaneous" ;

    //cost per item variables
    double rentMoney = 1497.82 ;
    double foodMoney = 325.00 ;
    double utilityMoney = 270.00 ;
    double miscMoney = 91.40 ;

    double total = rentMoney + foodMoney + utilityMoney + miscMoney;

    cout << fixed << setprecision(2);
    cout << right << setw(24) << "MONTHLY BUDGET REPORT" << endl << endl
         << right << setw(8) << "Item" << setw(21) << "Expense" << endl
         << "-------------------------------" << endl
         << left << rent << right << setw(13) << "$" << right << setw(9) << rentMoney << endl
         << left << food << right << setw(18) << "$" << right << setw(9) << foodMoney << endl
         << left << utility << right << setw(5) << "$" << setw(9) << utilityMoney << endl
         << left << misc << right << setw(9) << "$" << setw(9) << miscMoney << endl
         << right << setw(31) << "==========" << endl
         << setw(10) << "(Total)" << right << setw(12) << "$" << setw(9) << total;


    return 0;
}