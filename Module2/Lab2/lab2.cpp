// lab2.cpp - Defines variables of various data types, then manipulates them to get some unexpected answers.
// Author: Ben Foltz, Alex H, Alex Shaw
#include <iostream>

using namespace std;

int main()
{
	int maxInt = INT32_MAX;
	cout << "The largest integer value is " << maxInt << " and the size of it in bytes is " << sizeof maxInt << endl;
	cout << "The largest integer value + 1 is " << maxInt + 1 << endl << endl;

	unsigned long long minLong = 0;
	cout << "The smallest long value is " << minLong << " and the size of it in bytes is " <<
	     sizeof minLong << endl;
	cout << "The smallest long value - 1 is " << minLong - 1 << endl << endl;

	double nearMaxDouble = 1.7e308;
	cout << "A large double value is " << nearMaxDouble << " and the size of it in bytes is "
	     << sizeof nearMaxDouble << endl;
	cout << "A large double value * 2 is " << nearMaxDouble * 2 << endl << endl;

	double five = 5.0;
	cout << "A double has the value " << five << endl
	     << "A double with the value of " << five << "/0 is " << five / 0 << endl << endl;

	int decimal9 = 9.999999;
	cout << "The int with the value 9.999999 is truncated to " << decimal9 << endl << endl;
	cout << "The value of 5 is " << 5 << endl
	     << "The value of \'5\' is " << '5' << endl
	     << "The value of \"5\" is " << "5" << endl
	     << "The value of 5 + 1 is " << 5 + 1 << endl
	     << "The value of '5' + 1 is " << ('5' + 1) << endl
	     << "The value of \"5\" + 1 is " << ("5" + 1) << endl;


	return 0;
}