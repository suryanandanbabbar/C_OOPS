#include <iostream>

int main()
{
    // Prints together (without a new line)
    std::cout << "Hello";
    std::cout << "World";

    // Prints on different lines
    std::cout << "This is one line" << std::endl;
    std::cout << "This is a new line" << std::endl;

    // This also works
    std::cout << "Using\n";
    std::cout << "Backslash n \n";
}