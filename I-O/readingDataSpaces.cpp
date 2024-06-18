// Reading data with spaces
#include <iostream>

int main()
{
    int age;
    std::string fullName;

    std::cout << "Please enter your full name: " << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Hello Mr. " << fullName << std::endl;
}