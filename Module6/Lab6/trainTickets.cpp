// trainTickets.cpp - present the user with menus of options to purchase tickets for a train trip, determine how many tickets they want to purchase, and present a purchase summary and total cost to the user.
// Author: Ben Foltz, Alex Haskins, Alex Shaw
#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
    //Const variables for destination names
    const string LA = "Los Angeles" ;
    const string SANTA_MARIA = "Sanata Maria" ;
    const string SAN_FRAN = "San Francisco" ;

    //const variables for type of passenger
    const string CHILD = "Child" ;
    const string ADULT = "Adult" ;
    const string SENIOR = "Senior" ;

    //Variables for price per type of passenger
    double childFare = 0.0 ;
    double adultFare = 0.0 ;
    double seniorFare = 0.0 ;

    //area for destination screen (step 2)
    cout << "**** CHOOSE A DESTINATION ****" << endl
         << endl
         << left << setw(7) << "" << "1 - " << LA << endl
         << left << setw(7) << "" << "2 - " << SANTA_MARIA << endl
         << left << setw(7) << "" << "3 - " << SAN_FRAN << endl
         << "Enter your destination (1-3): " ;


    //variables and storage of user input for destination
    string destination ;
    int cityNum ;
    cin >> cityNum ;

    //Checks conditions from user input and runs code according to corresponding number.
    if(cityNum == 1){
        destination = LA ;
        childFare = 25 ;
        adultFare = 41 ;
        seniorFare = 28 ;
    } else if (cityNum == 2){
        destination = SANTA_MARIA ;
        childFare = 36 ;
        adultFare = 58 ;
        seniorFare = 42 ;
    } else if (cityNum == 3){
        destination = SAN_FRAN ;
        childFare = 45 ;
        adultFare = 86 ;
        seniorFare = 61 ;
    } else {
        cout << "That is not a valid destination. Please try again." << endl ;
        exit(1) ;
    }

    //area for ticket type menu (step 3)
    cout << endl
         << "Fares to " << destination << " are:" << endl
         << endl
         << left << setw(7) << "" << "1 - " << CHILD << " ($" << (int) childFare << ")" << endl
         << left << setw(7) << "" << "2 - " << ADULT << " ($" << (int) adultFare << ")" << endl
         << left << setw(7) << "" << "3 - " << SENIOR << " ($" << (int) seniorFare << ")" << endl
         << "Enter your ticket type (1-3): " ;

    //Variables and storage of user input for fare type
    string fareType ;
    int fareNum ;
    cin >> fareNum ;

    double farePrice ;
    //Checks conditions from user input and runs code according to corresponding number. Assigns string of type of passenger
    if(fareNum == 1){
        fareType = CHILD ;
        farePrice = childFare ;
    } else if (fareNum == 2){
        fareType = ADULT ;
        farePrice = adultFare ;
    } else if (fareNum == 3){
        fareType = SENIOR ;
        farePrice = seniorFare ;
    } else {
        cout << "That is not a valid fare type. Please try again." << endl ;
        exit(2) ;
    }

    //prompt user number of tickets (step 4)
    cout << endl
         << "Enter how many " << fareType << " tickets you would like to purchase (1-10): " ;

    // Intilazation and assignment of the amount of tickets from user input
    int numOfTickets ;
    cin >> numOfTickets ;

    double total = numOfTickets * farePrice;

    if(numOfTickets > 0 && numOfTickets < 10){
        cout << endl
             << "The total for " << numOfTickets << " " << fareType << " tickets to " << destination << " is $" << total ;
    } else if (numOfTickets == 0){
        exit(0) ;
    } else {
        cout << "That is not a valid number of tickets. Please try again." << endl ;
        exit(3) ;
    }

    return 0;
}