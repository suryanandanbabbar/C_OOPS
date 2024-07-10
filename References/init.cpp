#include <iostream>

int main()
{
    int int_value = 45;
    double double_value = 33.65;

    // Referencing
    int &reference_to_int_value = int_value;
    double &reference_to_double_value = double_value;

    // Value comes out to be the same
    std::cout << "int_value: " << int_value << std::endl;                           // 45
    std::cout << "reference_to_int_value: " << reference_to_int_value << std::endl; // 45

    // Even the addresses are same
    std::cout << "&int_value: " << &int_value << std::endl;                                 // 0x16b90342c
    std::cout << "&reference_to_int_value: " << &reference_to_int_value << std::endl;       // 0x16b90342c
    std::cout << "&double_value: " << &double_value << std::endl;                           // 0x16b903420
    std::cout << "&reference_to_double_value: " << &reference_to_double_value << std::endl; // 0x16b903420

    // Sizes are also same
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;                                       // 4
    std::cout << "sizeof(int&): " << sizeof(int &) << std::endl;                                    // 4
    std::cout << "sizeof(reference_to_int_value): " << sizeof(reference_to_int_value) << std::endl; // 4
}