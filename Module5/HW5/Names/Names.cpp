/* Names - Manipulates strings by appending them and capitalizing specific letters and removing specific parts of a string
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 5, project 2
 * Problem Statement: This program takes strings and puts them together and edits by taking the first letter of each word
 *                    and capitalizing it.
 * Algorithm:
 * 1. Instantiate variables for the first, middle and last name. Instantiate variables for the full name, the full name
 *    capitalized, the current capital letter, the middle name capitalized and the shortened name. All of them are strings.
 * 2. Set the first, middle and last name to dominic, elias, and connors respectively. Set fullName = firstName
 * 3. Add the middle and last name to fullName
 * 4. Set fullNameCapitalized = fullName and then set capitalLetter = toupper(fullNameCapitalized[0]) and replace the
 *    first letter with capitalLetter
 * 5. Set capitalLetter to the first letter of the middle name, find middle name with fullNameCapitalized.find(' ')
 *    replace the first letter of the middle name in fullNameCapitalized with capitalLetter
 * 6. Set capitalLetter to the first letter of the last name, find the last name with fullNameCapitalized.rfind(' ')
 *    replace the first letter of the middle name in fullNameCapitalized with capitalLetter using the replace function
 * 7. Set middleNameCapitalized to the substring of fullNameCapitalized from the first ' ' to the second ' '
 * 8. Set shortenedName = fullNameCapitalized
 * 9. Use erase function on shortenedName to remove the middle name, from the first ' ' to the second ' '
 * 10. Print out the different forms of the names formatted so that they are aligned to the right
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    //each part of the person's name
    const string firstName = "dominic";
    const string middleName = "elias";
    const string lastname = "connors";

    string fullName = firstName; //initialize fullName to have the first part of their name
    string fullNameCapitalized;
    string capitalLetter; //the current letter from the string that has be capitalized
    string middleNameCapitalized;
    string shortenedName;

    //adding the middle and last name to fullName
    fullName += " " + middleName;
    fullName.append(" " + lastname);

    //set fullNameCapitalized to fullName to allow manipulation of fullNameCapitalized without messing with fullName
    fullNameCapitalized = fullName;

    //set capitalLetter to the first letter of fullNameCapitalized and make that letter a capital letter
    capitalLetter = (char) toupper(fullNameCapitalized[0]);
    //replace the lowercase letter with the capitalized letter
    fullNameCapitalized.replace(0, 1, capitalLetter);

    //set capitalLetter to the first letter of the string after the ' ' which would be the middle name
    capitalLetter = (char) toupper(fullNameCapitalized.at(fullNameCapitalized.find(' ') + 1));
    //replace the lowercase letter with the capitalized letter
    fullNameCapitalized.replace(fullNameCapitalized.find(' ') + 1, 1, capitalLetter);

    //set capitalLetter to the first letter of the string after the last ' ' which would be the last name
    capitalLetter = (char) toupper(fullNameCapitalized.at(fullNameCapitalized.rfind(' ') + 1));
    //replace the lowercase letter with the capitalized letter
    fullNameCapitalized.replace(fullNameCapitalized.rfind(' ') + 1, 1, capitalLetter);

    //set middleNameCapitalized to the substring of fullNameCapitalized from the first ' ' to the second ' '
    middleNameCapitalized = fullNameCapitalized.substr(fullNameCapitalized.find(' ') + 1, fullNameCapitalized.rfind(' ') - fullNameCapitalized.find(' ') - 1);

    //set shortenedName to fullNameCapitalized
    shortenedName = fullNameCapitalized;
    //remove the middle name from shortenedName using the erase function from the first ' '  to the second ' '
    shortenedName.erase(fullNameCapitalized.find(' '), (fullNameCapitalized.rfind(' ') - fullNameCapitalized.find(' ')));

    //print out what all the different versions of the names are and formatted nicely
    cout << left << setw(30) <<"My name in lower case:" << fullName << endl
         << setw(30) << "My name capitalized:" << fullNameCapitalized << endl
         << setw(30) << "My middle name is:" << "\"" << middleNameCapitalized << "\"" << endl
         << setw(30) << "My shortened name is:" << "\"" << shortenedName << "\"" << endl;

    return 0;
}