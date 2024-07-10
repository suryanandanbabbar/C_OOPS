#include <iostream>

int main()
{
    // Check if character is blank
    char input_char = ' ';

    if (std::isblank(input_char))
    {
        std::cout << input_char << "Character is blank." << std::endl;
    }
    else
    {
        std::cout << input_char << "Character is not blank." << std::endl;
    }
}