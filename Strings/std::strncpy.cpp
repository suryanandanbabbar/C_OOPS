#include <iostream>
#include <cstring>

int main()
{
    const char *source = "Hello, World!";
    char destination[50];

    // Copy the first 5 characters of source to destination
    std::strncpy(destination, source, 5);
    destination[5] = '\0'; // Manually null-terminate the destination string

    std::cout << "Source string: " << source << std::endl;           // Hello, World!
    std::cout << "Destination string: " << destination << std::endl; // Hello
}
