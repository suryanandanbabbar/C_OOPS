#include <iostream>

int main()
{
    double salaries[5] = {12.7, 7.5, 13.2, 8.1, 9.3};

    for (int i = 0; i < 5; i++)
    {
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }
}