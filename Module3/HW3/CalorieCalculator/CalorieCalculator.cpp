// CalorieCalculator - Calculates the amount of calories that would be burned depending on the activity and weight.
// Author: Ben Foltz
#include <iostream>

using namespace std;

int main() {

	double pounds;
	double kilograms;
	double CPM;
	int run = 10;
	int basketball = 8;
	int sleeping = 1;
	int activityTime = 30;
	int sleepingTime = 6 * 60;

	do {
		cout << "Please enter your weight (in pounds):";
		cin >> pounds;
		if (pounds == -1) {
			return 0;
		}
		kilograms = pounds * 2.2;
		CPM = 0.0175 * kilograms;
		cout << "The calories burned while running at 6 MPH for " << activityTime << " min is " << CPM * run * activityTime
			 << "\nThe calories burned while playing basketball for " << activityTime << " min is " << CPM * basketball * activityTime
			 << "\nThe calories burned while sleeping for " << sleepingTime << " min is " << CPM * sleeping * sleepingTime << endl << endl;
	} while (pounds != -1);

	return 0;
}