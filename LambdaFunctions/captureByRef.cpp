#include <iostream>

int main()
{
    int x = 10;
    auto lambda2 = [&x]()
    {
        x = 20; // Modifies the original x
        std::cout << "Modified value: " << x << std::endl;
    };

    lambda2(); // "Modified value: 20"

    std::cout << "Original value after lambda: " << x << std::endl; // "Original value after lambda: 20"
}
