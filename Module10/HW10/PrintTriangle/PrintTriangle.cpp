/* PrintTriangle - Prompts the user to input a size and prints out a triangle with that width
 * Author: Ben Foltz
 * Module: 10
 * Project: Homework 10, project 1
 * Problem Statement: This program prompts the user to input a size and prints out a triangle with that width using a
 *                    function instead of having all the code in main
 * Algorithm:
 * 1. Create function triangle(int width)
 * 2. For loop through the rows <= width
 * 3. Nested for loop through and print stars < rows
 * 4. For loop through the decreasing rows >= 0; rows--
 * 5. Nested for loop through and print the stars < rows
 * 6. Instantiate variables for width and isValid
 * 7. Do while loop until width = 0
 * 8. Prompt user for width of triangle
 * 9. Check if width = 0, print out exit message
 *          else if width < 1 or width > 20, print invalid size
 *          else, isValid = true;
 * 10. Check if isValid, call triangle function if true
 */
#include <iostream>

using namespace std ;

void triangle(int);

int main()
{
    //initialize user input
    int width;
    bool isValid;

    //loop until width = 0
    do {
        //prompt user for width
        cout << "Enter the size of the triangle (1-20): ";
        cin >> width;

        //if width == 0 print exit message
        if (width == 0)
        {
            cout << "Exiting Program";
        }
            //if triangle is not valid size print error and set isValid to false
        else if (width < 1 || width > 20)
        {
            cout << "Invalid triangle size!" << endl << endl;
            isValid = false;
        }
            //otherwise isValid is true
        else
        {
            isValid = true;
        }

        //if input is valid then print triangle
        if (isValid)
        {
            triangle(width);
        }
    } while (width != 0);

    return 0;
}

void triangle(int width)
{
    //prints increasing rows
    for (int rows = 0; rows <= width; rows++)
    {
        //prints the stars
        for (int stars = 0; stars < rows; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //prints decreasing rows
    for (int rows = width - 1; rows >= 0; rows--)
    {
        //prints the stars
        for (int stars = 0; stars < rows; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
}