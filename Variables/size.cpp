#include <iostream>

int main()
{
    int variable = 10;
    int truckCount(10);
    std::cout << "Size of the variable = " << sizeof(variable) << std::endl;
    std::cout << "Size of the functional variable = " << sizeof(truckCount) << std::endl;
}