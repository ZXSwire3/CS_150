// UberCharge.cpp - Calculated the total charge for taking an Uber ride from the airport to your home.
// Author: Ben Foltz
#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
    double airportFee = 2.51;
    double uberFee = 3.72;
    double uberCharge = 19.86;
    double tip = (uberFee + uberCharge) * 0.08;
    double total = airportFee + uberFee + uberCharge + tip;

    cout << "The airport fee is $" << airportFee <<
			"\nThe Uber fee is $" << uberFee <<
			"\nThe Uber charge is $" << uberCharge <<
			"\nThe tip is $" << std::setprecision(3) << tip <<
			"\nThe total is $" << std::setprecision(4) << total << endl;
    return 0 ;
}