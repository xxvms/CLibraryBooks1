//
// Created by tom on 28/05/2017.
//
//#include <string>
//#include <iostream>
#include <iostream>
#include "Book.h"
#include "Library.h"
//TODO create member that will keep maximum of the books in the library (new) I think
Library::Library()
{
   
    Book* pointerBook = new  Book[maxAmountOfBooks];
}

void Library::addBook2Lib(Book book_, int i) //DONE TODO I need to come out with a way to insert object book with unique ID as array index
{
   //Library::book[maxAmountOfBooks] = book_;
}

void Library::getBook(int i)
{
        std::cout << "Book ID: " << book[i].ID << std::endl;
        std::cout << "Book Title: " << book[i].title << std::endl;
        std::cout << "Book Author: " << book[i].author << std::endl;
        std::cout << "Book year: " << book[i].publicationYear << std::endl;
}
Library::~Library()
{
    delete []pointerBook;
}

