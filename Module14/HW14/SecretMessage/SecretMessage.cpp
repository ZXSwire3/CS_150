/* SecretMessage - Creates an array with a char in each element and manipulates it
 * Author: Ben Foltz
 * Module: 14
 * Project: Homework 14, project 1
 * Problem Statement: This program creates an array with a char in each element and manipulates it
 * Algorithm:
 * 1. Create prototypes for remove(), update(), showArray()
 * 2. Instantiate two string headings, char[] and count = sizeof(message) / sizeof (char)
 * 3. Print array
 *    Manipulate array
 *    Print array after edited
 * 4. remove()
 *      if (count == 0 || remove_index >= count)
 *          return count;
 *      loop through array from remove_index to count
 *          array[i] = array[i+1]
 *      array[count - 1] = '0'
 *      return count - 1;
 * 6. update()
 *      array[index] += amount
 * 7. showArray()
 *      print heading
 *      loop through array and print elements
 */
#include <iostream>
using namespace std;

int remove(char array[], int count, int remove_index);
void update(char array[], char amount, int index);
void showArray(string heading, char array[], int count);

int main()
{
    //Initialize headings
    string normal = "Normal:";
    string edited = "Edited:";
    //Initialize message
    char message[] = {'t', 'Q', 'b', ')', 'f', '+', '5'};
    //Initialize count
    int count = sizeof(message) / sizeof (char);

    //Print array
    showArray(normal, message, count);
    //remove element and update count
    count = remove(message, count, 3);
    //add amount to message at index
    update(message, -14, 1);
    //remove element and update count
    count = remove(message, count, 0);
    count = remove(message, count, 2);
    //add amount to message at index
    update(message, -55, 1);
    //remove element and update count
    count = remove(message, count, count - 1);
    //Print array
    showArray(edited, message, count);
}

int remove(char array[], int count, int remove_index)
{
    if (count == 0 || remove_index >= count)
    {
        return count;
    }

    //loop through array from remove_index to count
    for (int i = remove_index; i < count; i++)
    {
        //replace element at i with element at i+1
        array[i] = array[i+1];
    }
    //set last element of the array to 0
    array[count - 1] = '0';

    return count - 1;
}

void update(char array[], char amount, int index)
{
    //add amount to array at index
    array[index] += amount;
}

void showArray(string heading, char array[], int count)
{
    //print heading
    cout << heading << endl;
    //loop through array
    for (int i = 0; i < count; i++)
    {
        //print out element in array
        cout << array[i] << endl;
    }
    cout << endl;
}