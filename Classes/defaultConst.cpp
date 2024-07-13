#include <iostream>
#include <cmath>

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
        return M_PI * base_radius * base_radius * height;
    }
};