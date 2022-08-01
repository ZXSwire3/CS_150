/* MonthlyExpense - Compares spent money vs a budget
 * Author: Ben Foltz
 * Module: 13
 * Project: Homework 13, project 1
 * Problem Statement: This program prompts the user for how much they spent on rent, transportation, supplies, food,
 *                    and misc and then prints out the amounts budgeted and spent
 * Algorithm:
 * 1. Create MonthlyExpenses structure
 * 2. Create MonthlyExpenses object budget with information filled out
 * 3. Create MonthlyExpenses object spent with no info
 * 4. Prompt user for rent, transportation, supplies, food, and misc
 * 5. Check if each value is greater than 0 and less than 10,000
 * 6. Set spent fields equal to user input
 * 7. Calculate difference between budget and spent for each category
 * 8. Print out amounts in nicely-formatted columns
 * 9. If totalDifference is negative then print out that the user went over budget
 */

#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyExpenses {
    double rent; //rent expenses
    double transportation; //transportation expenses
    double supplies; //supplies expenses
    double food; //food expenses
    double misc; //misc expenses

};

int main() {
    //Initialize budget
    MonthlyExpenses budget = {1125, 180, 65, 730, 390};
    //Initialize spent
    MonthlyExpenses spent{};
    //Initialize user input
    double rent, transportation, supplies, food, misc;

    //Prompt user for rent
    cout << "Enter your actual monthly spending values: " << endl
         << "Enter rent value: ";
    cin >> rent;
    while (rent < 0 || rent > 10000) {
        cout << "Value must be between 0 and 10,000" << endl
             << "Enter rent value: ";
        cin >> rent;
    }

    //Prompt user for transportation
    cout << "Enter transportation value: ";
    cin >> transportation;
    while (transportation < 0 || transportation > 10000) {
        cout << "Value must be between 0 and 10,000" << endl
             << "Enter transportation value: ";
        cin >> transportation;
    }

    //Prompt user for supplies
    cout << "Enter supplies value: ";
    cin >> supplies;
    while (supplies < 0 || supplies > 10000) {
        cout << "Value must be between 0 and 10,000" << endl
             << "Enter supplies value: ";;
        cin >> supplies;
    }

    //Prompt user for food
    cout << "Enter food value: ";
    cin >> food;
    while (food < 0 || food > 10000) {
        cout << "Value must be between 0 and 10,000" << endl
             << "Enter food value: ";
        cin >> food;
    }

    //Prompt user for misc
    cout << "Enter miscellaneous value: ";
    cin >> misc;
    while (misc < 0 || misc > 10000) {
        cout << "Value must be between 0 and 10,000" << endl
             << "Enter miscellaneous value: ";
        cin >> misc;
    }

    //set spent of each category equal to user input
    spent.rent = rent;
    spent.transportation = transportation;
    spent.supplies = supplies;
    spent.food = food;
    spent.misc = misc;

    //calculate difference between budget and spent for each category
    double rentDifference = budget.rent - spent.rent;
    double transportationDifference = budget.transportation - spent.transportation;
    double suppliesDifference = budget.supplies - spent.supplies;
    double foodDifference = budget.food - spent.food;
    double miscDifference = budget.misc - spent.misc;

    //calculate total for budget
    double budgetTotal = budget.rent + budget.transportation + budget.supplies + budget.food + budget.misc;
    //calculate total for spent
    double spentTotal = spent.rent + spent.transportation + spent.supplies + spent.food + spent.misc;
    //calculate total difference between the two
    double totalDifference = budgetTotal - spentTotal;

    //Print output in nicely formatted columns
    cout << fixed << setprecision(2) << endl;
    string dashes;
    dashes.assign(54, '-');
    cout << right << setw(28) << "Budget" << setw(12) << "Actual" << endl;
    cout << left << setw(22) << "Category" << setw(12) << "Amount" << setw(10) << "Spent" << "Difference" << endl
         << dashes << endl;
    cout << left << setw(21) << "Rent & Housing" << right << setw(1) << "$" << setw(8) << budget.rent << right << setw(4) << "$" << right << setw(8) << spent.rent << right << setw(4) << "$" << right << setw(8) << rentDifference << endl;
    cout << left << setw(21) << "Transportation" << right << setw(1) << "$" << setw(8) << budget.transportation << right << setw(4) << "$" << right << setw(8) << spent.transportation << right << setw(4) << "$" << right << setw(8) << transportationDifference << endl;
    cout << left << setw(21) << "Rent & Housing" << right << setw(1) << "$" << setw(8) << budget.supplies << right << setw(4) << "$" << right << setw(8) << spent.supplies << right << setw(4) << "$" << right << setw(8) << suppliesDifference << endl;
    cout << left << setw(21) << "Rent & Housing" << right << setw(1) << "$" << setw(8) << budget.food << right << setw(4) << "$" << right << setw(8) << spent.food << right << setw(4) << "$" << right << setw(8) << foodDifference << endl;
    cout << left << setw(21) << "Rent & Housing" << right << setw(1) << "$" << setw(8) << budget.misc << right << setw(4) << "$" << right << setw(8) << spent.misc << right << setw(4) << "$" << right << setw(8) << miscDifference << endl
         << endl;
    cout << left << setw(21) << "Totals" << right << setw(1) << "$" << setw(8) << budgetTotal << right << setw(4) << "$" << right << setw(8) << spentTotal << right << setw(4) << "$" << right << setw(8) << totalDifference << endl
         << endl;

    //if totalDifference is negative
    if (totalDifference < 0) {
        cout << "You went over budget this month";
    } else {
        cout << "You were within your budget this month";
    }
}