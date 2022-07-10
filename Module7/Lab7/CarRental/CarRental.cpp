// CarRental.cpp - Prompts the user for different car options and amount of days and calculates the cost of said options.
// Author: Ben Foltz
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    //const variables for the prices
    const double ECONOMY_DAILY = 25.50;
    const double ECONOMY_WEEKLY = 120.50;
    const double FULL_DAILY = 37.40;
    const double FULL_WEEKLY = 216.85;

    string carSize;
    string carColor;
    int numberOfDays;
    int numberOfWeeks;
    int inputDays;

    double dailyPrice;
    double weeklyPrice;

    double weeksAndDaysPrice;
    double weeksPrice;

    double bestPrice;

    bool isWeeklyPrice = false;

    //Prompt user for car size
    cout << "Enter desired car size (full or economy): ";
    cin >> carSize;

    //make the input from carSize lowercase
    transform(carSize.begin(), carSize.end(), carSize.begin(), ::tolower);

    //check the first letter of carSize and see if it's an e or f
    switch (carSize[0])
    {
        case 'e' :
            weeklyPrice = ECONOMY_WEEKLY;
            dailyPrice = ECONOMY_DAILY;
            break;
        case 'f':
            weeklyPrice = FULL_WEEKLY;
            dailyPrice = FULL_DAILY;
            break;
        default:
            cout << "Invalid car size" << endl
                 << "Please enter valid size (full or economy)";
            break;
    }

    //Prompt the user for car color
    cout << "Enter the desired color of the car (black or white): ";
    cin >> carColor;

    //make the input from carColor lowercase
    transform(carColor.begin(), carColor.end(), carColor.begin(), ::tolower);

    //if the color is not "black" or "white" then print out error and end program
    if (!equal(carColor.begin(), carColor.end(), "black") || equal(carColor.begin(), carColor.end(), "white"))
    {
        cout << "Invalid car color" << endl
             << "Please enter valid color (black or white)";
        return 0;
    }

    //Prompt user for the days they want to rent the car
    cout << "Enter the desired number of days to rent the vehicle: ";
    cin >> numberOfDays;

    //if number of days is less than or equal to 0 then print error
    if (numberOfDays <= 0)
    {
        cout << "Invalid number of days" << endl
             << "Please enter a valid number of days";
        return 0;
    }

    //for the output
    inputDays = numberOfDays;

    //if they are renting for 7 or more days
    if (numberOfDays >= 7)
    {
        //weekly rate
        isWeeklyPrice = true;
        numberOfWeeks = numberOfDays / 7;
        numberOfDays = numberOfDays % 7;
    }

    //if weekly price then calculate the two quotes and find the best price
    if (isWeeklyPrice)
    {
        weeksAndDaysPrice = numberOfWeeks * weeklyPrice + numberOfDays * dailyPrice;
        weeksPrice = (numberOfWeeks + 1) * weeklyPrice;

        if (weeksPrice > weeksAndDaysPrice)
        {
            bestPrice = weeksAndDaysPrice;
        } else if (weeksPrice < weeksAndDaysPrice)
        {
            bestPrice = weeksPrice;
        }
    }
    else
    {
        bestPrice = numberOfDays * dailyPrice;
    }

    //set doubles to have two decimal places
    cout << fixed << setprecision(2) << endl;
    //print out the quote
    cout << "Quote for a " << carColor << " " << carSize << " car for " << inputDays << " days:" << endl
         << "Your best rate is $" << bestPrice;

    return 0;
}