#include <iostream>
#include <iomanip>

int main()
{
    double a = 3.14159;
    double b = 2006.0;
    double c = 1.34e-10;

    std::cout << "Double Values (scientific)" << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl; // 3.141590e+00
    std::cout << "b: " << b << std::endl; // 2.006000e+03
    std::cout << "c: " << c << std::endl; // 1.340000e-10

    // Back to default
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
}