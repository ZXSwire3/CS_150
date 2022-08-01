#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
        void checkDates(); //checks to see if the date is valid
        string monthString() const; //convert int month to string month
    public:
        //constructor
        Date(int month = 1, int day = 1, int year = 2000);
        //destructor
        ~Date();

        //getters
        int getMonth() const {
            return month;
        }

        int getDay() const {
            return day;
        }

        int getYear() const {
            return year;
        }

        //setters
        void setMonth(int month);
        void setDay(int day);
        void setYear(int year);

        //date formats
        void slashes() const; // 3/15/2019
        void comma(); // March 15, 2019
        void periods(); // 15.March.2019
        void yearPeriods(); // 2019.03.15
};


#endif //DATE_H
