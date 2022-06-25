// recipe.cpp - adjust a recipe
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>

using namespace std;

int main()
{
  const double SUGAR = 1.5;
  const double BUTTER = 1;
  const double FLOUR = 2.75;
  const int COOKIE_NUM = 48;
  double userNum = 0;

  cout << "How many cookies would you like to make?" << endl;
  cin >> userNum;
  cout << endl; // Blank line for cleanliness
  
  double cookPerc = userNum / COOKIE_NUM;
  double userSugar = SUGAR * cookPerc;
  double userButter = BUTTER * cookPerc;
  double userFlour = FLOUR * cookPerc;

  cout << "For " << userNum << " cookies, you need:\n"
       << userSugar << " cups of sugar,\n"
       << userButter << " cups of butter,\n"
       << "and " << userFlour << " cups of flour." << endl;
	
	return 0;
}