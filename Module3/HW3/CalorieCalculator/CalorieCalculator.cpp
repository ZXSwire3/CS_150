/* CalorieCalculator - Calculates the amount of calories that would be burned depending on the activity and weight.
 * Author: Ben Foltz
 * Module: 3
 * Project: Homework 3, project 3
 * Problem Statement: This program calculates the amount of calories that a person burns based on the activity and their weight
 *
 * Algorithm:
 * 1. Instantiate variables for pounds (double), kilograms (double), caloriesPerMinute (double), the METs for running (int)
 *    playing basketball (int), sleeping (int) and the time spent running and playing basketball and the amount of time
 *    spent sleeping
 * 2. Loop until cin is not a valid input aka when cin is -1
 * 3. Prompt user to enter their weight in pounds
 * 4. if the input is -1 exit the program otherwise continue
 * 5. Calculate kilograms = pounds * 2.2;
 * 6. Calculate the caloriesPerMinute without the MET, caloriesPerMinute = 0.0175 * kilograms;
 * 7. Print out how many calories were burned base on the activity and display how much time they did each activity, the
 *    amount of calories burned for each activity is caloriesPerMinute * run or basketball or sleeping (MET) * acivityTime or sleepingTime
 */
#include <iostream>

using namespace std;

int main() {

	double pounds;
	double kilograms;
	double caloriesPerMinute;
	int run = 10;
	int basketball = 8;
	int sleeping = 1;
	int activityTime = 30;
	int sleepingTime = 6 * 60;

    //Loop until the user types -1 to exit the program
	do {
		cout << "Please enter your weight (in pounds):";
		cin >> pounds;
        //if the user inputs -1 for pounds the program exits
		if (pounds == -1) {
			return 0;
		}

        //calculate kilograms
		kilograms = pounds / 2.2;
		//calculate caloriesPerMinute without METs
        caloriesPerMinute = 0.0175 * kilograms;

        //Print out how many calories were burned for each activity and the amount of time that they were doing said activity
        //caloriesPerMinute is fully calculated here
        cout << "The calories burned while running at 6 MPH for " << activityTime << " min is " << caloriesPerMinute * run * activityTime
			 << "\nThe calories burned while playing basketball for " << activityTime << " min is " << caloriesPerMinute * basketball * activityTime
			 << "\nThe calories burned while sleeping for " << sleepingTime << " min is " << caloriesPerMinute * sleeping * sleepingTime << endl << endl;
	} while (pounds != -1);

	return 0;
}