#include <iostream>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add two floating-point numbers
double add(double a, double b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // Calls int add(int, int)
    std::cout << "Add two integers: " << add(2, 3) << std::endl;

    // Calls double add(double, double)
    std::cout << "Add two doubles: " << add(2.5, 3.7) << std::endl;

    // Calls int add(int, int, int)
    std::cout << "Add three integers: " << add(1, 2, 3) << std::endl;
}
