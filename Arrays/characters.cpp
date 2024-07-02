#include <iostream>

int main()
{
    // Declare array of characters
    char message[5] = {'H', 'e', 'l', 'l', 'o'};

    // Print out the array using Loop
    for (auto i : message)
    {
        std::cout << i;
    } // Hello

    std::cout << std::endl; // For new line

    // Modifying elements
    message[1] = 'a';

    std::cout << "Modified Message: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << message[i];
    } // Hallo
    std::cout << std::endl; // For new line

    // Direct Printing
    // Some garbage value is also printed
    std::cout << "message: " << message << std::endl;
}