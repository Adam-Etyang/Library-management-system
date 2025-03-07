#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book
{
private:
    string title;
    string author;
    string genre;
    string isbn;
    string year;
    bool borrowed;

public:
    static const string BOOKS_FILE;
    int totalCopies;
    int availableCopies;
    // getter methods
    string get_title();
    string get_author();
    string get_genre();
    string get_isbn();
    string get_year();
    int get_totalCopies();
    int get_availableCopies();
    bool get_borrowed();

    // setter methods
    void set_title(const string &title);
    void set_author(const string &author);
    void set_year(const string &year);
    void set_genre(const string &genre);
    void set_isbn(const string &isbn);

    // availability management
    bool isAvailable();
    void removeCopy();
    void addCopy();

    // file management
    void saveBookToFile();
    static void loadBooksFromFile();
    static bool removeBookFromFile(const string &isbn);
};

#endif
