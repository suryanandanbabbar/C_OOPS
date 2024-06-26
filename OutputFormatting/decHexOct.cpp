#include <iostream>
#include <iomanip>

int main()
{
    int posNum = 717171;
    int negNum = -47347;
    double doubleVar = 498.32;

    std::cout << "Positive Integers in - " << std::endl;
    std::cout << "dec: " << std::dec << posNum << std::endl; // 717171
    std::cout << "hex: " << std::hex << posNum << std::endl; // af173
    std::cout << "oct: " << std::oct << posNum << std::endl; // 2570563

    std::cout << "Negative Integers in - " << std::endl;
    std::cout << "dec: " << std::dec << negNum << std::endl; // -47347
    std::cout << "hex: " << std::hex << negNum << std::endl; // ffff470d
    std::cout << "oct: " << std::oct << negNum << std::endl; // 37777643415

    std::cout << "Double in - " << std::endl;
    std::cout << "dec: " << std::dec << doubleVar << std::endl; // 498.32
    std::cout << "hex: " << std::hex << doubleVar << std::endl; // 498.32
    std::cout << "oct: " << std::oct << doubleVar << std::endl; // 498.32
}