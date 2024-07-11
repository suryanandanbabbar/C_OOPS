#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    // For "ALL", we write "="
    auto lambda3 = [=]()
    {
        std::cout << "Captured values: " << x << ", " << y << std::endl;
    };

    lambda3(); // "Captured values: 10, 20"
}
