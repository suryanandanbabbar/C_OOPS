#include <iostream>
#include <cstring>

int main()
{
    char name1[100] = "Suryanandan";
    char name2[100] = "Sahil";

    std::cout << std::strcmp(name1, name2) << std::endl; // 20
    std::cout << std::strcmp(name2, name1) << std::endl; // -20

    std::cout << std::strcmp(name1, name1) << std::endl; // 0 - Equal
}