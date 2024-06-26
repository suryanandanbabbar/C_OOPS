#include <iostream>
#include <iomanip>

int main()
{
    int col_width = 20;

    std::cout << std::left; // Left justified
    std::cout << std::setfill('-');
    std::cout << std::setw(col_width) << "FirstName" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "John" << std::setw(col_width) << 25 << std::endl;
    std::cout << std::setw(col_width) << "Brad" << std::setw(col_width) << 33 << std::endl;
}