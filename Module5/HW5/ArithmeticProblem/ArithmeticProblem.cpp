/* ArithmeticProblem - Generates four random digits and adds them together, and then asks the user for what the total is.
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 5, project 3
 * Problem Statement: This program generates four random digits and adds them together and then asks the user what the
 *                    total of the four digits would be and then prints out what the correct answer is.
 * Algorithm:
 * 1. Instantiate variables for each of the four digits and one for the total
 * 2. Generate the four numbers and set them equal to each of their respective variables
 * 3. Set total equal to the four random numbers added together
 * 4. Print out the four digits formatted so that they are aligned to the right
 * 5. Prompt user for the total of the numbers added together
 * 6. Print out the correct answer
 */

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    //initialize random seed
    unsigned int seed = time(0);
    srand(seed);
    //max value that random values can be
    int max = 1000;
    //random values
    int random1 = (rand() % max) + 1;
    int random2 = (rand() % max) + 1;
    int random3 = (rand() % max) + 1;
    int random4 = (rand() % max) + 1;
    //total of the random digits once they are added together
    int total = random1 + random2 + random3 + random4;
    //the total that the user thinks it is
    int userTotal;

    //Print out the digits formatted to the right
    cout << right << setw(10) << random1 << endl
         << right << setw(10) << random2 << endl
         << right << setw(10) << random3 << endl
         << right << setw(7) << "+ " << setw(3) << random4 << endl
         << right << setw(10) << "-----" << endl
         << "Total?" << endl;
    //Prompt user for the total
    cin >> userTotal;
    //Print out the correct total
    cout << endl << "The correct answer is : " << total;

    return 0;
}