#include <iostream>

int main()
{
    // Check if character is in uppercase
    char input_char = 'c';

    if (std::isupper(input_char))
    {
        std::cout << input_char << " is in uppercase." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not in uppercase." << std::endl;
    }
}
