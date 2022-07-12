/* LoanPayoff - Calculates how long it will take to pay off a loan
 * Author: Ben Foltz
 * Module: 8
 * Project: Homework 8, project 2
 * Problem Statement: This program calculates how long it will take to pay off a loan depending on the loan amount,
 *                    annual interest rate, and payment amount
 * Algorithm:
 * 1. Instantiate constant variables for the loan amount, annual interest rate, and payment amount. Instantiate
 *    variables for current balance, principal, monthly interest, total interest and months
 * 2. Loop while current balance is greater or equal to 0
 * 3. Calculate
 *          monthlyInterest = currentBalance * MONTHLY_INTEREST_RATE
 *          principal = PAYMENT_AMOUNT - monthlyInterest
 *          currentBalance = currentBalance - principal
 *          totalInterest += monthlyInterest
 * 4. Increase months by one each loop
 * 5. When loop ends print out how many loops (months) it took to pay off the loan and print out the amount paid in interest
 */
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    //initialize constants
    const double INITIAL_LOAN = 1000;
    const double ANNUAL_INTEREST_RATE = 0.18;
    const double MONTHLY_INTEREST_RATE = ANNUAL_INTEREST_RATE / 12;
    const double PAYMENT_AMOUNT = 50;

    //initialize variables that will be changed
    double currentBalance = INITIAL_LOAN;
    double principal;
    double monthlyInterest;
    double totalInterest = 0;
    int months = 0;

    while (currentBalance >= 0)
    {
        //calculate monthly interest cost
        monthlyInterest = currentBalance * MONTHLY_INTEREST_RATE;

        //calculate principal cost
        principal = PAYMENT_AMOUNT - monthlyInterest;

        //calculate current balance
        currentBalance = currentBalance - principal;

        //calculate total interest paid
        totalInterest += monthlyInterest;

        //increase months by one
        months++;
    }

    //Print out results
    cout << fixed << setprecision(2);
    cout << "It will take " << months << " months to pay off the loan." << endl
         << "The total interest paid over the life of the loan is : $" << totalInterest;

    return 0;
}