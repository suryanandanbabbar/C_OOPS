#include <iostream>

int main()
{
    char value = 65;                              // ASCII Character Code for 'A'
    std::cout << "value: " << value << std::endl; // A

    // We use static_cast for Char to Int or vice-versa
    std::cout << "value(int): " << static_cast<int>(value) << std::endl; // 65
}