#include <iostream>
#include <iomanip>

int main()
{
    // Declare and initialize variables
    float number1 = 1.12345678901234567890f;       // Precision: 7
    double number2 = 1.12345678901234567890;       // Precision: 15
    long double number3 = 1.12345678901234567890L; // Precision: setprecision()

    // Precision
    std::cout << std::setprecision(20); // Controls the precision from std::cout
    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;
}