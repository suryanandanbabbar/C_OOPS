#include <iostream>

int main()
{
    // auto add = [](int a, int b) -> int
    // {
    //     return a + b;
    // };

    // std::cout << "Sum: " << add(3, 4) << std::endl;

    auto func = []()
    {
        std::cout << "Hello World!" << std::endl;
    };
}
