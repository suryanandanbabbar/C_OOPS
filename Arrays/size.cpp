#include <iostream>

int main()
{
    int scores[] = {10, 45, 67, 23, 15, 78, 90};

    // std::cout << "Size of scores array: " << std::size(scores) << std::endl;

    // Using sizeof()
    std::cout << "Size of scores: " << sizeof(scores) << std::endl;                               // 28
    std::cout << "Size of scores[0]: " << sizeof(scores[0]) << std::endl;                         // 4
    std::cout << "Scores element count: " << (sizeof(scores)) / (sizeof(scores[0])) << std::endl; // 28/4 = 7
}