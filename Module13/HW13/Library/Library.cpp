/* Library - Creates 4 book objects and displays their information formatted nicely
 * Author: Ben Foltz
 * Module: 13
 * Project: Homework 13, project 1
 * Problem Statement: This program creates 4 book objects, 2 by inputting the data when creating them and 2 by using the
 *                    objects setters
 * Algorithm:
 * 1. Instantiate 2 book objects by passing arguments
 * 2. Instantiate 2 book objects with no arguments
 * 3. Use setters to add title, author, pages and cost to the two books
 * 4. Instantiate totalPages = one.getPages() + two.getPages() + three.getPages() + four.getPages()
 * 5. Instantiate totalCost = one.getCost() + two.getCost() + three.getCost() + four.getCost()
 * 6. Print Heading of print statement
 * 7. create print(const Book& book)
 *      print out the book info
 * 9. Print total pages and cost
 */
#include "Book.h"

#include <iostream>
#include <iomanip>

using namespace std;

void print(const Book&);

int main() {
    Book one("Gone With The Wild", "Mitchell Margaret" , 1532, 45.91);
    Book two("Harry Potter In Hawaii", "J. K. Roller", 811, 19.24);
    Book three;
    Book four;

    //book three setters
    three.setTitle("Miserable");
    three.setAuthor("Stephen Kong");
    three.setPages(1047);
    three.setCost(37.25);

    //book four setters
    four.setTitle("Huckleberry Funn");
    four.setAuthor("Mark Twang");
    four.setPages(370);
    four.setCost(14.71);

    int totalPages = one.getPages() + two.getPages() + three.getPages() + four.getPages();
    double totalCost = one.getCost() + two.getCost() + three.getCost() + four.getCost();

    cout << fixed << setprecision(2);
    cout << right << setw(15) << "Title" << left << setw(16) << "" << "Author" << setw(10) << "" << "Pages" << setw(5) << "" << "Cost" << endl
         << left << setw(25) << "-----------------------" << setw(21) << "-------------------" << setw(9) << "-------" << setw(10) << "--------" << endl;
    print(one);
    print(two);
    print(three);
    print(four);
    cout << right << setw(53) << "========" << setw(2) << "" << "========" << endl
         << right << setw(35) << "TOTAL" << right << setw(18) << totalPages << right << setw(4) << "$" << totalCost;
}

void print(const Book& book) {
    cout << fixed << setprecision(2);
    cout << left << setw(25) << book.getTitle() << setw(21) << book.getAuthor() << right << setw(7) << book.getPages() << right << setw(5)  << "$" << book.getCost() << endl;
}