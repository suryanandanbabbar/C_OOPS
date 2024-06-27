#include <iostream>
#include <iomanip>

int main()
{
    double a = 34.1;
    double b = 101.99;
    double c = 12.0;
    int d = 45;

    std::cout << std::showpoint;          // show trailing zeroes
    std::cout << "a: " << a << std::endl; // 34.1000
    std::cout << "b: " << b << std::endl; // 101.990
    std::cout << "c: " << c << std::endl; // 12.0000
    std::cout << "d: " << d << std::endl; // 45
}