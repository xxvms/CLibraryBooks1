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
    Book books[5];
    
public:
    Library();
    void addBook2Lib();
    void getBook();
    //~Library();
};
#endif //CLIBRARYBOOKS_LIBRARAY_H
