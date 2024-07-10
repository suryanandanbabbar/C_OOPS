#include <iostream>

int main()
{
    // Check if character is alphanumeric
    char input_char = '*';

    if (std::isalnum(input_char))
    {
        std::cout << input_char << " is alphanumeric." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not alphanumeric." << std::endl;
    }
}