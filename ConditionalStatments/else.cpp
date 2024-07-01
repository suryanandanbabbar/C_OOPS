#include <iostream>

int main()
{
    int number1 = 56;
    int number2 = 60;

    // Expression yeilding the condition
    bool result = (number1 < number2);

    // if(result)
    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    // if(!result) OR else
    else
    {
        std::cout << number1 << " is greater than " << number2 << std::endl;
    }

    // Output:
    // 56 is less than 60
}