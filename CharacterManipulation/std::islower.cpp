#include <iostream>

int main()
{
    // Check if character is in lowercase
    char input_char = 'c';

    if (std::islower(input_char))
    {
        std::cout << input_char << " is in lowercase." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not in lowercase." << std::endl;
    }
}
