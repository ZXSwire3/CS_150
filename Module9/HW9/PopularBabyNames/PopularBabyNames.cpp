/* PopularBabyNames - Prompts the user to input a name and then checks to see how highly ranked that name was.
 * Author: Ben Foltz
 * Module: 9
 * Project: Homework 9, project 1
 * Problem Statement: This program prompts the user to input a name and then checks to see how highly ranked the name is
 *                    for boys and girls
 * Algorithm:
 * 1. Instantiate variables for name, line, current name, amount, rank, and isRanked
 * 2. Loop until name is "quit"
 * 3. Prompt user to input a name
 * 4. Open input files for boy and girl list
 * 5. If file does not exist at location, print error and end program
 * 6. Loop through file until end of file and apply each line to line variable
 * 7. Split line variable into currentName and amount, currentName being before the space and amount being after the space
 * 8. If currentName == name then set amount equal to the string after the space and set isRanked to true, otherwise isRanked = false
 * 9. Increment rank each loop
 * 10. Once out of the loop check is isRanked = true or false and print out the rank and how many people are named the
 *     input name or print out that there are no people named that in the top 1000
 * 11. Rank = 1
 * 12. Repeat steps 6-10 but for the girls
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

const string BOYS_FILE = "BoyNames2020.txt",
             GIRLS_FILE = "GirlNames2020.txt";

int main()
{
    string name;
    string line;
    string currentName;
    int amount;
    int rank = 1;
    bool isRanked;

    do {
        cout << "Enter the name to search for: ";
        cin >> name;

        if (name == "quit") {
            return 0;
        }

        ifstream boyNames;
        if (!boyNames) {
            cout << "File" << BOYS_FILE << " not found!";
            return 0;
        }
        boyNames.open(BOYS_FILE);

        ifstream girlNames;
        if (!girlNames) {
            cout << "File" << GIRLS_FILE << " not found!";
            return 0;
        }
        girlNames.open(GIRLS_FILE);

        while (getline(boyNames, line)) {
            currentName = line.substr(0, line.find(' '));
            if (name == currentName) {
                amount = stoi(line.substr(line.find(' '), line.length()-1));
                isRanked = true;
                break;
            } else {
                isRanked = false;
            }
            rank++;
        }

        if (isRanked) {
            cout << name << " is ranked " << rank << " among boys, with " << amount << " registered births.\n";
        } else {
            cout << "The name " << name << " is not among the top 1000 ranked boy names\n";
        }

        rank = 1;
        while (getline(girlNames, line)) {
            currentName = line.substr(0, line.find(' '));
            if (name == currentName) {
                amount = stoi(line.substr(line.find(' '), line.length()-1));
                isRanked = true;
                break;
            } else {
                isRanked = false;
            }
            rank++;
        }

        if (isRanked) {
            cout << name << " is ranked " << rank << " among girls, with " << amount << " registered births.\n";
        } else {
            cout << "The name " << name << " is not among the top 1000 ranked girl names\n";
        }

        cout << endl;
    } while (name != "quit");

    return 0;
}
