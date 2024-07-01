#include <iostream>

int main()
{
    int a = 14;
    int b = 64;
    int max;

    // if-else using ternary operator
    max = (a > b) ? a : b;

    std::cout << "max: " << max << std::endl; // 64
}