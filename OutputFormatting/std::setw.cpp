#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Unformatted Table:" << std::endl;
    std::cout << "John " << "Smith" << " 43" << std::endl;
    std::cout << "Brad " << "Scot" << " 27" << std::endl;
    std::cout << "Tom " << "Hill" << " 34" << std::endl;
    std::cout << "Steve " << "Trevor" << " 17" << std::endl;

    std::cout << "------------\n";

    std::cout << "Formatted Table:" << std::endl;
    std::cout << std::left; // Left Justified
    // std::cout << std::right; // Right Justified (by defualt)
    std::cout << std::setw(10) << "First Name " << std::setw(10) << "Last Name " << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "John " << std::setw(10) << " Smith" << std::setw(5) << " 43" << std::endl;
    std::cout << std::setw(10) << "Brad " << std::setw(10) << " Scot" << std::setw(5) << " 27" << std::endl;
    std::cout << std::setw(10) << "Tom " << std::setw(10) << " Hill" << std::setw(5) << " 34" << std::endl;
    std::cout << std::setw(10) << "Steve " << std::setw(10) << " Trevor" << std::setw(5) << " 17" << std::endl;
}