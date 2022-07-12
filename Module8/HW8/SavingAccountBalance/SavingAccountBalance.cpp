/* SavingAccountBalance - Calculates the balance of a savings account at the end of a three-month period
 * Author: Ben Foltz
 * Module: 8
 * Project: Homework 8, project 3
 * Problem Statement: This program calculates the balance of a savings account at the end of a three-month period and
 *                    prompts the user to deposit and withdraw money each month
 * Algorithm:
 * 1. Instantiate variables for beginning balance, annual interest rate, balance, deposit amount, withdrawal amount,
 *    total deposit amount, total withdrawal amount, monthly starting balance, monthly ending balance, interest, total
 *    interest, and months
 * 2. Prompt user for beginning balance and annual interest rate
 * 3. Loop until months <= NUMBER_OF_MONTHS
 * 4. month starting amount = balance
 * 5. Loop until deposit amount is valid
 * 6. Prompt user for deposit amount
 * 7. If deposit amount is less than 0 then print error, isValid = false, otherwise isValid = true
 * 8. Add deposit amount to balance
 * 9. Add deposit amount to total deposit amount
 * 10. Loop until withdrawal amount is valid
 * 11. If withdrawal amount is less than 0 or withdrawal amount is greater than balance then print error, isValid = false,
 *     otherwise isValid = true
 * 12. Subtract withdrawal from balance
 * 13. Add withdrawal to total withdrawal
 * 14. monthly ending balance = balance
 * 15. interest = (annualInterestRate / 12) * ((monthStartingBalance + monthEndingBalance)/2)
 * 16. Add interest to total interest
 * 17. Add interest to balance
 * 18. Increment months
 * 19. Print out monthly activity
 */
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    const int NUMBER_OF_MONTHS = 3;

    double beginningBalance;
    double annualInterestRate;

    //Prompt user for beginning balance
    cout << "Please enter the beginning balance: ";
    cin >> beginningBalance;
    //Prompt user for annual interest rate
    cout << "Please enter the annual interest rate: ";
    cin >> annualInterestRate;
    annualInterestRate = annualInterestRate / 100;

    //Instantiate variables
    double balance = beginningBalance;
    int months = 1;
    double depositAmount;
    double withdrawalAmount;
    double totalDepositAmount = 0;
    double totalWithdrawalAmount = 0;
    double monthStartingBalance;
    double monthEndingBalance;
    double interest;
    double totalInterest = 0;
    bool isValid;

    //Loop until months <= NUMBER_OF_MONTHS
    do
    {
        cout << endl;
        //balance at the beginning of the month
        monthStartingBalance = balance;
        //Loop until deposit amount is valid
        do
        {
            //Prompt user for deposit amount
            string depositString = "Enter the deposits for month " + to_string(months) + ":";
            cout << left << setw(35) << depositString;
            cin >> depositAmount;

            //if deposit amount is less than 0 then print error and isValid = false
            if (depositAmount < 0)
            {
                cout << left << setw (5) << "" << "** Can't let you deposit negative numbers -- sorry, try again" << endl;
                isValid = false;
            }
            else //otherwise isValid = true
            {
                isValid = true;
            }
        } while (!isValid);

        //add deposit amount to balance
        balance += depositAmount;
        //add deposit amount to total deposit amount
        totalDepositAmount += depositAmount;

        //Loop until deposit withdrawal amount is valid
        do
        {
            //Prompt user for withdrawal amount
            string withdrawalString = "Enter the withdrawals for month " + to_string(months) + ":";
            cout << left << setw(35) << withdrawalString;
            cin >> withdrawalAmount;

            //if withdrawal amount is greater than balance then print error and isValid = false
            if (withdrawalAmount > balance)
            {
                cout << left << setw(5) << "" << "** Can't let you overdraw -- sorry, try again" << endl;
                isValid = false;
            }
            else if (withdrawalAmount < 0) //if withdrawal amount is less than 0 then print error and isValid = false
            {
                cout << left << setw(5) << "" << "** Can't let you withdrawal negative numbers -- sorry, try again" << endl;
                isValid = false;
            }
            else //otherwise isValid = true
            {
                isValid = true;
            }
        } while (!isValid);

        //subtract withdrawal amount from balance
        balance -= withdrawalAmount;
        //add withdrawal amount to total withdrawal amount
        totalWithdrawalAmount += withdrawalAmount;

        //balance at the end of the month
        monthEndingBalance = balance;

        //calculate interest
        interest = (annualInterestRate / 12) * ((monthStartingBalance + monthEndingBalance)/2);
        //add interest to total interest
        totalInterest += interest;
        //add interest to balance
        balance += interest;
        //increment months
        months++;
    } while (months <= NUMBER_OF_MONTHS);

    //Print out monthly activity
    cout << fixed << setprecision(2) << endl;
    cout << "***** MONTHLY ACTIVITY *****" << endl
         << endl
         << left << setw(20) << "Beginning Balance: " << right << setw(10) << beginningBalance << endl
         << left << setw(20) << "Total Withdrawals: " << right << setw(10) << totalWithdrawalAmount << endl
         << left << setw(20) << "Total Deposits: " << right << setw(10) << totalDepositAmount << endl
         << left << setw(20) << "Interest: " << right << setw(10) << totalInterest << endl
         << left << setw(20) << "Ending Balance: " << right << setw(10) << balance;

    return 0;
}