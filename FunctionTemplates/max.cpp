#include <iostream>

template <typename T>
T maximum(T a, T b);

int main()
{
    int a = 10;
    int b = 23;

    double c = 34.7;
    double d = 23.4;

    std::string e = "Hello";
    std::string f = "World!";

    std::cout << "int(a, b): " << maximum(a, b) << std::endl;    // 23
    std::cout << "double(c, d): " << maximum(c, d) << std::endl; // 34.7
    std::cout << "string(e, f): " << maximum(e, f) << std::endl; // World!
}

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}