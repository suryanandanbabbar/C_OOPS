#include <iostream>

int main()
{
    bool a = true;
    bool b = false;
    bool c = true;

    std::cout << std::boolalpha; // true/false instead of 1/0

    // AND (returns true when both operands are true)
    std::cout << "a && b: " << (a && b) << std::endl;           // false
    std::cout << "a && c: " << (a && c) << std::endl;           // true
    std::cout << "a && b && c: " << (a && b && c) << std::endl; // false

    // OR (returns true when even one operand is true)
    std::cout << "a || b: " << (a || b) << std::endl;           // true
    std::cout << "a || c: " << (a || c) << std::endl;           // true
    std::cout << "b || b: " << (b || b) << std::endl;           // false
    std::cout << "a || b || c: " << (a || b || c) << std::endl; // true

    // NOT (returns the opposite of the operand)
    std::cout << "!a: " << (!a) << std::endl; // false
    std::cout << "!b: " << (!b) << std::endl; // true
    std::cout << "!c: " << (!c) << std::endl; // false
}