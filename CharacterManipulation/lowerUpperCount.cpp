#include <iostream>

int main()
{
    char thought[100] = "The C++ Programming Language is one of the most used on the Planet";

    // Setting the count
    int lowerCount = 0;
    int upperCount = 0;

    // Looping through the message
    for (int i = 0; i < 100; i++)
    {
        if (std::islower(thought[i]))
        {
            lowerCount++;
        }
        if (std::isupper(thought[i]))
        {
            upperCount++;
        }
    }

    std::cout << "Lowercase characters count: " << lowerCount << std::endl; // 47
    std::cout << "Uppercase characters count: " << upperCount << std::endl; // 5
}