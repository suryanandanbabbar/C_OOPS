#include <iostream>
#include <iomanip>

int main()
{
    double a = 3.14159;
    double b = 2006.0;
    double c = 1.34e-10;

    std::cout << "Double Values (default)" << std::endl;
    std::cout << "a: " << a << std::endl; // 3.14159
    std::cout << "b: " << b << std::endl; // 2006
    std::cout << "c: " << c << std::endl; // 1.34e-10

    std::cout << "Double Values (fixed)" << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl; // 3.141590
    std::cout << "b: " << b << std::endl; // 2006.000000
    std::cout << "c: " << c << std::endl; // 0.000000
}