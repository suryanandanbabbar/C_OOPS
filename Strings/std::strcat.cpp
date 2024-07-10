#include <iostream>
#include <cstring>

int main()
{
    char dest[50] = "Hello, ";
    const char *src = "World!";

    // Concatenate src to dest
    std::strcat(dest, src);

    std::cout << "Concatenated string: " << dest << std::endl; // Hello, World
}
