#include <iostream>

int main()
{
    int integer = 10;
    int functionalVariable(10);

    std::cout << "Size of the variable = " << sizeof(integer) << std::endl;                       // 4
    std::cout << "Size of the functional variable = " << sizeof(functionalVariable) << std::endl; // 4
    std::cout << "Size of float: " << sizeof(float) << std::endl;                                 // 4
    std::cout << "Size of double: " << sizeof(double) << std::endl;                               // 8
    std::cout << "Size of long double: " << sizeof(long double) << std::endl;                     // 8
}