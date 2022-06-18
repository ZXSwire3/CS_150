// FtoC - Takes an input of fahrenheit and converts it into celsius.
// // Author: Ben Foltz
#include <iostream>

using namespace std;

int main() {

	int fahrenheit;
	double celsius;
	do {
		cout << "Please enter a temperature (in Fahrenheit):";
		cin >> fahrenheit;
		if (fahrenheit == -99999) {
			return 0;
		}
		celsius = 5 * (fahrenheit - 32) / 9.0;
		cout << fahrenheit << " degrees Fahrenheit = " << celsius << " degrees Celsius" << endl << endl;

	} while (fahrenheit != -99999);

	return 0;
}