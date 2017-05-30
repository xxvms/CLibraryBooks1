//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_BOOK_H
#define CLIBRARYBOOKS_BOOK_H

#include <string>

class Book
{
    std::string author;
    std::string title;
    int publicationYear;
    int ID;
    

public:
    friend class Library;
    Book();
    ~Book();
    int addBook(int* choiceP);
    
    void getBook();
};

#endif //CLIBRARYBOOKS_BOOK_H
