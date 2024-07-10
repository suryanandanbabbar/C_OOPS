#include <iostream>

int main()
{
    // Check if character is an alphabet or not
    char input_char = 'C';

    if (std::isalpha(input_char))
    {
        std::cout << input_char << " is an alphabet." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not an alphabet." << std::endl;
    }
}