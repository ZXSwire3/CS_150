/* Fibonacci - Prints the first x numbers of the fibonacci sequence depending on the user input
 * Author: Ben Foltz
 * Module: 10
 * Project: Homework 10, project 3
 * Problem Statement: This program prints the first x numbers of the fibonacci sequence depending on the user input
 * Algorithm:
 * 1. Create function fibonacci(int seq)
 * 2. Instantiate variables for previousNum, currentNum, nextNum, and fibonacciString
 * 3. for (int i = 0; i < seq; i++)
 *          append previousNum + ", " to fibonacciString
 *          if (i == 0)
 *              previousNum = 1
 *              currentNum = 1
 *              nextNum = 2
 *          else
 *              previousNum = currentNum
 *              currentNum = nextNum
 *              nextNum = previousNum + currentNum
 * 4. remove last ", " from fibonacciString
 * 5. Print fibonacciString
 * 6. instantiate number variable
 * 7. do while loop until number = 0
 * 8. Prompt user for a number from 1 to 25
 * 9. if number = 0
 * 10.    print error message
 * 11. else if (number > 1 || number < 25)
 * 12.    fibonacci(number)
 * 13. else
 *        print error message
 */
#include <iostream>
#include <string>

using namespace std ;

void fibonacci(int);

int main()
{
    //instantiate number
    int number;

    do
    {
        //prompt user for number
        cout << "Enter a number from 1 to 25 (or 0 to exit): ";
        cin >> number;

        //exit program
        if (number == 0)
        {
            cout << "Exiting Program";
        }
        //valid input
        else if (number > 1 && number < 25)
        {
            //call function
            fibonacci(number);
        }
        //invalid input
        else
        {
            cout << "Invalid number" << endl << endl;
        }
    } while (number != 0);
    return 0;
}

void fibonacci(int seq)
{
    //instantiate variables
    int previousNum = 0;
    int currentNum;
    int nextNum;
    string fibonacciString;

    for (int i = 0; i < seq; i++)
    {
        //add numbers to fibonacciString
        fibonacciString.append((to_string(previousNum) + ", "));

        if (i == 0)
        {
            previousNum = 1;
            currentNum = 1;
            nextNum = 2;
        }
        else
        {
            previousNum = currentNum;
            currentNum = nextNum;
            nextNum = previousNum + currentNum;
        }
    }
    //remove ", "
    fibonacciString.replace(fibonacciString.length() - 2, 2, "");
    cout << "That Fibonacci sequence is: " << fibonacciString << endl << endl;
}
