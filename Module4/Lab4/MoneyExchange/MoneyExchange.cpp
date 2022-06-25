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

    cout << "Welcome to the Money Exchange System!"
         << "\nIf at any point you would like to exit the program type '-1'" << endl << endl;

    do
    {
        cout << "Enter how many dollars (USD) you would like to convert: $";
        cin >> usd;

        if (usd == -1)
        {
            cout << "Thank you for using the Money Exchange System!";
            return 0;
        }

        if (!cin.good())
        {
            cout << "\nInput invalid, please restart the program and enter a valid number";
            return 0;
        }

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

    } while (usd != -1);

    return 0;
}