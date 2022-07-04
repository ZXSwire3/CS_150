// formatBudget.cpp - Formats a monthly budget report
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Item name constants
    const string rent = "Apartment";
    const string food = "Food";
    const string util = "Utilities and Gas";
    const string misc = "Miscellaneous";

    // Item cost variables
    double rentMoney = 1497.82;
    double foodMoney = 325.00;
    double utilMoney = 270.00;
    double miscMoney = 91.40;
    double total = rentMoney + foodMoney + utilMoney + miscMoney;

    // Output
    cout << fixed << setprecision(2);

    cout << right << setw(24) << "MONTHLY BUDGET REPORT" << endl << endl;

    cout << right << setw(8) << "Item" << setw(21) << "Expense" << endl;

    string dashes;
    dashes.assign(32, '-');
    cout << dashes << endl;

    cout << left << setw(20) << rent << right << setw(1) << "$" << setw(11) << right
         << rentMoney << endl;

    cout << left << setw(20) << food << right << setw(1) << "$" << setw(11) << right
         << foodMoney << endl;

    cout << left << setw(20) << util << right << setw(1) << "$" << setw(11)
         << utilMoney << endl;

    cout << left << setw(20) << misc << right << setw(1) << "$" << setw(11)
         << miscMoney << endl;

    cout << right << setw(32) << "==========" << endl;

    cout << setw(10) << "(Total)" << setw(12) << "$" << setw(10) << total;
}