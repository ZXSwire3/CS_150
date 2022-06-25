/* VendingMachine - Calculates the amount of change that would be given by a vending machine.
 * Author: Ben Foltz
 * Module: 3
 * Project: Homework 3, project 2
 * Problem Statement: This program takes in an input from the user to find out which item the would like to purchase
 *                    from the vending machine and then finds the change that would be given if the user put in a 1
 *                    dollar bill
 * Algorithm:
 * 1. Instantiate variables for the possible items and their prices - chips 75 cents, soda 35 cents, candy 5 cents
 *    variable for item selection to know what the user would like to buy, variable for the total change, variable for
 *    the current change, and then variables for the amount of change - quarters, dimes, nickles, pennies.
 * 2. Greet the user and tell them to type '-1' to exit the program
 * 3. Prompt user with possible items to purchase until they exit the program - chips, soda and candy
 * 4. Take in item selection as int 'item'
 * 5. If item is valid then total change = 100 - item price
 * 6. Print "the price of your item is (item price) cents and you gave me $1.00."
 * 7. Assign current change to total change
 * 8. Divide current change by quarters and assign quarters to the value of currentChange
 *    currentChange = currentChange % 25
 *    dimes = currentChange/10
 *    currentChange = currentChange % 10
 *    nickles = currentChange / 5
 *    currentChange = currentChange % 5
 *    pennies = currentChange
 * 9. Print out how many quarter, dimes, nickles, and pennies were given back
 * 10. If item selection does is not a 1, 2, or 3 then print "please enter valid selection" and loop program
 * 11.
 */
#include <iostream>

using namespace std;

int main() {

	int chips = 75; //price of chips in cents
	int soda = 35; //price of soda in cents
	int candy = 5; //price of candy in cents
	int item; //item selection of which item is selected: chips, soda, or candy
	int totalChange; //total change after buying an item
	int currentChange; //current change after removing figuring out how many of each coin there is
	int quarters; //how many quarters are given as change
	int dimes; //how many dimes are given as change
	int nickles; //how many nickles are given as change
	int pennies; // how many pennies are given as change
	bool itemValid = true; //changes output if item is not a valid selection

    //Greet User
    cout << "Welcome to the vending machine!"
         << "\nIf you would like to exit the program type '-1'" << endl;

    //Prompt user and then loop until item selection = -1
	do {
        //Prompt user with possible items to purchase from the vending machine
		cout << "\nWhat item would you like to purchase?"
			 << "\n1. Chips"
			 <<	"\n2. Soda"
			 <<	"\n3. Candy"
             << "\nSelection:";
		cin >> item; //take in an item selection of 1,2,3 or exit the program is -1 is input

        //subtract 100 pennies by item cost
		if (item == 1) {
			totalChange = 100 - chips;
			cout << "\nThe price of your item is " << chips << " cents and you gave me $1.00.";
		} else if (item == 2) {
			totalChange = 100 - soda;
			cout << "\nThe price of your item is " << soda << " cents and you gave me $1.00.";
		} else if (item == 3) {
			totalChange = 100 - candy;
			cout << "\nThe price of your item is " << candy << " cents and you gave me $1.00.";
		} else if (item == -1) {
			cout << "Thanks for your patronage!" <<
					"\nCome again!";
			itemValid = false;
		} else {
			cout << "\nPlease enter a valid item.";
			itemValid = false;
		}

        //if item is valid, calculation is done to find what change should be given
		if (itemValid) {
			currentChange = totalChange; //assign current change to total change
			quarters = currentChange / 25; //find how many quarters divide evenly into the current change
			currentChange = currentChange % 25; //find the remainder after taking out the quarters and assign it to the current change
			dimes = currentChange / 10; //find how many dimes divide evenly into the current change
			currentChange = currentChange % 10; //find the remainder after taking out the dimes and assign it to the current change
			nickles = currentChange / 5; //find how many nickles divide evenly into the current change
			currentChange = currentChange % 5; //find the remainder after taking out the nickles and assign it to the current change
			pennies = currentChange; //remainder after taking out the nickles is pennies

            //print out what the change would be
			cout << "\nYour change is " << totalChange << " cents:"
			     << "\n" << quarters << " quarters,"
			     << "\n" << dimes << " dimes,"
			     << "\n" << nickles << " nickles, and"
			     << "\n" << pennies << " pennies." << endl << endl;
		}

	} while (item != -1);

	return 0;
}