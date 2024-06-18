#include <iostream>

int main()
{
    double number1 = 5.6;
    double number2 = 0; // Initialised to ZERO
    double number3 = 0; // Initialised to ZERO

    // Infinity
    double result = number1 / number2;

    std::cout << number1 << " / " << number2 << " = " << result << std::endl;            // inf
    std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl; // 5.6

    // NaN
    std::cout << number2 << " / " << number3 << " = " << number2 / number3 << std::endl; // nan
}