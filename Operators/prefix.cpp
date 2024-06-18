#include <iostream>

int main()
{
    int value = 5;

    // Prefix Increment
    ++value;
    std::cout << "Increment by 1: " << value << std::endl; // 6

    // Re-initialising the value
    value = 5;

    // Prefix Decrement
    --value;
    std::cout << "Decrement by 1: " << value << std::endl; // 4
}