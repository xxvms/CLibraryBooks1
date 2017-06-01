//
// This is assigment for Arek class - creating a Library with books
//
#include <iostream>
#include "Library.h"
//#include "Book.h"

int main()
{
    Library lib;
	int howManyBooks {0};
	std::cout << "How many books do you want to add? ";
	std::cin >> howManyBooks;
    Book* howManyBooksP =  new  Book[howManyBooks];
	   
    /*int choice = {0};
    int* choicePointer = &choice;*/
	
    for (int i = 0; i < howManyBooks; i++)
    {
        
        howManyBooksP[i].addBook(i); // todo how about creating ID that would be passed as argument to Library and it will act as Index??
        
        lib.addBook2Lib(howManyBooksP[i], i); //todo how to create "way" to add number of books and pass this to the Library?
    }
	system("cls");
    
    for (int i = 0; i < howManyBooks; i++)
    {
	    std::cout << "Book for ya sir: " << i << std::endl;
        lib.getBook(i);
	    std::cout << std::endl;
    }
   
    system("pause");
    return 0;
}