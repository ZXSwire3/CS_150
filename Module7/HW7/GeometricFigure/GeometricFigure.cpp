/* GeometricFigure - Prompts the user for what shape they would like to find the area of.
 * Author: Ben Foltz
 * Module: 7
 * Project: Homework 7, project 1
 * Problem Statement: This program prompts the user to select one of the options to calculate the area of a circle,
 *                    rectangle, or triangle.
 * Algorithm:
 * 1. Instantiate variables radius, circleArea, length, width, rectangleArea, base, height, and triangleArea.
 * 2. Print out menu. C - Calculate the area of a Circle
 *                    R - Calculate the area of a Rectangle
 *                    T - Calculate the area of a Triangle
 *                    Q - Quit
 * 3. Prompt user for input
 * 4. Switch on the first letter of the input from the user
 * 5. Prompt user for the input depending on the choice given.
 * 6. Calculate results from the numbers that the user input to calculate the area
 */
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string input;

    //circle variables
    double radius;
    double circleArea;

    //rectangle variables
    double length;
    double width;
    double rectangleArea;

    //triangle variables
    double base;
    double height;
    double triangleArea;

    //Print out menu
    cout << "****** Geometric Figure Calculator ******" << endl
         << endl
         << "C - Calculate the area of a Circle" << endl
         << "R - Calculate the area of a Rectangle" << endl
         << "T - Calculate the area of a Triangle" << endl
         << "Q - Quit" << endl
         << endl
         << right << setw(25) << "Enter your choice: ";
    cin >> input;

    //make the input lowercase
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    cout << endl;
    //if the first letter of input is one of the options
    switch (input[0])
    {
        case 'c' :
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            circleArea = M_PI * pow(radius, 2);

            cout << endl;
            cout << "The area of a circle with radius " << radius << " is " << fixed << setprecision(6) << circleArea;
            break;
        case 'r':
            cout << "Enter the rectangle's length and width, separated by a space: ";
            cin >> length >> width;
            rectangleArea = length * width;

            cout << endl;
            cout << "The area of a rectangle with length of " << length << " and width of " << width << " is " << fixed << setprecision(6) << rectangleArea;
            break;
        case 't':
            cout << "Enter the triangle's base and height, separated by a space:";
            cin >> base >> height;
            triangleArea = (base * height) / 2.0;

            cout << endl;
            cout << "The area of a triangle with base of " << base << " and height of " << height << " is " << fixed << setprecision(6) << triangleArea;
            break;
        case 'q':
            cout << "Thank you for using the Geometric Figure Calculator!";
            break;
        default:
            cout << "Invalid input" << endl
                 << "Please enter valid option (C, R, T, Q)";
            break;
    }

    return 0;
}