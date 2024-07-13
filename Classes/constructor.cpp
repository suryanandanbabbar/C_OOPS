#include <iostream>
#include <cmath>

class Cylinder
{
// Properties
private:
    double base_radius = 1.0;
    double height = 1.0;

public:
    // Constructor-1(taking no params)
    Cylinder()
    {
        base_radius = 2.0;
        height = 2.0;
    };

    // Constructor-2(taking params)
    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }

    // Method (Function)
    double volume()
    {
        return M_PI * base_radius * base_radius * height;
    }
};

int main()
{
    // Without params
    Cylinder cylinder1; // Object created using Constructor-1
    std::cout << "volume c1: " << cylinder1.volume() << std::endl; // 25.1327

    // With params
    Cylinder cylinder2(10, 4); // Object created using Constructor-2
    std::cout << "volume c2: " << cylinder2.volume() << std::endl; // 1256.64
}