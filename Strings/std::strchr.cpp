#include <iostream>
#include <cstring>

int main()
{
    const char *string = "Hello, World!";
    char character = 'o';

    // Find the first occurrence of 'o'
    const char *result = std::strchr(string, character);

    if (result != nullptr)
    {
        std::cout << "The first occurrence of '" << character << "' is at position: "
                  << (result - string) << std::endl;
    }
    else
    {
        std::cout << "Character '" << character << "' not found in the string.\n";
    }
}
