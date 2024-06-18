#include <iostream>

int main()
{
    int age;
    std::string name;

    std::cout << "Please type in your last name: " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello Mr. " << name << "! You are " << age << " years old" << std::endl;
}