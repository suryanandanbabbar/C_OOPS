#include <iostream>
#include <constants.h>


class Cylinder
{
    // Properties
public:
    double base_radius = 1.0;
    double height = 1.0;

public:
    // Default Constructor
    Cylinder() = default;

    // Constructor (taking params)
    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }

    // Method (Function)
    double volume()
    {
        // Here "PI" comes from <constants.h> file
        return PI * base_radius * base_radius * height;
    }
};

int main()
{
    // Object creation using default constructor
    Cylinder cylinder1;

    std::cout << "Volume: " << cylinder1.volume() << std::endl; // 3.14159
}