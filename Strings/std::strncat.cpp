#include <iostream>
#include <cstring>

int main()
{
    char destination[50] = "Hello, ";
    const char *source = "World! This is an example.";

    // Concatenate the first 2 characters of source to destination
    std::strncat(destination, source, 2);

    std::cout << "Concatenated string: " << destination << std::endl; // Hello, Wo
}
