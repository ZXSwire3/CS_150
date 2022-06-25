/* FloorToCeiling - Finds the floor and ceiling of a floating-point number.
 * Author: Ben Foltz
 * Module: 4
 * Project: Homework 4, project 2
 * Problem Statement: This program finds the floor and ceiling of a floating-point number defined by the user
 * Algorithm:
 * 1. Instantiate double variables for number, floor number, and ceiling number
 * 2. Prompt the user for a floating point number
 * 3. Use cmath for floor and ceiling functions
 * 4. Set floorNumber to floor(number)
 * 5. Set ceilingNumber to ceil(number)
 * 6. Print out the number that the user input and the variables floorNumber and ceilingNumber
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double number;
    double floorNumber;
    double ceilingNumber;

    //Prompt user for floating point number
    cout << "Enter a floating point number:";
    cin >> number;

    //Calculate floor and ceiling number and set it to their respective variables
    floorNumber = floor(number);
    ceilingNumber = ceil(number);

    //Print user input, floorNumber and ceilingNumber
    cout << "You entered " << number << ", the floor of this number is " << floorNumber
         << " and the ceiling of this number is " << ceilingNumber;

    return 0;
}