// triangles.cpp -
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>

using namespace std ;

int main()
{
    //initialize user input
    int triangleSize;
    bool isValid;

    //loop until triangleSize = 0
    do {
        //prompt user for triangleSize
        cout << "Enter the size of the triangle (1-20): ";
        cin >> triangleSize;

        //if triangleSize == 0 print exit message
        if (triangleSize == 0)
        {
            cout << "Exiting Program";
        }
        //if triangle is not valid size print error and set isValid to false
        else if (triangleSize < 1 || triangleSize > 20)
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
            //prints increasing rows
            for (int rows = 0; rows <= triangleSize; rows++)
            {
                //prints the stars
                for (int stars = 0; stars < rows; stars++)
                {
                    cout << "*";
                }
                cout << endl;
            }

            //prints decreasing rows
            for (int rows = triangleSize - 1; rows >= 0; rows--)
            {
                //prints the stars
                for (int stars = 0; stars < rows; stars++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
    } while (triangleSize != 0);

    return 0;
}