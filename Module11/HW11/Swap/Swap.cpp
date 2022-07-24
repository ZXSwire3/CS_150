/* Swap - Prompts the user for two numbers and swaps them.
 * Author: Ben Foltz
 * Module: 11
 * Project: Homework 11, project 2
 * Problem Statement: This program prompts the user for two numbers and then swaps them normally and using the bitwise operator
 * Algorithm:
 * 1. Create prototype for swap(double, double) and swap(int, int)
 * 2. main()
 *    Loop infinitely
 * 3. Initialize variables for int a, int b, double x, double y
 * 4. Prompt user for two numbers
 * 5. if two numbers are equal then exit program
 * 6. if x and y are ints then a = x and b = y
 * 7.   Print out before and after bitwise swap
 * 8. Print out before and after double swap
 * 9. swap(double, double)
 *      first = first + second
 *      second = first - second
 *      first = first - second
 * 10. swap(int , int)
 *      first = first ^ second
 *      second = first ^ second
 *      first = first ^ second
 */
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void swap(double &, double &);
void swap(int &, int &);

int main()
{
    do {
        int a, b;
        double x, y;

        //Prompt user for two numbers
        cout << "Enter two numbers: ";
        cin >> x >> y;

        //exit condition
        if (x == 0 && y == 0) {
            exit(EXIT_SUCCESS);
        }

        //checks to see if x and y are ints
        if (floor(x) == ceil(x) && floor(y) == ceil(y)) {
            //x and y are ints so a = x and b = y
            a = floor(x);
            b = floor(y);

            //Print out bitwise swap
            cout << endl;
            cout << "Bitwise Swap" << endl
                 << a << " and " << b << endl;
            swap(a, b);
            cout << a << " and " << b << endl << endl;
        }

        //Print out double swap
        cout << "Double Swap" << endl
             << x << " and " << y << endl;
        swap(x, y);
        cout << x << " and " << y << endl << endl;
    } while (true);
}

void swap(double &first, double &second) {
    first = first + second;
    second = first - second;
    first = first - second;
}

void swap(int &first, int &second) {
    first = first ^ second;
    second = first ^ second;
    first = first ^ second;
}

