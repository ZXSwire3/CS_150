/* GradeCounter - Prompts the user for grades and creates statistics of those grades
 * Author: Ben Foltz
 * Module: 8
 * Project: Homework 8, project 1
 * Problem Statement: This program prompts the user to enter grades and then prints out statistics about the grades
 * Algorithm:
 * 1. Instantiate variables for gradeNumber, grade, number of A's, B's, C's, D's and F's
 * 2. Print program header
 * 3. Prompt user to input grade
 * 4. Loop until grade < 0
 * 5. if grade is 90 - 100 = A, 80 - 89 = B, 70 - 79 = C, 60 - 69 = D, and 0 - 59 = F
 * 6. Increase gradeNumber each loop
 * 7. After loop if gradeNumber != 0, print out statistics about grades
 * 8. Otherwise, print out error about no grades entered
 */
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    string stars = "**********";
    int gradeNumber = 0;
    int grade;
    string enterGrade;

    //number of each letter grade
    int numberOfA = 0;
    int numberOfB = 0;
    int numberOfC = 0;
    int numberOfD = 0;
    int numberOfF = 0;

    //Print header
    cout << stars + " Grade Counter " + stars << endl
         << "Enter each grade on a separate line" << endl
         << "(numberOfA negative grade will end entry)" << endl
         << endl;

    //Loop until input is a negative number
    do
    {
        //Prompt user for input
        enterGrade = "Enter grade #" + to_string(++gradeNumber) + ": ";
        cout << left << setw(10) << "" << enterGrade;
        cin >> grade;

        //add one to each letter grade depending on the int value
        if (grade <= 100 && grade >= 90)
        {
            numberOfA++;
        }
        else if (grade < 90 && grade >= 80)
        {
            numberOfB++;
        }
        else if (grade < 80 && grade >= 70)
        {
            numberOfC++;
        }
        else if (grade < 70 && grade >= 60)
        {
            numberOfD++;
        }
        else if (grade < 60 && grade >= 0)
        {
            numberOfF++;
        }
        else if (grade < 0)
        {
            gradeNumber--;
        }
    } while (grade >= 0);

    cout << endl;

    //if no grades then don't print out stats
    if (gradeNumber == 0)
    {
        cout << "No grades were entered";
    }
    else
    {
        //print out the number of each letter grades that were input
        cout << fixed << setprecision(1);
        cout << "Total number of grades is " << gradeNumber << endl
             << left << setw(15) << "Number of A's = " << numberOfA << " which is " << right << setw(5) << (numberOfA / (double) gradeNumber) * 100 << "%" << endl
             << left << setw(15) << "Number of B's = " << numberOfB << " which is " << right << setw(5) << (numberOfB / (double) gradeNumber) * 100 << "%" << endl
             << left << setw(15) << "Number of C's = " << numberOfC << " which is " << right << setw(5) << (numberOfC / (double) gradeNumber) * 100 << "%" << endl
             << left << setw(15) << "Number of D's = " << numberOfD << " which is " << right << setw(5) << (numberOfD / (double) gradeNumber) * 100 << "%" << endl
             << left << setw(15) << "Number of F's = " << numberOfF << " which is " << right << setw(5) << (numberOfF / (double) gradeNumber) * 100 << "%";
    }
    return 0;
}