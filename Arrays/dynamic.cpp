#include <iostream>

int main()
{
    // Omit the size
    double salaries[] = {12.7, 7.5, 13.2, 8.1, 9.3};

    // Reading Values
    for (auto value : salaries)
    {
        std::cout << "value: " << value << std::endl;
    }
}