/* GirlsSoccerTeam - Reads in data from a text file into 3 parallel array and prints the data
 * Author: Ben Foltz
 * Module: 14
 * Project: Homework 14, project 2
 * Problem Statement: This program reads in data from a text file into 3 parallel array and prints the data
 * Algorithm:
 * 1. Create arrays for names, goals, and assists
 * 2. Instantiate string line and int count
 * 3. Open the file and error check if it doesn't exist
 * 4. Loop through every line of the file and piece out the name, goals, and assists
 * 5. Assign names, goals, and assists to each corresponding array
 * 6. Increment count
 * 7. Close file
 * 8. Print heading
 * 9. Loop through arrays
 * 10. Calculate performance = assists[i] + (3 * goals[i])
 * 11. Find highest goals, assists, and performance
 * 12. Print each girl's name, goals, assists and performance
 * 13. Print highest goals, assists and performance
 *
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const string PLAYERS_FILE = "Players.txt";
int main()
{
    //how big the arrays are
    int elements = 20;

    //parallel arrays
    string names[elements];
    int goals[elements];
    int assists[elements];

    string line;
    int count = 0;

    //open the file
    ifstream players;
    if (!players)
    {
        cout << "File" << PLAYERS_FILE << " not found!";
        return 0;
    }
    players.open(PLAYERS_FILE);

    //loop through file
    while (getline(players, line))
    {
        //extract names
        string name = line.substr(0, line.rfind(' '));
        //extract goals
        int goal = stoi(name.substr(name.rfind(' '), name.length() - 1));
        name = line.substr(0, name.rfind(' '));

        //assign names to value from text file
        names[count] = name;
        //assign goals to value from text file
        goals[count] = goal;
        //assign assists to value from text file
        assists[count] = stoi(line.substr(line.rfind(' '), line.length()));
        //increment count
        count++;
    }

    //close file
    players.close();

    //Print heading
    string dashes;
    dashes.assign(53, '-');
    cout << left << setw(15) << "Name" << setw(5) << "" << "Goals" << setw(5) << "" << "Assists" << setw(5) << "" << "Performance" << endl
         << dashes << endl;


    //Instantiate stats
    int performance;
    int highestGoals = 0;
    int highestAssists = 0;
    int highestPerformance = 0;

    //Loop through arrays and print info
    for (int i = 0; i < count; i++)
    {
        //calculate performance
        performance = assists[i] + (3 * goals[i]);
        //find the highest goals
        if (highestGoals < goals[i])
        {
            highestGoals = goals[i];
        }
        //find the highest assists
        if (highestAssists < assists[i])
        {
            highestAssists = assists[i];
        }
        //find the highest performance
        if (highestPerformance < performance)
        {
            highestPerformance = performance;
        }
        //print out each girl's stats
        cout << left << setw(20)  << names[i] << right << setw(3) << goals[i] << right << setw(11) << assists[i] << right << setw(15) << performance << endl;
    }

    //Print out the highest goals, assists, and performance
    cout << endl;
    cout << left << setw(27) << "Highest Goals:" << highestGoals << endl
         << left << setw(27) << "Highest Assists:" << highestAssists << endl
         << left << setw(27) << "Highest Performance:" << highestPerformance << endl;
}