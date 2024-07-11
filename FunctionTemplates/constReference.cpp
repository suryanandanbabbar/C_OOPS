#include <iostream>

// Function template that prints the value of an object by const reference
template <typename T>
const T &maximum(const T &a, const T &b);

int main()
{
    double a = 23.5;
    double b = 51.2;

    std::cout << "Out - &a: " << &a << std::endl; // 0x16d5c73f8
    double max1 = maximum(a, b);
    std::cout << "max1: " << max1 << std::endl; // 51.2
}

template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a: " << &a << std::endl; // 0x16d5c73f8
    return (a > b) ? a : b;
}
// Inside and Outside addresses are same