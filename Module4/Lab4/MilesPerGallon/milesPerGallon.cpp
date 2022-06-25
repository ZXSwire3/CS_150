// milersPerGallon.cpp - calculate a car's mileage
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>

using namespace std ;

int main()
{
	int gasTank ;
	int drivableMiles ; 
	double mpg ;

	cout << "Enter the number of gallons your car can hold: " << endl ;
	cin >> gasTank ;
	
	cout << "Enter the number of miles that can be driven on a tank of gas: " << endl ;
	cin >> drivableMiles ;

	mpg = drivableMiles / gasTank ;

	cout << "You car gets " << mpg << " miles per gallon." << endl ;
	
	return 0;
}