/* TakeTheTrain - Find the best type of ticket to purchase depending on many trips are required to be taken.
 * Author: Ben Foltz
 * Module: 7
 * Project: Homework 7, project 2
 * Problem Statement: This program prompts the user to input how many trips they will be taking in a month and then
 *                    finds the best types of tickets to buy.
 * Algorithm:
 * 1. Instantiate constant variables for the 4 types of ticket prices, the input trips, the total price of single tickets,
 *    the total price of ten packs, optimal purchase, the amount of ten trips, the leftover amount of trips.
 * 2. Prompt user for how many trips they would like to take
 * 3. if there are less than ten trips then set tenTrips = 1 and leftOverTrips = 0
 * 4. if the inputTrips > 20 or inputTrips < 1 then print error
 * 5. Calculate the price of the trips with the different ticket types
 * 6. Print out the different prices for the ticket types
 * 6. Find the best price by comparing the different prices and printing out which one would be the best price
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

    int inputTrips;

    double singleTickets;
    double tenPack;

    double optimalPurchase;

    cout << "Enter how many trips you would like to make: ";
    cin >> inputTrips;

    int tenTrips = inputTrips / 10;
    int leftOverTrips = inputTrips % 10;

    switch (inputTrips < 10) {
        case (true):
            tenTrips = 1;
            leftOverTrips = 0;
    }

    switch (inputTrips > 20 || inputTrips < 1) {
        case (true) :
            cout << "Invalid number of trips"
                 << "Enter a valid number of trips (1-20)";
            return 0;
    }

    singleTickets = inputTrips * SINGLE_TICKET_PRICE;
    tenPack = (tenTrips * TEN_TICKETS_PRICE) + (leftOverTrips * SINGLE_PLUS_TEN_TICKETS);

    cout << fixed << setprecision(2);
    cout << inputTrips << " single tickets would cost " << inputTrips << " x $" << SINGLE_TICKET_PRICE << " = $" << singleTickets << " total" << endl
         << tenTrips << " 10-pack would cover " << tenTrips * 10 << " trips, so " << leftOverTrips << " additional tickets would be needed."
         << " Total cost would be " << tenTrips << " x $" << TEN_TICKETS_PRICE << " + " << leftOverTrips << " x $" << SINGLE_PLUS_TEN_TICKETS
         << " = $" << tenPack << " total" << endl
         << "1 monthly pass would cost $" << MONTHLY_PASS << " total";
    cout << endl << endl;

    if (singleTickets < tenPack && singleTickets < MONTHLY_PASS) {
        optimalPurchase = singleTickets;
        cout << "The best purchase strategy is to buy " << inputTrips << " single tickets for $" << optimalPurchase;
    } else if (tenPack < MONTHLY_PASS) {
        optimalPurchase = tenPack;
        cout << "The best purchase strategy is to buy " << tenTrips << " 10 packs and " << leftOverTrips << " additional tickets for $" << optimalPurchase;
    } else if (MONTHLY_PASS < singleTickets && MONTHLY_PASS < tenPack) {
        cout << "The best purchase strategy is to buy 1 monthly pass for $" << MONTHLY_PASS;
    }

    return 0;
}