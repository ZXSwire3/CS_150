/* GeometricFigure - Prompts the user for what shape they would like to find the area and volume of.
 * Author: Ben Foltz
 * Module: 11
 * Project: Homework 11, project 1
 * Problem Statement: This program prompts the user to select one of the options to calculate the area and volume of a
 *                    sphere, cube, or pyramid.
 * Algorithm:
 * 1. Create prototype functions for menu(), sphere(), cube(), pyramid()
 * 2. Instantiate global variables for area and volume
 * 3. Infinite do while loop
 *      switch (menu())
 *          case 's'
 *              sphere()
 *          case 'c'
 *              cube()
 *          case 'p'
 *              pyramid()
 *          case 'q'
 *              print exit message
 *              exit(EXIT_SUCCESS)
 *          default
 *              print error
 * 3. menu()
 * 4.   Instantiate string input
 * 5.   Print menu
 * 6.   Prompt user for input
 * 7.   make input lowercase
 * 8.   return the first letter of input;
 * 9. sphere()
 * 10.  Instantiate double radius
 * 11.  Prompt user for radius
 * 12.  while loop if (radius <= 0)
 * 13.      print error
 * 14.      prompt user for radius again
 * 15.  calculate area = 4 * M_PI * pow(radius, 2)
 * 16.  calculate volume = 4 / 3 * M_PI * pow(radius, 3)
 * 17.  print calculations
 * 18. cube()
 * 19.  Instantiate double sideLength
 * 18.  Prompt user for sideLength
 * 19.  while loop if (sideLength <= 0)
 * 20.      print error
 * 21.      prompt user for sideLength again
 * 22.  calculate area = 6 * pow(sideLength, 2)
 * 23.  calculate volume = pow(sideLength, 3)
 * 24.  print calculations
 * 25. pyramid()
 * 26.  Instantiate double base and double height
 * 27.  Prompt user for base
 * 28.  while loop if (base <= 0)
 * 29.      print error
 * 30.      prompt user for base again
 * 31.  Prompt user for height
 * 32.  while loop if (height <= 0)
 * 33.  calculate area = pow(base, 2) + 2 * base * sqrt((pow(base, 2)/4)) + pow(height, 2)
 * 34.  calculate volume = pow(base, 2) * height / 3
 * 35.  print out calculations
 */
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

char menu();

double area;
double volume;

void sphere();
void cube();
void pyramid();

int main()
{
    do {
        //if the first letter of input is one of the options
        switch (menu())
        {
            case 's' :
                sphere();
                break;
            case 'c':
                cube();
                break;
            case 'p':
                pyramid();
                break;
            case 'q':
                cout << "Thank you for using the Geometric Area and Volume Calculator!";
                exit(EXIT_SUCCESS);
            default:
                cout << "Invalid input!" << endl
                     << "Please enter valid option (S, C, P, Q)" << endl;
                break;
        }
        cout << endl;
    } while (true);
}

char menu() {
    string input;

    //Print out menu
    cout << "****** Geometric Area and Volume Calculator ******" << endl
         << endl
         << "S - Calculate the area and volume of a Sphere" << endl
         << "C - Calculate the area and volume of a Cube" << endl
         << "P - Calculate the area and volume of a Pyramid" << endl
         << "Q - Quit" << endl
         << endl
         << right << setw(25) << "Enter your choice: ";

    //Prompt user for input
    cin >> input;

    //Make the input lowercase
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    //Return first letter of input
    return input[0];
}

void sphere() {
    double radius;

    //Prompt user for radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    //if radius is less than or equal to 0 then prompt for new radius until it's greater than 0
    while (radius <= 0) {
        cout << "Invalid radius!" << endl
             << "Please enter a radius greater than 0: ";
        cin >> radius;
    }
    //Calculate the area
    area = 4 * M_PI * pow(radius, 2);
    //Calculate the volume
    volume = 4 / 3.0 * M_PI * pow(radius, 3);

    //Print out calculations
    cout << endl;
    cout << "The area of a sphere with radius " << radius << " is " << area << endl
         << "The volume of a sphere with radius " << radius << " is " << volume << endl;
}

void cube() {
    double sideLength;

    //Prompt user for side length
    cout << "Enter the side length of the cube: ";
    cin >> sideLength;
    //if sideLength is less than or equal to 0 then prompt for new sideLength until it's greater than 0
    while (sideLength <= 0) {
        cout << "Invalid side length!" << endl
             << "Please enter a side length greater than 0: ";
        cin >> sideLength;
    }
    //Calculate the area
    area = 6 * pow(sideLength, 2);
    //Calculate the volume
    volume = pow(sideLength, 3);

    //Print out calculations
    cout << endl;
    cout << "The area of a cube with side lengths of " << sideLength << " is " << area << endl
         << "The volume of a cube with side lengths of " << sideLength << " is " << volume << endl;
}

void pyramid() {
    double base;
    double height;

    //Prompt user for base
    cout << "Enter the base of the pyramid: ";
    cin >> base;
    //if base is less than or equal to 0 then prompt for new base until it's greater than 0
    while (base <= 0) {
        cout << "Invalid base length!" << endl
             << "Please enter a base greater than 0: ";
        cin >> base;
    }
    //Prompt user for height
    cout << "Enter the height of the pyramid: ";
    cin >> height;
    //if height is less than or equal to 0 then prompt for new height until it's greater than 0
    while (height <= 0) {
        cout << "Invalid height!" << endl
             << "Please enter a height greater than 0: ";
        cin >> height;
    }
    //Calculate area
    area = pow(base, 2) + 2 * base * sqrt((pow(base, 2)/4.0)) + pow(height, 2);
    //Calculate volume
    volume = pow(base, 2) * height / 3.0;

    //Print out calculations
    cout << endl;
    cout << "The area of a pyramid with base of " << base << " and height of " << height << " is " << area << endl
         << "The volume of a pyramid with base of " << base << " and height of " << height << " is " << volume << endl;
}
