/* Sphere - Calculates the surface area and volume of a sphere given the radius.
 * Author: Ben Foltz
 * Module: 4
 * Project: Homework 4, project 1
 * Problem Statement: This program finds the surface area and volume of a sphere with a user defined radius
 * Algorithm:
 * 1. Instantiate double variables for the radius, surface area, and the volume
 * 2. Prompt the user for a radius
 * 3. Calculate the surface area - 4 * pi * r^2
 * 4. Calculate the volume - 4 / 3 * pi * r^3
 * 5. Print out the output of what the surface area and volume of the sphere is
 */
#include <iostream>
#include <cmath> //allows for the use of M_PI and pow(x,y)

using namespace std;

int main() {

    double radius;
    double surfaceArea;
    double volume;

    //Prompt user for radius
    cout << "Enter the radius of a sphere:";
    cin >> radius;

    //Use cmath to be able to have accurate pi number and to be able to do x number to the power of y number
    surfaceArea = 4 * M_PI * pow(radius, 2);
    volume = 4 / 3.0 * M_PI * pow(radius, 3);

    //Print results of the calculation
    cout << "The surface area of the sphere is " << surfaceArea
         << "\nThe volume of the sphere is " << volume << endl;

    return 0;
}