//reverseElements.cpp - Reverse the contents of an array.
// Author: Ben Foltz, Alex Haskins, Alex Shaw

#include <iostream>
using namespace std;

void fillRandom(int array[], int size, int min, int max);
void reverseElements(int array[], int size);
void printArrayAndTotal(string heading, int array[], int size);
int main()
{
    string normal = "Normal Array:";
    string reversed = "Reversed Array:";
    int input;
    while (true) {

        cout << "Enter a number between 10 and 20: ";
        cin >> input;

        while (input < 10 || input > 20) {
            cout << "Invalid input!" << endl
                 << "Enter a number between 10 and 20: ";
            cin >> input;
            if (input == 0) {
                exit(EXIT_SUCCESS);
            }
        }

        int array[input];
        cout << endl;
        fillRandom(array, input, 100, 200);
        printArrayAndTotal(normal, array, input);
        reverseElements(array, input);
        printArrayAndTotal(reversed, array, input);
    }
}

void fillRandom(int array[], int size, int min, int max) {
    unsigned int seed = time(nullptr);
    srand(seed);
    for (int i = 0; i < size; i++) {
        array[i] = (rand() % (max - min + 1)) + min;
    }
}
void reverseElements(int array[], int size) {
    int reverse[size];
    int j = 0;
    for (int i = size - 1; i >= 0;) {
        reverse[j++] = array[i--];
    }

    //write reverse to array
    for (int i = 0; i < size; i++) {
        array[i] = reverse[i];
    }
}

void printArrayAndTotal(string heading, int array[], int size){
    cout << heading << endl;
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
        cout << array[i] << endl;

    }

    cout << "Total: " << total << endl << endl;
}