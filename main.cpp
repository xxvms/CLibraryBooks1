//
// This is assigment for Arek class - creating a Library with books
//
#include <iostream>
#include "Library.h"
//#include "Book.h"

int main()
{
    Library lib;
    Book book;
    int choice = {0};
    int* choicePointer = &choice;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "please provide book ID starting from 0: ";
        std::cin >> choice;
        
        book.addBook(choicePointer); // todo how about creating ID that would be passed as argument to Library and it will act as Index??
        
        lib.addBook2Lib(book, choice); //todo how to create "way" to add number of books and pass this to the Library?
    }
    
    for (int i = 0; i < 5; i ++)
    {
        lib.getBook(i);
    }
   
    system("pause");
    return 0;
}