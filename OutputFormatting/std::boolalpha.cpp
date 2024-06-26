#include <iostream>
#include <iomanip>

int main()
{
    bool a = true;
    bool b = false;

    std::cout << "Condition 1: " << a << std::endl;
    std::cout << "Condition 2: " << b << std::endl;

    // boolalpha and noboolapha : control bool output format : 1/0 or true/false
    std::cout << std::boolalpha;
    std::cout << "Using boolalpha" << std::endl;
    std::cout << "Condition 1: " << a << std::endl; // true
    std::cout << "Condition 2: " << b << std::endl; // false

    std::cout << std::noboolalpha;
    std::cout << "Using nboolalpha" << std::endl;
    std::cout << "Condition 1: " << a << std::endl; // 1
    std::cout << "Condition 2: " << b << std::endl; // 0
}