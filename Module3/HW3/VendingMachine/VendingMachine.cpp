// VendingMachine - Calculates the amount of change that would be given by a vending machine.
// Author: Ben Foltz
#include <iostream>

using namespace std;

int main() {

	int chips = 75;
	int soda = 35;
	int candy = 5;
	int item;
	int totalChange;
	int currentChange;
	int quarters;
	int dimes;
	int nickles;
	int pennies;
	bool itemValid = true;

	do {
		cout << "What item would you like to purchase?"
			 << "\n1. Chips"
			 <<	"\n2. Soda"
			 <<	"\n3. Candy" << endl;
		cin >> item;

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

		if (itemValid) {
			currentChange = totalChange;
			quarters = currentChange / 25;
			currentChange = currentChange % 25;
			dimes = currentChange / 10;
			currentChange = currentChange % 10;
			nickles = currentChange / 5;
			currentChange = currentChange % 5;
			pennies = currentChange;

			cout << "\nYour change is " << totalChange << " cents:"
			     << "\n" << quarters << " quarters,"
			     << "\n" << dimes << " dimes,"
			     << "\n" << nickles << " nickles, and"
			     << "\n" << pennies << " pennies." << endl << endl;
		}

	} while (item != -1);

	return 0;
}