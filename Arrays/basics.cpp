#include <iostream>

int main()
{
    // Declaring an array of size 10
    int scores[10];

    // Writing Values
    scores[0] = 23;
    scores[1] = 56;
    scores[2] = 12;

    // Writing Values using Loop
    for (int i = 0; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    // Reading Values
    std::cout << "Reading Values using indices (0-9)\n";
    std::cout << "scores[0] (first element): " << scores[0] << std::endl;
    std::cout << "scores[1] (second element): " << scores[1] << std::endl;
    std::cout << "scores[2] (third element): " << scores[2] << std::endl;

    // Reading Values using Loops
    for (int i = 0; i < 3; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }
}