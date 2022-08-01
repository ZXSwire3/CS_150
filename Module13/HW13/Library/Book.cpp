/* Book.cpp - Defines all functions for the Book class
 * Author: Ben Foltz
 * Module: 13
 * Project: Homework 13, project 1
 * Description: Implementation of functions for Book class
 *
 *   Constructor sets title and author to "" and pages and cost to 0
 *
 *   Constructor takes the book title, author, pages, and cost
 *
 *   Getters and setters
 */
#include "Book.h"
using namespace std;

//Constructor with no parameters
Book::Book() {
    setTitle("");
    setAuthor("");
    setPages(0);
    setCost(0);
}

//Constructor with parameters
Book::Book(string title, string author, int pages, double cost) {
setTitle(title);
setAuthor(author);
setPages(pages);
setCost(cost);
}

//getters
string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getPages() const {
    return pages;
}

double Book::getCost() const {
    return cost;
}

//setters
void Book::setTitle(const string &title) {
    Book::title = title;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

void Book::setPages(int pages) {
    Book::pages = pages;
}

void Book::setCost(double cost) {
    Book::cost = cost;
}

