// iHateShopping.cpp -reads a grocery list from a text file, then creates another text file containing a formatted list of the items on that list.
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std ;

const string INPUT_FILE = "grocery.txt",
	         OUTPUT_FILE = "output.txt" ;

int main()
{
    string item;
    int quantity;
    double price;
    string unit;
    string dummy;
    double itemTotal;
    double grandTotal = 0;

    //input stream
    ifstream grocery;
    //if grocery.txt does not exist
    if (!grocery)
    {
        //output error
        cout << "File not found!";
        return 0;
    }
    //open input file at location
    grocery.open(INPUT_FILE);


    //output stream
    ofstream output ;
    //open output file at location
    output.open(OUTPUT_FILE);

    //write header to file
    cout << right << setw(35) << "My Grocery List\n"
           << right << setw(44) << "Est." << setw(9) << "Item\n"
           << left << setw(25) << "---------Item---------" << left << setw(7) << "Qnty" << left << setw(7) << "Unit" << setw(9) << "Unit-$" << "Total\n";

    //loop through whole input file and apply lines to variables
    while (getline(grocery, item)) {
        grocery >> quantity;
        grocery >> price;
        getline(grocery, dummy);
        getline(grocery, unit);

        //calculate item total
        itemTotal = quantity * price;
        //calculate grand total
        grandTotal += itemTotal;
        //write item info to output file
        cout << left << setw(22) << item << right << setw(7) << quantity << left << setw(3) << "" << left << setw(6) << unit << right << setw(6) << price << right << setw(9) << itemTotal << "\n";
    }

    //write grocery total to output file
    output << right << setw(54) << "-------\n"
           << left << "Grocery Total" << right << setw(40) << grandTotal;

    //close both input and output files
    grocery.close();
    output.close();

    return 0;
}