#include <iostream>

int main()
{
    bool red_light = true;
    bool green_light = false;

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go Through" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is GREEN" << std::endl;
    }
    else
    {
        std::cout << "The light is not GREEN" << std::endl;
    }

    // Printing out a bool
    std::cout << "RED LIGHT = " << red_light << std::endl;     // 1 - true
    std::cout << "GREEN LIGHT = " << green_light << std::endl; // 0 - false

    // Print out true and false
    std::cout << std::boolalpha;           // Forces the output format to true/false
    std::cout << red_light << std::endl;   // true
    std::cout << green_light << std::endl; // false
}