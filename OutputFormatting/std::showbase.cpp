#include <iostream>
#include <iomanip>

int main()
{
    int number = 12345;

    std::cout << "Show bases:- " << std::endl;
    std::cout << std::showbase;
    std::cout << "dec: " << std::dec << number << std::endl; // 12345
    std::cout << "hex: " << std::hex << number << std::endl; // 0x3039
    std::cout << "oct: " << std::oct << number << std::endl; // 030071
}