// monetaryConversions.cpp - convert dollars to various foreign currencies
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>

using namespace std ;

int main()
{
  double usd;
  double euro;
  double yen;
  double yuan;
  double rupee;
  double peso;
  double cad;

  cout << "Welcome to the Money Exchange System!" << endl;
       
  
    cout << "Enter how many dollars (USD) you would like to convert: $";
    cin >> usd;
    
    euro = 0.950735 * usd;
    yen = 135.10501043 * usd;
    yuan = 6.6925 * usd;
    rupee = 77.934247 * usd;
    peso = 20.273284 * usd;
    cad = 1.297699 * usd;

    cout << "When converting $" << usd << " to Euros (EUR) you will receive €" << euro 
         << "\n                   to Yen (JPY) you will receive ¥" << yen 
         << "\n                   to Yuan (CNY) you will receive ¥" << yuan
         << "\n                   to Rupees (INR) you will receive ₹" << rupee 
         << "\n                   to Pesos (MXN) you will receive $" << peso 
         << "\n                   to Dollars (CAD) you will receive $" << cad << endl << endl;
	return 0;
}