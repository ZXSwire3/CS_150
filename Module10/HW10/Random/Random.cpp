/* Random - Prompts the user for random number parameters and then prints out numbers according to the input
 * Author: Ben Foltz
 * Module: 10
 * Project: Homework 10, project 4
 * Problem Statement: This program prompts the user for random number parameters and then prints out numbers according
 *                    to the input
 * Algorithm:
 * 1. Create function printRandom(int min, int max, int count)
 * 2. Initialize random seed
 * 3. Instantiate randomNum
 * 4. for loop until i = count
 *      randomNum = (rand() % (max - min + 1)) + min
 *      print randomNum
 * 5. Instantiate min, max, count, minValid, maxValid, countValid
 * 6. Do while loop until minValid = true
 * 7. Prompt user for min
 * 8. if (min < 0)
 *        print error
 *        minValid = false
 *    else
 *        minValid = true
 * 9. Do while loop until maxValid = true
 * 10. Prompt user for min
 * 11. if (max <= min)
 *        print error
 *        maxValid = false
 *    else
 *        maxValid = true
 * 12. Repeat steps 6 - 8 except with count and countValid
 * 13. Print output and call printRandom function
 */
#include <iostream>
#include <ctime>
#include <string>

using namespace std ;

void printRandom(int, int, int);

int main()
{
    //Instantiate variables
    int min;
    int max;
    int count;
    bool minValid;
    bool maxValid;
    bool countValid;

    //Loop until minValid = true
    do
    {
        //Prompt user for min
        cout << "Enter the smallest whole number: ";
        cin >> min;

        //check if min is greater than 0
        if (min < 0)
        {
            //print error
            cout << "Invalid min number!" << endl;
            minValid = false;
        }
        else
        {
            minValid = true;
        }
    } while (!minValid);

    //Loop until maxValid = true
    do
    {
        //Prompt user for max
        cout << "Enter the largest whole number: ";
        cin >> max;

        //check if max is greater than 0
        if (max <= min)
        {
            //print error
            cout << "Invalid max number!" << endl;
            maxValid = false;
        }
        else
        {
            maxValid = true;
        }
    } while (!maxValid);

    //Loop until countValid = true
    do
    {
        //Prompt user for count
        cout << "Enter how many numbers to generate: ";
        cin >> count;

        //check if count is greater than 0
        if (count < 0)
        {
            //print error
            cout << "Invalid numbers to generate!" << endl;
            countValid = false;
        }
        else
        {
            countValid = true;
        }
    } while (!countValid);

    //Print output
    cout << "Here are " << count << " numbers between " << min << " and " << max << endl;
    printRandom(min, max, count);

    return 0;
}

void printRandom(int min, int max, int count)
{
    //initialize random seed
    unsigned int seed = time(0);
    srand(seed);
    //instantiate randomNum variable
    int randomNum;
    for (int i = 0; i < count; i++)
    {
        //generate random number each loop
        randomNum = (rand() % (max - min + 1)) + min;
        //print random number
        cout << randomNum << endl;
    }
}
