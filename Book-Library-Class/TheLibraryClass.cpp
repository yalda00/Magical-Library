#include "TheLibraryClass.hpp"
#include "TheBookClass.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    // default constructor
    library::library() {}

    // parametric constructor
    library::library(vector<book> book_list) : books(book_list) {}

    // outputs all books in the library
    void library::print() const {
    for (int i = 0; i < books.size(); i++) {
        cout << "Book " << i + 1 << ": ";
        books[i].print();  
    }
    }

    // insert a book by title, author, and date of publication to the library
    bool library::insert_book(const string& title, const string& author, const string& date_of_publication) {
    book new_book(title, author, date_of_publication);
    return insert_book(new_book);
    }

    // check if it exists by comparing title, author, and publication date
    bool library::insert_book(const book& b) {
    for (const book& existing_book : books) {
        if (existing_book.get_Title() == b.get_Title() &&
            existing_book.get_Author() == b.get_Author() &&
            existing_book.get_date_of_publication() == b.get_date_of_publication()) {
            return false; // if it already exists, don't put it
        }
    }
        // add new book if it doesn't exist
        books.push_back(b);
        return true;
    }   
   
   // remove a book by title, author, and date of publication
    bool library::remove_book(const string& title, const string& author, const string& date_of_publication) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].get_Title() == title && 
            books[i].get_Author() == author && 
            books[i].get_date_of_publication() == date_of_publication) {
            books.erase(books.begin() + i); // remove the book
            return true; 
        }
    }
    return false; // no matching book found
    }

    // remove a book
    bool library::remove_book(const book& b) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].get_Title() == b.get_Title() && 
            books[i].get_Author() == b.get_Author() && 
            books[i].get_date_of_publication() == b.get_date_of_publication()) {
            books.erase(books.begin() + i); // remove the book
            return true; 
        }
    }
    return false; // no matching book found
    }

    