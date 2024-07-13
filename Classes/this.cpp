#include <iostream>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

private:
    std::string name;
    std::string breed;
    int *p_age;
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog Constructor called for " << name << "at " << this << std::endl;
}
Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for " << name << "at " << this << std::endl;
}

int main()
{
    Dog dog1("Fluffy", "Shephard", 2); // Constructor

    std::cout << "Done!\n";
    // Destructor
}
/* 
Output:
Dog Constructor called for Fluffyat 0x16b9e3408
Done!
Dog destructor called for Fluffyat 0x16b9e3408
 */