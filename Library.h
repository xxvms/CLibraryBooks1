//
// Created by tom on 28/05/2017.
//

#ifndef CLIBRARYBOOKS_LIBRARAY_H
#define CLIBRARYBOOKS_LIBRARAY_H
#include <string>
#include "Book.h"
#include "Library.h"

class Library
{
private:
    int maxAmountOfBooks; //todo create new memory for maximum amount of books
    Book book[];
    
public:
    Library();
    void addBook2Lib(Book book_, int i);
    void getBook(int i);
    ~Library();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
