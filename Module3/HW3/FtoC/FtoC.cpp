/* FtoC - Takes an input of fahrenheit and converts it into celsius.
 * Author: Ben Foltz
 * Module: 3
 * Project: Homework 3, project 1
 * Problem Statement: This program takes in an input from the user in fahrenheit and converts it into degrees in celsius
 *
 * Algorithm:
 * 1. Instantiate and int called fahrenheit and a double called celsius.
 * 2. Loop until cin is not a valid input aka when cin is not an int
 * 3. Prompt user for a temperature in fahrenheit that can only be an int
 * 4. if the input is an int then convert fahrenheit to celsius: 5 * (fahrenheit - 32) / 9 , make sure that it outputs a double by dividing by a double
 * 5. Print the results of the conversion
 * 6. Repeat step 1-5 until fahrenheit (cin) is not an int
 * 7. Print "Thank you for using the Fahrenheit to Celsius Converter" when program ends
 */
#include <iostream>

using namespace std;

int main() {

	int fahrenheit; //temperature in fahrenheit
	double celsius; //temperature in celsius

    cout << "Welcome to the Fahrenheit to Celsius Converter!"
            "\nType anything other than an int to exit the program" << endl << endl;

	do {
		cout << "Please enter a temperature (in Fahrenheit and an int only):";
		cin >> fahrenheit;
        if (!cin.good()) {
            cout << "Thank you for using the Fahrenheit to Celsius Converter";
            return 0;
        }
		celsius = 5 * (fahrenheit - 32) / 9.0;
		cout << fahrenheit << " degrees Fahrenheit = " << celsius << " degrees Celsius" << endl << endl;

	} while (cin.good());

	return 0;
}