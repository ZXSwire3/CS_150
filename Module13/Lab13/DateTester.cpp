/* DateTester - Creates 6 date objects and prints them in different formats
 * Author: Ben Foltz, Alex Haskins, Alex Shaw
 */
#include "Date.h"

#include <iostream>

using namespace std;

int main() {
    Date one(1, 5, 2022);
    one.slashes();
    one.comma();
    one.periods();
    one.yearPeriods();
    cout << endl;

    Date two(9, 14, 1970);
    two.slashes();
    two.comma();
    two.periods();
    two.yearPeriods();
    cout << endl;

    Date three(12, 31, 2023);
    three.slashes();
    three.comma();
    three.periods();
    three.yearPeriods();
    cout << endl;

    Date four(4, 31, 2022);
    four.slashes();
    cout << endl;

    Date five(13, 1, 2022);
    five.slashes();
    cout << endl;

    Date six(8, 15, 2100);
    six.slashes();
    cout << endl;
}