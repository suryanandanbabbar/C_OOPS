#include <iostream>

int main()
{
    // Check if character is a digit
    char input_char = '1';

    if (std::isdigit(input_char))
    {
        std::cout << input_char << " is a digit." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not a digit." << std::endl;
    }
}