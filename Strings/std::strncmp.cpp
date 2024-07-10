#include <iostream>
#include <cstring>

int main()
{
    char name1[100] = "Suryanandan";
    char name2[100] = "Sahil";

    // Comparing first character
    std::cout << std::strncmp(name1, name2, 1) << std::endl; // 0 - Equal

    // Comparing second character
    std::cout << std::strncmp(name2, name1, 2) << std::endl; // -20
}