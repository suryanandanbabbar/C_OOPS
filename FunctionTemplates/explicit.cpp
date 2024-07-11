#include <iostream>

// Function template to multiply two values of type T
template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    auto result1 = multiply<int>(5, 3);        // Explicitly specify T as int
    auto result2 = multiply<double>(2.5, 3.7); // Explicitly specify T as double

    std::cout << "Result 1: " << result1 << std::endl; // 15
    std::cout << "Result 2: " << result2 << std::endl; // 9.25
}
