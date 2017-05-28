//
// Created by tom on 28/05/2017.
//
//#include <string>
//#include <iostream>
#include "Book.h"
#include "Library.h"

Library::Library(){}

void Library::addBook2Lib()
{
    for (int i = 0; i < 5; i++)
    {
        books[i].addBook();
    }
}

void Library::getBook()
{
    for (int i = 0; i < 5; i++)
    {
        books[i].getBook();
    }
}

/*
Library::~Library()
{
}
*/


