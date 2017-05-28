//
// This is assigment for Arek class - creating a Library with books
//
#include <iostream>
#include "Library.h"
//#include <string>
//#include "Book.h"

int main()
{
    Library lib;
    
    lib.addBook2Lib();
    
    std::cout << "Show books from Library: " << std::endl;
    
    lib.getBook();
    
    
    system("pause");
    return 0;
}