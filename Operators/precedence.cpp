#include <iostream>

int main()
{
    int a = 6;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 3;
    int f = 2;
    int g = 5;

    int result = a + b * c - d / e - f + g;
    // 6 + 24 - 3 - 2 + 5
    // 6 + 24 - 5 + 5
    // 6 + 24 - 0
    // 6 + 24
    // 30

    std::cout << "Result: " << result << std::endl; // 30
}