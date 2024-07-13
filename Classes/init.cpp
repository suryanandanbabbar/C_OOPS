#include <iostream>
#include <cmath>

class Cylinder
{
public:
    // Member Variables
    double base_radius = 1.0;
    double height = 1.0;

public:
    // Method
    double volume()
    {
        return M_PI * base_radius * base_radius * height;
        // (M_PI  = 3.14159 in <cmath> library)
    }
};

int main()
{
    Cylinder cylinder1; // Object Creation
    std::cout << "volume c1: " << cylinder1.volume() << std::endl; // 3.14159
    /* (Since, we haven't yet assigned the values to radius and
    height, output comes out to be the value of Pi) */

    cylinder1.base_radius = 3.0;
    cylinder1.height = 2;
    std::cout << "volume c1: " << cylinder1.volume() << std::endl; // 56.5487

    // Similary, we can form another cylinder (object)
    Cylinder cylinder2;
    cylinder2.base_radius = 5.0;
    cylinder2.height = 7;
    std::cout << "volume c2: " << cylinder2.volume() << std::endl; // 549.779
}