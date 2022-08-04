#include <iostream>
#include <iomanip>

using namespace std;

#include "Date.h"

//constructor
Date::Date(int month, int day, int year) {
    cout << "The date entered is " << month << "/" << day << "/" << year << endl;
    Date::month = month;
    Date::day = day;
    Date::year = year;
    checkDates();
}

//destructor
Date::~Date() {

}

//setters
void Date::setMonth(int month) {
    Date::month = month;
    checkDates();
}

void Date::setDay(int day) {
    Date::day = day;
    checkDates();
}

void Date::setYear(int year) {
    Date::year = year;
    checkDates();
}

//checks to see if the date is valid
void Date::checkDates() {

    //check if any individual value is greater or less than expected
    if (!(getMonth() >= 1 && getMonth() <= 12) || !(getDay() >= 1 && getDay() <= 31) || !(getYear() >= 1900 && getYear() <= 2099)) {
        Date::month = 1;
        Date::day = 1;
        Date::year = 2000;
        cout << "Invalid date!" << endl
             << "Changing date to default date..." << endl;
    }

    //checks to make sure that the number of days in a specific month is not more than it should be
    switch (getMonth()) {
        //31 days
        case 1: //January
        case 3: //March
        case 5: //May
        case 7: //July
        case 8: //August
        case 10: //October
        case 12: //December
            if (getDay() > 31) {
                Date::month = 1;
                Date::day = 1;
                Date::year = 2000;
                cout << "Invalid date!" << endl
                     << "Changing date to default date..." << endl;
            }
            break;
            //30 days
        case 4: //April
        case 6: //June
        case 9: //September
        case 11: // November
            if (getDay() > 30) {
                Date::month = 1;
                Date::day = 1;
                Date::year = 2000;
                cout << "Invalid date!" << endl
                     << "Changing date to default date..." << endl;
            }
            break;
            //29 days
        case 2: //February
            if (getDay() > 29) {
                Date::month = 1;
                Date::day = 1;
                Date::year = 2000;
                cout << "Invalid date!" << endl
                     << "Changing date to default date..." << endl;
            }
            break;
        default:
            Date::month = 1;
            Date::day = 1;
            Date::year = 2000;
            cout << "Invalid date!" << endl
                 << "Changing date to default date..." << endl;
            break;
    }
}

//date formats
void Date::slashes() const {
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}

void Date::comma() {
    cout << monthString() << " " << getDay() << ", " << getYear() << endl;
}

void Date::periods() {
    cout << getDay() << "." << monthString() << "." << getYear() << endl;
}

void Date::yearPeriods() {
    cout << getYear() << "." << setfill('0') << setw(2) << getMonth() << "." << setfill('0') << setw(2) << getDay() << endl;
}

//convert int month to string month
string Date::monthString() const {
    string monthInStringForm;
    switch (getMonth()) {
        case 1: monthInStringForm = "January"; break;
        case 2: monthInStringForm = "February"; break;
        case 3: monthInStringForm = "March"; break;
        case 4: monthInStringForm = "April"; break;
        case 5: monthInStringForm = "May"; break;
        case 6: monthInStringForm = "June"; break;
        case 7: monthInStringForm = "July"; break;
        case 8: monthInStringForm = "August"; break;
        case 9: monthInStringForm = "September"; break;
        case 10: monthInStringForm = "October"; break;
        case 11: monthInStringForm = "November"; break;
        case 12: monthInStringForm = "December"; break;
    }
    return monthInStringForm;
}

