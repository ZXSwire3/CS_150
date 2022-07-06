/* Height - Prompts the user for their father and mother's height to predict what their height will be.
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 6, project 1
 * Problem Statement: This program asks the user for the height of their parents and will predict what their height
 *                    will be when they are an adult.
 * Algorithm:
 * 1. Instantiate variables for feet (int), inches (int), input (string), gender (string), isMale (bool),
 *                              heightMotherTotalInches (int), heightFatherTotalInches (int)
 * 2. Prompt the user for how tall their father and mother are in feet and inches
 * 3. Convert feet to inches and add that with the inches inputted and set heightMotherTotalInches and
 *    heightFatherTotalInches equal to that
 * 4. Prompt user for their gender
 * 5. if user's gender is "male" then set isMale to true, if user's gender is "female" set isMale to false, otherwise
 *    print "unknown gender"
 * 6. Estimate the height of the child as an adult with the formulas
 *          heightMaleChild = ((heightMotherTotalInches * 13 / 12) + heightFatherTotalInches) / 2);
 *          heightFemaleChild = ((heightFatherTotalInches * 12 / 13) + heightMotherTotalInches) / 2)
 * 7. if isMale = true then gender = "Male", adultFeet = heightMaleChild / 12 , adultInches = heightMaleChild % 12
 *    else if isMale = false then gender = "Female", adultFeet = heightFemaleChild / 12 , adultInches = heightFemaleChild % 12
 * 8. Print out the predicted height in the form X'Y"
 */
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int feet;
    int inches;

    string input;
    string gender;

    bool isMale;

    int heightMotherTotalInches;
    int heightFatherTotalInches;


    //loop until feet = -1
    do
    {
        //Prompt user for the height of their father
        cout << "What is your father's height?" << endl;
        cout << "How many feet? ";
        cin >> feet;
        cout << "How many inches? ";
        cin >> inches;

        //convert from feet to inches
        inches += feet * 12;
        heightFatherTotalInches = inches;

        cout << "What is your mother's height?" << endl;
        cout << "How many feet? ";
        cin >> feet;
        cout << "How many inches? ";
        cin >> inches;

        //convert from feet to inches
        inches += feet * 12;
        heightMotherTotalInches = inches;

        //Prompt user for their gender
        cout << "Are you male or female? ";
        cin >> input;

        //convert input to lowercase
        transform(input.begin(), input.end(), input.begin(), ::tolower);

        if (equal(input.begin(), input.end(), "male")) //if input is "male"
        {
            isMale = true;
        }
        else if (equal(input.begin(), input.end(), "female")) //if input is "female"
        {
            isMale = false;
        }
        else //if input is not "male" or "female"
        {
            cout << "Unknown Gender";
        }

        //calculate the height of the male and female child
        const int heightMaleChild = round(((heightMotherTotalInches * 13 / 12.0) + heightFatherTotalInches) / 2.0);
        const int heightFemaleChild = round(((heightFatherTotalInches * 12 / 13.0) + heightMotherTotalInches) / 2.0);

        //how many feet the adult child will be
        int adultFeet;
        //how many inches the adult child will be
        int adultInches;
        //the adult child's height in the format X'Y"
        string adultHeight;

        if (isMale) //if male
        {
            gender = "Male";
            //convert from inches to feet
            adultFeet = heightMaleChild / 12;
            //take the leftover inches and put in adultInches
            adultInches = heightMaleChild % 12;

        }
        else if (!isMale) //if female
        {
            gender = "Female";
            //convert from inches to feet
            adultFeet = heightFemaleChild / 12;
            //take the leftover inches and put in adultInches
            adultInches = heightFemaleChild % 12;
        }

        //format the adult child's height
        adultHeight.append(to_string(adultFeet) + "\'" + to_string(adultInches) + "\"");

        //print out the height of the child's predicted height
        cout << "You are " << gender << ", I predict that your height will be " << adultHeight << endl << endl;
    } while (feet != -1);

    return 0;
}