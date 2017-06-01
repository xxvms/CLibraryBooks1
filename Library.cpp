//
// Created by tom on 28/05/2017.
//
//#include <string>
//#include <iostream>
#include <iostream>
#include "Book.h"
#include "Library.h"
//TODO create member that will keep maximum of the books in the library (new) I think
Library::Library() : maxAmountOfBooks{0}
{
    new  Book[maxAmountOfBooks];
}

void Library::addBook2Lib(Book book_, int i) //DONE TODO I need to come out with a way to insert object book with unique ID as array index
{
    pointerBook[i].ID = book_.ID;
    pointerBook[i].author = book_.author;
    pointerBook[i].title = book_.title;
    pointerBook[i].publicationYear = book_.publicationYear;
    
    
}

void Library::getBook(int i)
{
        std::cout << "Book ID: " << pointerBook[i].ID << std::endl;
        std::cout << "Book Title: " << pointerBook[i].title << std::endl;
        std::cout << "Book Author: " << pointerBook[i].author << std::endl;
        std::cout << "Book year: " << pointerBook[i].publicationYear << std::endl;
}
Library::~Library()
{
	std::cout << "is this executed?" << std::endl;
    delete []pointerBook;
}

