/* CalorieCalculator2 - Calculates the amount of calories that would be burned depending on the activity and weight.
 * Author: Ben Foltz
 * Module: 6
 * Project: Homework 6, project 2
 * Problem Statement: This program calculates the amount of calories that a person burns based on the activity, their
 *                     weight and how active they are.
 *
 * Algorithm:
 * 1. Instantiate variables for pounds (double), kilograms (double), caloriesPerMinute (double), the METs for running (int)
 *    playing basketball (int), sleeping (int) and the time spent running and playing basketball and the amount of time
 *    spent sleeping, lifestyleInput (int), lifestyleString(string), lifestyle (double), runCalories (double),
 *    basketballCalories (double), sleepCalories (double), and totalCalories (double)
 * 2. Loop until cin is not a valid input aka when cin is -1
 * 3. Prompt user to enter their weight in pounds
 * 4. if the input is -1 exit the program otherwise continue
 * 5. Prompt user to enter how active they are
 * 6. if the input == 1 then lifestyle = 0.8;
 *    else if input == 2 then lifestyle = 1;
 *    else if input == 3 then lifestyle = 1.2;
 *    else if input == 4 then lifestyle = 1.35;
 *    else print out invalid input
 * 6. Calculate kilograms = pounds / 2.2;
 * 7. Calculate the caloriesPerMinute without the MET, caloriesPerMinute = 0.0175 * kilograms
 *
 * 8. Calculate runCalories = caloriesPerMinute * run * activityTime * lifestyle
 *              basketballCalories = caloriesPerMinute * basketball * activityTime * lifestyle
                sleepCalories = caloriesPerMinute * sleeping * sleepingTime * lifestyle
 * 9. Print out what lifestyle the user has
 *    Print out how many calories were burned base on the activity and display how much time they did each activity,
 *    print out the total calories burned.
 */
#include <iostream>

using namespace std;

int main() {

	double pounds;
	double kilograms;
	double caloriesPerMinute;
	const int run = 10;
	const int basketball = 8;
	const int sleeping = 1;
	int activityTime = 30;
	int sleepingTime = 6 * 60;
    int lifestyleInput;
    string lifestyleString;
    double lifestyle;
    double runCalories;
    double basketballCalories;
    double sleepCalories;
    double totalCalories;

    //Loop until the user types -1 to exit the program
	do {
		cout << "Please enter your weight (in pounds):";
		cin >> pounds;

        //if the user inputs -1 for pounds the program exits
        if (pounds == -1) {
            return 0;
        }

        cout << "How active are you?" << endl
             << "1 - Sedentary" << endl
             << "2 - Somewhat active (exercises occasionally)" << endl
             << "3 - Active (exercises 3-4 times a week)" << endl
             << "4 - Highly Active (exercises every day)" << endl;
        cin >> lifestyleInput;

        if (lifestyleInput == 1) {
            lifestyle = .8;
            lifestyleString = "sedentary";
        } else if (lifestyleInput == 2) {
            lifestyle = 1;
            lifestyleString = "somewhat active";
        } else if (lifestyleInput == 3) {
            lifestyle = 1.2;
            lifestyleString = "active";
        } else if (lifestyleInput == 4) {
            lifestyle = 1.35;
            lifestyleString = "highly active";
        } else {
            cout << "please enter a valid input" << endl
                 << "1-4 are valid choices";
        }

        //calculate kilograms
		kilograms = pounds / 2.2;
		//calculate caloriesPerMinute without METs
        caloriesPerMinute = 0.0175 * kilograms;

        //calculate the calories burned in each activity
        runCalories = caloriesPerMinute * run * activityTime * lifestyle;
        basketballCalories = caloriesPerMinute * basketball * activityTime * lifestyle;
        sleepCalories = caloriesPerMinute * sleeping * sleepingTime * lifestyle;

        totalCalories = runCalories + basketballCalories + sleepCalories;
        //Print out how many calories were burned for each activity and the total calories burned and the amount of time that they were doing said activity
        cout << "You are " << lifestyleString << " so..." << endl;
        cout << "The calories burned while running at 6 MPH for " << activityTime << " min is " << runCalories << endl
			 << "The calories burned while playing basketball for " << activityTime << " min is " << basketballCalories << endl
			 << "The calories burned while sleeping for " << sleepingTime << " min is " << sleepCalories << endl
             << "The total amount of calories burned while doing these activities is " <<  totalCalories << endl << endl;
	} while (pounds != -1);

	return 0;
}