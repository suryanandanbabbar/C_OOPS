#include <iostream>

int main()
{
    int x = 10;
    int y = 20;
    auto lambda4 = [&]()
    {
        x = 30; // Modifies the original x
        y = 40; // Modifies the original y
        std::cout << "Modified values: " << x << ", " << y << std::endl;
    };

    lambda4(); // Modified values: 30, 40

    std::cout << "Original values after lambda: " << x << ", " << y << std::endl; // 30, 40
}
