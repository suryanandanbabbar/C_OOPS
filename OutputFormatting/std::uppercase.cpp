#include <iostream>
#include <iomanip>

int main()
{
    int number = 717171;
    std::cout << std::uppercase;
    std::cout << "hex: " << std::hex << number << std::endl; // AF173
    std::cout << "oct: " << std::oct << number << std::endl; // 2570563
}