#include <iostream>
#include <string>

int main()
{
    // Creating and initializing strings
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string str3 = str1 + ", " + str2 + "!";
    std::cout << "Concatenated string: " << str3 << std::endl; // Hello, World!

    // Accessing characters
    std::cout << "First character of str1: " << str1[0] << std::endl; // H

    // Modifying characters
    str1[0] = 'h';
    std::cout << "Modified str1: " << str1 << std::endl; // hello

    // String length
    std::cout << "Length of str3: " << str3.length() << std::endl; // 13

    // Substring
    std::string str4 = str3.substr(7, 5);
    std::cout << "Substring of str3: " << str4 << std::endl; // World

    // Finding a substring
    size_t pos = str3.find("World");
    if (pos != std::string::npos)
    {
        std::cout << "'World' found at position: " << pos << std::endl; // 7
    }
    else
    {
        std::cout << "'World' not found" << std::endl;
    }

    // Erasing part of a string
    str3.erase(5, 7);                                  // Erase ", World"
    std::cout << "After erase: " << str3 << std::endl; // Hello!

    // Inserting into a string
    str3.insert(5, " everyone");
    std::cout << "After insert: " << str3 << std::endl; // Hello everyone!
}
