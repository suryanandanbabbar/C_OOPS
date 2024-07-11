#include <iostream>
#include <cstring>

int main()
{
    const char *source = "Hello, World!";
    char destination[50];

    // Copy source to destination
    std::strcpy(destination, source);

    std::cout << "Source string: " << source << std::endl;           // Hello, World!
    std::cout << "Destination string: " << destination << std::endl; // Hello, World!
}
