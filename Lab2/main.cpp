#include <iostream>
#include "TheLibraryClass.hpp"
#include "TheBookClass.hpp"

using namespace std;

int main() {
    library lib;

    // book declarations
    book book1("It Ends With Us", "Colleen Hoover", "07/20/2018");
    book book2("Fall Boys", "Penelope Douglas", "11/08/2021");
    book book3("The Hunger Games", "Suzanne Collins", "02/14/2005");

    lib.insert_book(book1);
    lib.insert_book(book2);
    lib.insert_book(book3);

    cout << "Library Books:" << endl;
    lib.print();

    // inserting new book by details
    cout << "\nAdding a 'Dork Diaries' to the library...\n" << endl;
    bool book_inserted = lib.insert_book("Dork Diaries", "Rachel Renee Russell", "05/23/2014");
    if(book_inserted) 
        cout << "\n'Dork Diaries' has been added to the library!" << endl;
    else 
        cout << "\nFailed to add 'Dork Diaries' into the library!" << endl;

    cout << "\nUpdated library:" << endl;
    lib.print();

    // removing a book that is in the library
    cout << "\nRemoving 'Fall Boys' from the library...\n" << endl;
    bool book_removed = lib.remove_book("Fall Boys", "Penelope Douglas", "11/08/2021");
    if(book_removed) 
        cout << "\n'Fall Boys' has been removed from the library!" << endl;
    else 
        cout << "\n'Fall Boys' not removed!" << endl;

    cout << "\nUpdated Library:" << endl;
    lib.print();
    
    // inserting an existing book
    cout << "\nAdding a book to the library...\n" << endl;
    book_inserted = lib.insert_book(book3);
    if(book_inserted) 
        cout << "\nA duplicate of book 2 was added!" << endl;
    else 
        cout << "\nA duplicate of book 2 could not be added!" << endl;

    cout << "\nUpdated Library:" << endl;
    lib.print();

    // removing a non-existing book
    cout << "\nRemoving 'Fourth Wing' from the library...\n" << endl;
    book not_book("Fourth Wing", "Rebecca Yarros", "06/04/2022");
    bool non_existing_book_removed = lib.remove_book(not_book);
    if(non_existing_book_removed) 
        cout << "\n'Fourth Wing' was removed!" << endl;
    else
        cout << "\n'Fourth Wing' was not in the library!" << endl;
    
    cout << "\nFinal Library:" << endl;
    lib.print();

    return 0;
}

