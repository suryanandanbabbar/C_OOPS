#include <iostream>

template <typename T>
T maximum(T a, T b);

int main()
{
    double a = 23.5;
    double b = 51.2;

    std::cout << "Out - &a: " << &a << std::endl; // 0x16b94b408
    double max1 = maximum(a, b);
    std::cout << "max1: " << max1 << std::endl; // 51.2
}

template <typename T>
T maximum(T a, T b)
{
    std::cout << "In - &a: " << &a << std::endl; // 0x16b94b3c8
    return (a > b) ? a : b;
}
// Addresses on the outside are different from the inside