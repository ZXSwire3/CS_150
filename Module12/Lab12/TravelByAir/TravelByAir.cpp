// Plane.cpp - describes a passenger plane's properties and allows the plane to
// fly, land, and board and disembark (deplane) passengers. Author: Ben Foltz,
// Alex Haskins, Alex Shaw

#include <iostream>
using namespace std;

class Plane {
private:
    bool inflight;           // whether the plane is flying
    unsigned int passengers; // how many passengers are on the plane
    unsigned int capacity;   // maximum number of passengers
    string description;      // operator and model name of the plane

public:
    // constructor
//    Plane();
    Plane(unsigned int capacity = 10, string description = "(none)");

    // getters
    bool isInflight() const { return inflight; }

    unsigned int getPassengers() const { return passengers; }

    unsigned int getCapacity() const { return capacity; }

    string getDescription() const { return description; }

    // setters
    void setPassengers(unsigned int passengers) { Plane::passengers = passengers; }

    void setCapacity(unsigned int capacity) { Plane::capacity = capacity; }

    void setDescription(const string &description) {
        Plane::description = description;
    }

    void fly();

    void land();

    void board(unsigned int);

    void disembark(unsigned int);

    void show();
};

Plane::Plane(unsigned int capacity, string description)
{
    Plane::inflight = false;
    Plane::passengers = 0;
    Plane::setCapacity(capacity);
    Plane::setDescription(description);
}

void Plane::fly()
{
    if (isInflight())
    {
        cout << "Cannot take off, the plane is already in flight!" << endl;
    }
    else
    {
        Plane::inflight = true;
    }
}

void Plane::land()
{
    if (!isInflight())
    {
        cout << "Cannot land, the plane is not in flight!" << endl;
    }
    else
    {
        Plane::inflight = false;
    }
}

void Plane::board(unsigned int newPassengers) {
    if (isInflight())
    {
        cout << "Cannot board, plane is currently in flight!" << endl;
    }
    else
    {
        if (getPassengers() + newPassengers < getCapacity())
        {
            Plane::passengers = getPassengers() + newPassengers;
        }
        else
        {
            cout << "Cannot board passengers, plane is at maximum capacity!" << endl;
            Plane::passengers = getCapacity();
        }
    }
}

void Plane::disembark(unsigned int updatePass)
{
    // checks if flight is flying
    if (inflight)
    {
        cout << "Cannot disembark passengers, plane is in flight!" << endl;
    }
        // if updatePass is greater than the passengers then set the passengers count
        // to 0
    else if (passengers < updatePass)
    {
        passengers = 0;
    }
        // else subtract the updatePass from passengers
    else
    {
        passengers = passengers - updatePass;
    }
}

void Plane::show()
{
    string flight;
    if (isInflight())
    {
        flight = "in flight";
    }
    else
    {
        flight = "landed";
    }
    cout << "The " << getDescription() << " (cap. " << getCapacity() << "), is "
         << flight << " with " << getPassengers() << " passengers." << endl;
}

int main() {
    //:- First plane
    // creates plane object with cpacity and name
    Plane united(285, "United 737");

    // Adds number of passengers
    united.board(20);
    united.board(100);
    united.board(131);

    // is now in flight
    united.fly();

    // Get status of the plane while in flight
    cout << "\nThe status of the first plane, ";
    united.show();

    // lands the plane
    united.land();
    // empties out passengers
    united.disembark(9999);

    // display status of plane after landing and empting out
    cout << "\nAfter landing and disembarking, the status of the plane, ";
    united.show();

    cout << endl << endl;

    //:- Second plane
    // Create second plane
    Plane test;
    // Show status
    test.show();
    // Set description
    test.setDescription("Southwest 737");
    // Set capacity
    test.setCapacity(185);
    // Show status
    test.show();
    // Attempt to land (throws error)
    test.land();
    // Attempt to board an unsually large number of passengers (throws error)
    test.board(9999);
    // Disembark to bring below capacity threshold
    test.disembark(1);
    // Lift off
    test.fly();
    // Attempt to board passenger (throws error)
    test.board(1);
    // Attempt to disembark passenger (throws error)
    test.disembark(1);
    // Land plane
    test.land();
    // Land plane again (throws error)
    test.land();
    // Get number of passengers
    cout << "The number of passengers is " << test.getPassengers()
         << "." << endl;
    // Disembark passengers
    test.disembark(184);
    // Show status
    test.show();
}