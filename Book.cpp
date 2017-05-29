//
// Created by tom on 28/05/2017.
//
#include "Book.h"
#include "Library.h"
#include <iostream>

Book::Book():author("n/a"), title("n/a"), publicationYear(0), ID(0){}

void Book::addBook()
{
    std::cout << "Book ID:";
    std::cin >> ID;
    std::cout << "Title: ";
    std::cin >> title;
    std::cout << "Author: ";
    std::cin >> author;
    std::cout << "Publication year: ";
    std::cin >> publicationYear;
}

void Book::getBook()
{
    std::cout << "Book ID: " << ID << std::endl;
    std::cout << "Book Title: " << title << std::endl;
    std::cout << "Book Author: " << author << std::endl;
    std::cout << "Book Publication Year: " << publicationYear << std::endl;
}
