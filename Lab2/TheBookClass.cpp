#include <iostream>
#include "TheBookClass.hpp"
#include <string>

using namespace std;

    // default constructor
    book::book() : title("n/a"), author("n/a"), date_of_publication("n/a") {}

    // only title and author provided
    book::book(const string& book_title, const string& book_author)
    : title(book_title), author(book_author), date_of_publication("n/a") {}

    // only title is provided
    book::book(const string& book_title)
    : title(book_title), author("n/a"), date_of_publication("n/a") {}

    // title, author, and date provided
    book::book(const string& book_title, const string& book_author, const string& date_published)
    : title(book_title), author(book_author), date_of_publication(date_published) {}

    // outputs all books in the library
    void book::print() const {
    cout << "Title: " << title
         << " | Author: " << author
         << " | Date of Publication: " << date_of_publication
         << endl;
    }

    // getter functions - to access attributes in private area
    string book::get_Title() const {
    return title; 
    }
    string book::get_Author() const {
    return author;
    }
    string book::get_date_of_publication() const {
    return date_of_publication;
    }