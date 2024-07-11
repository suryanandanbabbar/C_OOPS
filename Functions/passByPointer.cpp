#include <iostream>

// Function Declaration
void say_age(int *age);

int main(int argc, char **argv)
{
    int age = 23;
    std::cout << "age - before: " << age << std::endl; // 23

    say_age(&age); // Function Calling

    std::cout << "age - after : " << age << std::endl; // 23
    return 0;
}

// Function Definition
void say_age(int *age)
{
    ++(*age); // Changing the copy. Outside age not affected

    std::cout << "Hello! You are " << *age << " years old." << std::endl; // 24
}