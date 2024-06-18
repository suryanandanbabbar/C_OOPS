#include <iostream>

int main()
{
    auto var1 = 12;    // int
    auto var2 = 13.0;  // double
    auto var3 = 14.0f; // float
    auto var4 = 15.0l; // long double
    auto var5 = 'e';   // char
    auto var6 = 123u;  // unsigned
    auto var7 = 123ul; // unsigned long
    auto var8 = 123ll; // long long

    std::cout << "Variable 1: " << var1 << std::endl;
    std::cout << "Variable 2: " << var2 << std::endl;
    std::cout << "Variable 3: " << var3 << std::endl;
    std::cout << "Variable 4: " << var4 << std::endl;
    std::cout << "Variable 5: " << var5 << std::endl;
    std::cout << "Variable 6: " << var6 << std::endl;
    std::cout << "Variable 7: " << var7 << std::endl;
    std::cout << "Variable 8: " << var8 << std::endl;

    // Size of Variables
    std::cout << "Size of Variable 1: " << sizeof(var1) << std::endl; // 4
    std::cout << "Size of Variable 2: " << sizeof(var2) << std::endl; // 8
    std::cout << "Size of Variable 3: " << sizeof(var3) << std::endl; // 4
    std::cout << "Size of Variable 4: " << sizeof(var4) << std::endl; // 8
    std::cout << "Size of Variable 5: " << sizeof(var5) << std::endl; // 1
    std::cout << "Size of Variable 6: " << sizeof(var6) << std::endl; // 4
    std::cout << "Size of Variable 7: " << sizeof(var7) << std::endl; // 8
    std::cout << "Size of Variable 8: " << sizeof(var8) << std::endl; // 8
}