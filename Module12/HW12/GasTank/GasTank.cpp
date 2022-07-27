/* GasTank - Creates a new class GasTank with a specific capacity and gas level
 * Author: Ben Foltz
 * Module: 12
 * Project: Homework 12, project 1
 * Problem Statement: This program creates a new class GasTank with a specific capacity and gas level
 * Algorithm:
 * 1. Instantiate DEFAULT_CAPACITY = 30.0 and MINIMUM_CAPACITY = 4.0
 * 2. Create GasTank class
 * 3. Instantiate private variables capacity and level
 * 4. Create constructor for GasTank with default arguments that are level = 0 and capacity = DEFAULT_CAPACITY
 *    when setting the data, cout << "The level is " << getLevel() << endl << "The capacity is " << getCapacity() << endl
 * 5. Create prototypes for getters and setters
 * 6. Create prototypes for calcFill() and showInfo()
 * 7. Define getters outside GasTank class
 * 8. setCapacity(double newCapacity)
 *      if (newCapacity < MINIMUM_CAPACITY)
 *          capacity = MINIMUM_CAPACITY
 *      else
 *          capacity = newCapacity
 * 9. setLevel(double newLevel)
 *      if (newLevel <= 0)
 *          level = 0
 *      else if (newLevel > getCapacity())
 *          level = getCapacity()
 *      else
 *          GasTank::level = newLevel
 * 10. calcFill()
 *      return getLevel() / getCapacity()
 * 11. showInfo()
 *      cout << "Gas Tank Level: " << (calcFill() * 100) << "%"
 * 12. main()
 *      Instantiate 6 different GasTank objects
 * 13. Each object has a different value
 * 14. showInfo() on each of the objects
 */

#include <iostream>
#include <iomanip>

using namespace std;

//constants
const double DEFAULT_CAPACITY = 30.0;
const double MINIMUM_CAPACITY = 4.0;

class GasTank
        {
private:
    double capacity; //maximum amount of gas that the tank can hold
    double level; //current amount of gas that the tank has
public:
    //constructor with default arguments
    GasTank(double level = 0, double capacity = DEFAULT_CAPACITY)
    {
        cout << "The level is " << level << endl
             << "The capacity is " << capacity << endl;
        setCapacity(capacity);
        setLevel(level);
    }

    //destructor
    ~GasTank() {}

    //getter prototypes
    double getCapacity() const;

    double getLevel() const;

    //setter prototypes
    void setCapacity(double newCapacity);

    void setLevel(double newLevel);

    //other function prototypes
    double calcFill() const;

    void showInfo() const;

};

//getter definitions
double GasTank::getCapacity() const
{
    return GasTank::capacity;
}

double GasTank::getLevel() const
{
    return GasTank::level;
}

//setter definitions
void GasTank::setCapacity(double newCapacity)
{
    if (newCapacity < MINIMUM_CAPACITY) //don't allow capacity less than MINIMUM_CAPACITY
    {
        GasTank::capacity = MINIMUM_CAPACITY;
    } else {
        GasTank::capacity = newCapacity;
    }
}

void GasTank::setLevel(double newLevel)
{
    if (newLevel <= 0) //don't allow level less than 0
    {
         GasTank::level = 0;
    }
    else if (newLevel > getCapacity()) //don't allow level greater than capacity
    {
        GasTank::level = getCapacity();
    }
    else
    {
        GasTank::level = newLevel;
    }
}

//calculate how full a GasTank is
double GasTank::calcFill() const {
    return getLevel() / getCapacity();
}

//Print out how much gas a GasTank has
void GasTank::showInfo() const {
    cout << fixed << setprecision(0);
    cout << "Gas Tank Level: " << getLevel() << endl
         << "Capacity: " << getCapacity() << endl
         << "Fill Percentage: " << (calcFill() * 100) << "%" << endl << endl;
}

int main() {
    //Instantiate GasTanks and use showInfo() on each one
    GasTank one;
    one.showInfo();
    GasTank two(13.5, 30);
    two.showInfo();
    GasTank three(0, 58);
    three.showInfo();
    GasTank four(18.6, 45.2);
    four.showInfo();

    cout << "Error checking gas tanks: " << endl;
    GasTank five(-9,-40);
    five.showInfo();
    GasTank six(40, 30);
    six.showInfo();
}