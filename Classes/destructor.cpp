#include <iostream>

class Dog
{
public:
    Dog(); // default constructor
    Dog(std::string name_param, std::string breed_param, int age_param);
    ~Dog(); // Destructor declared
    // Can also declare and implement in here : syntax commented out below :
    /*
    ~Dog()
    {
        delete dog_age;
        std::cout << "Dog destructor called for " << dog_name << std::endl;
    }
    */
private:
    std::string dog_name;
    std::string dog_breed;
    int *dog_age;
};