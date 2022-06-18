// HolidayGifts.cpp - Calculated how many tools and drawing sets could be bought with $100.
// Author: Ben Foltz
#include <iostream>

using namespace std ;

int main()
{
	double money = 100;
	double toolPrice = 8.92;
	double drawingPrice = 16.28;
	int tools = money / toolPrice;
	int drawingSets = money / drawingPrice;
	double toolChange = 100 - (tools * toolPrice);
	double drawingChange = 100 - (drawingSets * drawingPrice);

	cout << "For tool sets costing $" << toolPrice << " you can buy " << tools << " sets with $" << toolChange << " change."
			"\nFor tool sets costing $" << drawingPrice << " you can buy " << drawingSets << " sets with $" << drawingChange << " change." << endl;
	return 0 ;
}