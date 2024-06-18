#include <iostream>

int main()
{
    double number1 = 192400023;
    double number2 = 1.92400032e8;
    double number3 = 1.924e8;
    double number4 = 0.00000000003498;
    double number5 = 3.498e-11;

    std::cout << "Number 1: " << number1 << std::endl; // 1.924e+08
    std::cout << "Number 2: " << number2 << std::endl; // 1.924e+08
    std::cout << "Number 3: " << number3 << std::endl; // 1.924e+08
    std::cout << "Number 4: " << number4 << std::endl; // 3.498e-11
    std::cout << "Number 5: " << number5 << std::endl; // 3.498e-11
}