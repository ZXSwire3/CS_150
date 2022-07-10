/* GeometricFigure - Prompts the user for what shape they would like to find the area of.
 * Author: Ben Foltz
 * Module: 5
 * Project: Homework 7, project 1
 * Problem Statement: This program prompts the user to select one of the options to calculate the area of a circle,
 *                    rectangle, or triangle.
 * Algorithm:
 * 1. Instantiate variables radius, circleArea, length, width, rectangleArea, base, height, and triangleArea.
 * 2. Print out menu. C - Calculate the area of a Circle
 *                    R - Calculate the area of a Rectangle
 *                    T - Calculate the area of a Triangle
 *                    Q - Quit
 * 3. Prompt user for input
 * 4. Switch on the first letter of the input from the user
 * 5. Prompt user for the input depending on the choice given.
 * 6. Calculate results from the numbers that the user input to calculate the area
 */
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    const double SINGLE_TICKET_PRICE = 5.40;
    const double TEN_TICKETS_PRICE = 36.50;
    const double SINGLE_PLUS_TEN_TICKETS = 4.25;
    const double MONTHLY_PASS = 61.85;

    int inputDays;

    double singleTickets;
    double tenPack;

    double optimalPurchase;

    cout << "Enter how many trips you would like to make: ";
    cin >> inputDays;

    int tenDays = inputDays / 10;
    int leftOverDays = inputDays % 10;

    switch (inputDays < 10) {
        case (true):
            tenDays = 1;
            leftOverDays = 0;
    }

    switch (inputDays > 20 || inputDays < 1) {
        case (true) :
            cout << "Invalid number of trips"
                 << "Enter a valid number of trips (1-20)";
            return 0;
    }

    singleTickets = inputDays * SINGLE_TICKET_PRICE;
    tenPack = (tenDays * TEN_TICKETS_PRICE) + (leftOverDays * SINGLE_PLUS_TEN_TICKETS);

    cout << fixed << setprecision(2);
    cout << inputDays << " single tickets would cost " << inputDays << " x $" << SINGLE_TICKET_PRICE << " = $" << singleTickets << " total" << endl
         << tenDays << " 10-pack would cover " << tenDays * 10 << " trips, so " << leftOverDays << " additional tickets would be needed."
         << " Total cost would be " << tenDays << " x $" << TEN_TICKETS_PRICE << " + " << leftOverDays << " x $" << SINGLE_PLUS_TEN_TICKETS
         << " = $" << tenPack << " total" << endl
         << "1 monthly pass would cost $" << MONTHLY_PASS << " total";
    cout << endl << endl;
    if (singleTickets < tenPack && singleTickets < MONTHLY_PASS) {
        optimalPurchase = singleTickets;
        cout << "The best purchase strategy is to buy " << inputDays << " single tickets for $" << optimalPurchase;
    } else if (tenPack < MONTHLY_PASS) {
        optimalPurchase = tenPack;
        cout << "The best purchase strategy is to buy " << tenDays << " 10 packs and " << leftOverDays << " additional tickets for $" << optimalPurchase;
    } else if (MONTHLY_PASS < singleTickets && MONTHLY_PASS < tenPack) {
        cout << "The best purchase strategy is to buy 1 monthly pass for $" << MONTHLY_PASS;
    }

    return 0;
}