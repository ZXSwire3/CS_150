/* PrintTriangle - Prompts user to input degrees in fahrenheit or celsius and converts it to the other
 * Author: Ben Foltz
 * Module: 10
 * Project: Homework 10, project 2
 * Problem Statement: This program takes in degrees in fahrenheit or celsius and converts it to the other
 * Algorithm:
 * 1. Create function triangle(double degrees, char scale)
 * 2. Instantiate variables for celsius and fahrenheit
 * 3. Switch on scale
 *          f : fahrenheit = degrees
 *              celsius = celsius = 5 * (fahrenheit - 32) / 9
 *              print conversion
 *          c : celsius = degrees
 *              fahrenheit = (9 / 5) * celsius + 32
 *              print conversion
 * 4. Instantiate variables for degrees and scale
 * 5. Do while loop until scale = q
 * 6. Prompt user for degrees and scale
 * 7. If scale = f or scale = c
 *        convert(degrees, scale)
 *    else
 *        print error
 */
#include <iostream>
#include <iomanip>

using namespace std ;

void convert(double degrees, char scale)
{
    double celsius;
    double fahrenheit;

    cout << fixed << setprecision(1);
    //switch on f or c
    switch (scale)
    {
        case 'f':
            //set fahrenheit to degrees
            fahrenheit = degrees;
            //Calculate celsius
            celsius = 5 * (fahrenheit - 32) / 9.0;
            //print out conversion
            cout << fahrenheit << "° Fahrenheit is " << celsius << "° Celsius" << endl;
            break;
        case 'c':
            //set celsius to degrees
            celsius = degrees;
            //Calculate fahrenheit
            fahrenheit = (9 / 5.0) * celsius + 32;
            //print out conversion
            cout << celsius << "° Celsius is " << fahrenheit << "° Fahrenheit" << endl;
            break;
    }
}

int main()
{
    //initialize user input
    double degrees;
    char scale;

    //Loop until scale = q
    do
    {
        //Prompt user for input
        cout << "Enter a temperature in Fahrenheit or Celsius: ";
        cin >> degrees;
        cout << "Enter scale of degrees (F or C): ";
        cin >> scale;

        //make scale lowercase
        scale = tolower(scale);

        //if scale is f or c then call function
        if (scale == 'f' || scale == 'c')
        {
            convert(degrees, scale);
            cout << endl;
        }
        else //print out error message
        {
            cout << "Invalid scale, please choose either F or C" << endl << endl;
        }
    } while (scale != 'q');

    return 0;
}
