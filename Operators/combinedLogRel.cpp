#include <iostream>

int main()
{
    int a = 54;
    int b = 23;
    int c = 34;

    std::cout << std::boolalpha; // true/

    std::cout << "((a > b) && (a > c)): " << ((a > b) && (a > c)) << std::endl;      // true
    std::cout << "((a == b) || ( b >= c)): " << ((a == b) || (a <= b)) << std::endl; // false
    std::cout << "((a < b) || (b > c)): " << ((a < b) || (b > c)) << std::endl;      // false
    std::cout << "((a > b) && (a >= c)): " << ((a > b) && (a >= c)) << std::endl;    // true
    std::cout << "((!a) && (b == c)): " << ((!a) && (b == c)) << std::endl;          // false
    std::cout << "((!b) || (a == b)): " << ((!b) || (a == b)) << std::endl;          // false
}