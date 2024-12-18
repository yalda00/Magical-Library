#ifndef THELIBRARYCLASS_HPP
#define THELIBRARYCLASS_HPP

#include "TheBookClass.hpp"
#include <vector>

using namespace std;

class library {
private:
    vector<book> books;

public:
    // default constructor
    library();
    // parametric constructor
    library(vector<book> book_list);

    // function to print books
    void print() const;

    // adds a new book to the library
    bool insert_book(const string& title, const string& author, const string& date_of_publication);
    bool insert_book(const book& b);

    // removes a book by title, author, and publication date from the library
    bool remove_book(const string& title, const string& author, const string& date_of_publication);
    bool remove_book(const book& b);
};

#endif