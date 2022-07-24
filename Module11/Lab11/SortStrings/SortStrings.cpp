// sortStrings.cpp -
// Author: Ben Foltz, Alex Haskins, Alex Shaw

#include <iostream>
using namespace std;

void quit();
void getStrings (string &, string &, string &);
void sortStrings (string &, string &, string &);

int main()
{
    string first, second, third;

    while (true)
    {
        getStrings(first,second,third);
        sortStrings(first, second, third);

        string sorted = first + ", " + second + ", " + third;
        cout << sorted << endl << endl;
    }
}

void quit()
{
    cout << "Exiting program...";
    exit(0);
}

void getStrings (string &first, string &second, string &third)
{
    cout << "Enter the first string: ";
    getline(cin, first);
    if (first == "quit") {
        quit();
    }

    cout << "Enter the second string: ";
    getline(cin, second);
    if (second == "quit") {
        quit();
    }

    cout << "Enter the third string: ";
    getline(cin, third);
    if (third == "quit") {
        quit();
    }
}

void sortStrings(string &low, string &mid, string &high)
{
    string temp;
    if (low <= mid && mid <= high) // 1 2 3
    {
        // do nothing
    }
    else if (low <= high && high <= mid) // 1 3 2
    {
        temp = mid;
        mid = high;
        high = temp;
    }
    else if (mid <= low && low <= high) // 2 1 3
    {
        temp = low;
        low = mid;
        mid = temp;
    }
    else if (mid <= high && high <= low) // 2 3 1
    {
        temp = low;
        low = mid;
        mid = temp;
        temp = high;
        high = mid;
        mid = temp;
    }
    else if (high <= low & low <= mid) // 3 1 2
    {
        temp = low;
        low = high;
        high = mid;
        mid = temp;
    }
    else // 3 2 1
    {
        temp = low;
        low = high;
        high = temp;
    }
}