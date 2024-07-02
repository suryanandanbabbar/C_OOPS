#include <iostream>

int main()
{
    int *ptr; // Declares a pointer to an integer

    int x = 10;

    // Assigning data to pointer variables
    int *ptr = &x; // ptr now holds the address of x

    int y = 20;
    int *ptr = &y; // Assign a different address to the pointer
}