/* Trigonometry - Finds the sine, cosine and tangent values of an angle in degrees.
 * Author: Ben Foltz
 * Module: 4
 * Project: Homework 4, project 3
 * Problem Statement: This program finds the sine, cosine and tangent values of a user defined angle in degrees
 * Algorithm:
 * 1. Instantiate variables for degrees (int) and radians (double)
 * 2. Prompt the user for an angle in degrees
 * 3. Use cmath for M_PI
 * 4. Set radians = M_PI * degrees / 180.0
 * 5. Calculate sine, cosine and tangent. sin(radians), cos(radians), tan(radians)
 * 6. Print out the sine, cosine, tangent and radians.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int degrees;
    double radians;

    //Prompt user for angle in degrees
    cout << "Enter an angle (in degrees):";
    cin >> degrees;

    //Calculate radians
    radians = M_PI * degrees / 180.0;

    //Print out the values for sine, cosine, tangent and radians
    cout << "\nThe sine of " << degrees << " degrees is " << sin(radians)
         << "\nThe cosine of " << degrees << " degrees is " << cos(radians)
         << "\nThe tangent of " << degrees << " degrees is " << tan(radians)
         << "\n(" << degrees << " degrees is " << radians << " radians.)" << endl;


    return 0;
}