#include <iostream>

int main()
{
    int value = 12;

    // Compound Addition
    value += 6;
    std::cout << "Compound Addition: " << value << std::endl; // 18

    value = 12; // Reset value

    // Compound Subtraction
    value -= 6;
    std::cout << "Compound Subtraction: " << value << std::endl; // 6

    value = 12; // Reset value

    // Compound Multiplication
    value *= 2;
    std::cout << "Compound Multiplication: " << value << std::endl; // 24

    value = 12; // Reset value

    // Compound Division
    value /= 2;
    std::cout << "Compound Division: " << value << std::endl; // 6

    value = 12; // Reset value

    // Compound Modulus
    value %= 2;
    std::cout << "Compound Modulus: " << value << std::endl; // 0
}