#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.1415926535897932384626433832795;

    std::cout << "Default Precision(6): " << pi << std::endl; // 3.14159
    std::cout << std::setprecision(10);
    std::cout << "Precision(10): " << pi << std::endl; // 3.141592654
    std::cout << std::setprecision(12);
    std::cout << "Precision(12): " << pi << std::endl; // 3.14159265359
}