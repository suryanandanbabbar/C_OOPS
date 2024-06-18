#include <iostream>

int addNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{
    int a = 12;
    int b = 13;

    int sum = addNumbers(a, b);

    std::cout << "The sum of numbers is: " << sum << std::endl;
    // Directly passing the function in statement
    std::cout << "Direct passing: " << addNumbers(a, b) << std::endl;

    return 0;
}