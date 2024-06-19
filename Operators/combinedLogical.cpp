#include <iostream>

int main()
{
    bool a = true;
    bool b = false;
    bool c = true;

    std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl; // 1
}