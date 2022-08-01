/* Book.h - Header file for a book in a library
 * Author: Ben Foltz
 * Module: 13
 * Project: Homework 13, project 1
 * Description: Header file for Book class (data members, function headings)
 *
 *     Data Member (instance) variables
 *         (string) name of the title
 *         (string) name of the author
 *         (int) number of pages in the book
 *         (double) price of the book
 *
 *    Functions
 *       constructor()
 *       constructor(string, string, int, double)
 *       destructor
 *       all getters and setters
 */

#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <iomanip>

using namespace std;

class Book {
    private:
        string title; //title of the book
        string author; //author of the book
        int pages{}; //number of pages in the book
        double cost{}; //price of the book
    public:
        //constructors
        Book();
        Book(string, string, int, double);
        //destructor
        ~Book() {}

        //getters
        string getTitle() const;
        string getAuthor() const;
        int getPages() const;
        double getCost() const;
        //setters
        void setTitle(const string &);
        void setAuthor(const string &);
        void setPages(int);
        void setCost(double);
};
#endif //BOOK_H
