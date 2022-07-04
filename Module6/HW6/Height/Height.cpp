/* ArtSupplies - Prompts the user for how many of each item the would like to buy and prints out a nicely formatted receipt.
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 5, project 1
 * Problem Statement: This program asks the user for how many of each item they would like to purchase and then prints
 *                    out a nicely formatted receipt.
 * Algorithm:
 * 1. Instantiate the constant variables, pencilPrice (double), sketchPrice (double), and eraserPrice (double)
 * 2. Instantiate variables for the quantity pencils (int), sketch pads (int), and erasers (int)
 * 3. Prompt the user for how many of each item they would like to purchase
 * 4. Instantiate variables for double pencilTotal = pencilQuantity * pencilPrice
 *                              double sketchTotal = sketchQuantity * sketchPrice
 *                              double eraserTotal = eraserQuantity * eraserPrice
 *                              double total = pencilTotal + sketchTotal + eraserTotal
 * 5. Set the precision of the doubles to two variable places
 * 6. Print out the item, how many were purchased, the price of each item, the total for each item and then the grand
 *    total. Use setw to add spaced between everything to have the numbers line up in columns
 */
#include <iostream>
#include <iomanip>
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

    int motherFeet;
    int motherInches;

    int fatherFeet;
    int fatherInches;

    cout << "What is your father's height?" << endl;
    cout << "How many feet? ";
    cin >> feet;
    cout << "How many inches? ";
    cin >> inches;

    fatherFeet = feet;
    fatherInches = inches;

    inches += feet * 12;
    heightFatherTotalInches = inches;

    cout << "What is your mother's height?" << endl;
    cout << "How many feet? ";
    cin >> feet;
    cout << "How many inches? ";
    cin >> inches;

    motherFeet = feet;
    motherInches = inches;

    inches += feet * 12;
    heightMotherTotalInches = inches;

    cout << "Are you male or female? ";
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    if (equal(input.begin(), input.end(), "male")) {
        isMale = true;
    } else if (equal(input.begin(), input.end(), "female")) {
//        cout << "female";
        isMale = false;
    } else {
        cout << "Unknown Gender";
    }

    const int heightMaleChild = round(((heightMotherTotalInches * 13 / j0(12)) + heightFatherTotalInches) / j0(2));
    cout << heightMaleChild;
    const int heightFemaleChild = ((heightFatherTotalInches * 12 / 13) + heightMotherTotalInches) / 2;

    int adultFeet;
    int adultInches;
    string adultHeight;

    if (isMale) {
        gender = "Male";
        cout << round(heightMaleChild);
        adultFeet = round(heightMaleChild) / 12;
        adultInches = heightMaleChild % 12;

    } else if (!isMale) {
        gender = "Female";
        adultFeet = heightFemaleChild / 12;
        adultInches = heightFemaleChild % 12;
    }

    adultHeight.append(to_string(adultFeet) + "\'" + to_string(adultInches) + "\"");

    cout << "You are " << gender << ", I predict that your height will be " << adultHeight;
    return 0;
}