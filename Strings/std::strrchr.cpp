#include <iostream>
#include <cstring>

int main()
{
    const char *string = "Hello, World!";
    char character = 'o';

    // Find the last occurrence of 'o'
    const char *result = std::strrchr(string, character);

    if (result != nullptr)
    {
        std::cout << "The last occurrence of '" << character << "' is at position: "
                  << (result - string) << std::endl;
    }
    else
    {
        std::cout << "Character '" << character << "' not found in the string.\n";
    }
}
