#include <iostream>

int main()
{
    int a = 12;
    int b = 56;

    std::cout << std::boolalpha;                       // true/false instead of 1/0
    std::cout << "a < b = " << (a < b) << std::endl;   // true
    std::cout << "a > b = " << (a > b) << std::endl;   // false
    std::cout << "a <= b = " << (a <= b) << std::endl; // true
    std::cout << "a >= b = " << (a >= b) << std::endl; // false
    std::cout << "a == b = " << (a == b) << std::endl; // false
    std::cout << "a != b = " << (a != b) << std::endl; // true
}