/* Deduplication - Prompts the user to select the input and output files and then reads in the numbers and removes any duplicates
 * Author: Ben Foltz
 * Module: 9
 * Project: Homework 9, project 2
 * Problem Statement: This program prompts the user to select the input and output files and then reads in the numbers
 *                    and removes any duplicates and then says how many numbers there were, how many were output, and
 *                    how many duplicates were removed.
 * Algorithm:
 * 1. Instantiate variables for input file, output file, line, original, unique, copy, first number, numbers, output
 *    numbers, and duplicates.
 * 2. Open input file
 * 3. if input file does not exist then print error
 * 4. Loop through input file, write to line, add to original and increment numbers
 * 5. Copy = original
 * 6. Loop until copy is empty
 * 7. firstNum = copy.substr(0, copy.find(' '))
 * 8. Delete firstNum from copy
 * 9. if firstNum != copy.substr(0, copy.find(' ')), unique = firstNum, increment outputNumbers
 * 10. else increment duplicates
 * 11. Open output file
 * 12. Write unique to output file
 * 13. Close input and output files
 * 14. Print stats about the numbers from the input file
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

int main()
{
    string inputFile;
    string outputFile;
    string line;
    string original;
    string unique;
    string copy;
    string firstNum;
    int numbers = 0;
    int outputNumbers = 0;
    int duplicates = 0;

    //Prompt user for input file
    cout << "Enter input file name or full path: ";
    cin >> inputFile;
    //Prompt user for output file
    cout << "Enter output file name or full path: ";
    cin >> outputFile;

    //Create input stream
    ifstream input;
    if (!input)
    {
        cout << "File" << inputFile << " not found!";
        return 0;
    }
    //Open input file
    input.open(inputFile);


    //Load lines of the file into original variable and increment numbers
    while (getline(input, line))
    {
        original.append(line + " ");
        numbers++;
    }

    //copy original numbers into another variable
    copy = original;

    //loop until copy is empty
    while (!copy.empty())
    {
        //the first number starts from 0 to the first space
        firstNum = copy.substr(0, copy.find(' '));
        //replace the first number with an empty space to remove that number
        copy.replace(copy.find(firstNum), firstNum.length() + 1, "");

        //if firstNum is not equal to the first number in copy then add it to unique and increment output numbers
        if (firstNum != copy.substr(0, copy.find(' ')))
        {
            unique.append(firstNum + "\n");
            outputNumbers++;
        }
        else // increment duplicates if firstNum == first number in copy
        {
            duplicates++;
        }
    }

    //Create output stream
    ofstream output;
    //Open output file
    output.open(outputFile);
    //Write unique to output file
    output << unique;

    //close both input and output stream
    input.close();
    output.close();

    //Print out stats about the numbers
    cout << "There were " << numbers << " numbers input, " << outputNumbers << " output, and " << duplicates << " duplicates.";

    return 0;
}
