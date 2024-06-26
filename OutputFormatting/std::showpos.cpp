#include <iostream>
#include <iomanip>

int main()
{
    int posNum = 45;
    int negNum = -23;

    std::cout << "Positive: " << posNum << std::endl; // 45
    std::cout << "Negative: " << negNum << std::endl; // -23

    // showpos and noshowpos : show or hide the + sign for positive numbers
    std::cout << std::showpos;
    std::cout << "Positive: " << posNum << std::endl; // +45
    std::cout << "Negative: " << negNum << std::endl; // -45

    std::cout << std::noshowpos;
    std::cout << "Positive: " << posNum << std::endl; // 45
    std::cout << "Negative: " << negNum << std::endl; // -23
}