#include <iostream>

int main()
{
    // Declaring pointer
    char *ptr = nullptr;

    // Declaring Variable
    char variable = 'A';

    // Assigning Variable
    ptr = &variable;

    std::cout << "The value stored in pointer is: " << *ptr << std::endl; // A

    // String Literal
    char *ptr1 = {"Hello World!"};

    // Without Asterisk
    std::cout << "The string literal stored is: " << ptr1 << std::endl; // Hello World!

    // With Asterisk
    std::cout << "The string literal stored is: " << *ptr1 << std::endl; // H
}