#include <iostream>

int main()
{
    int x = 10;
    auto lambda1 = [x]()
    {
        std::cout << "Captured value: " << x << std::endl;
    };

    lambda1(); // "Captured value: 10"
}
