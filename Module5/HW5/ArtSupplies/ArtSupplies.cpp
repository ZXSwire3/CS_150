/* ArtSupplies - Prompts the user for how many of each item the would like to buy and prints out a nicely formatted receipt.
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 5, project 1
 * Problem Statement: This program asks the user for how many of each item they would like to purchase and then prints
 *                    out a nicely formatted receipt.
 * Algorithm:
 * 1. Instantiate the constant variables, pencilPrice (double), sketchPrice (double), and eraserPrice (double)
 * 2. Instantiate variables for the quantity pencils (int), sketch pads (int), and erasers (int)
 * 3. Prompt the user for how many of each item they would like to purchase
 * 4. Instantiate variables for double pencilTotal = pencilQuantity * pencilPrice
 *                              double sketchTotal = sketchQuantity * sketchPrice
 *                              double eraserTotal = eraserQuantity * eraserPrice
 *                              double total = pencilTotal + sketchTotal + eraserTotal
 * 5. Set the precision of the doubles to two variable places
 * 6. Print out the item, how many were purchased, the price of each item, the total for each item and then the grand
 *    total. Use setw to add spaced between everything to have the numbers line up in columns
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    //constant cost of items
    const double pencilPrice = 15.10;
    const double sketchPrice = 36.25;
    const double eraserPrice = 4.72;

    //how many items the user wants to buy
    int pencilQuantity;
    int sketchQuantity;
    int eraserQuantity;

    //Prompt user for how many of each item they would like to buy
    cout << "How many graphite pencil sets, sketch pads, and packages of erases would you like to purchase?";
    cout << "\nGraphite Pencil Sets:";
    cin >> pencilQuantity;
    cout << "Sketch Pads:";
    cin >> sketchQuantity;
    cout << "Packages of Erasers:";
    cin >> eraserQuantity;

    //Calculate the total price of pencils, sketch pads, and erasers
    double pencilTotal = pencilQuantity * pencilPrice;
    double sketchTotal = sketchQuantity * sketchPrice;
    double eraserTotal = eraserQuantity * eraserPrice;
    double total = pencilTotal + sketchTotal + eraserTotal;

    //Print out the receipt formatted nicely
    cout << fixed << setprecision(2);
    cout << right << setw(10) << "Item" << setw(25) << "Quantity" << setw(12) << "Unit Price" << setw(7) << "Total" << endl
         << left << setw(30) << "Graphite Pencil Sets" << setw(9) << pencilQuantity << setw(9) << pencilPrice << setw(8) << pencilTotal << endl
         << left << setw(30) << "Sketch Pads" << setw(9) << sketchQuantity << setw(8) << sketchPrice << setw(10) << sketchTotal << endl
         << left << setw(31) << "Packs of Erasers" << setw(9) << eraserQuantity << setw(9) << eraserPrice << setw(9) << eraserTotal << endl
         << right << setw (55) <<"========" << endl
         << right << setw(10) << "Total" << internal << setw(45) << total;

    return 0;
}