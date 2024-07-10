#include <iostream>

int main()
{
    // Case-1 : Uninitialised pointer
    int *p_number; // Dangling uninitialised pointer

    std::cout << "*p_number: " << *p_number << std::endl; // CRASH!

    // Case-2 : Deleted pointer
    int *p_number1{new int{67}};
    std::cout << "*p_number1 (before delete) : " << *p_number1 << std::endl;

    delete p_number1;
    std::cout << "*p_number1(after delete) : " << *p_number1 << std::endl;

    // Case-3 : Multiple pointers pointing to same address
    int *p_number3{new int{83}};
    int *p_number4{p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    // Deleting p_number3
    delete p_number3; // p_number4 points to deleted memory. Dereferncing it will lead to

    // Undefined behaviour : Crash/Garbage or whatever
    std::cout << "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;
}