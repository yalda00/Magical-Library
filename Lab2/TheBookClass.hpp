#ifndef THEBOOKCLASS_HPP
#define THEBOOKCLASS_HPP

#include <string>
using namespace std;

class book {
private:
    string title, author, date_of_publication;

public:
    // default constructor
    book();

    // only title and author provided
    book(const string& book_title, const string& book_author);

    // only title provided
    book(const string& book_title);

    // title, author, and date provided
    book(const string& book_title, const string& book_author, const string& date_published);

    // outputs all books in the library
    void print() const;

    // getter functions - to access private attributes
    string get_Title() const;
    string get_Author() const;
    string get_date_of_publication() const;

    // checks whether the book is already in the library 
    bool check_book(const book& b) const {
    return title == b.title && author == b.author && date_of_publication == b.date_of_publication;
    }
};

#endif
