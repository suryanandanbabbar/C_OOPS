#include <iostream>

int main()
{
    // Simple Lambda function
    auto func = []()
    {
        std::cout << "Hello World!" << std::endl;
    };
    func(); // Calling the lambda function

    // Lambda function for addition (returns sum)
    auto add = [](int a, int b) -> int
    {
        return a + b;
    };

    // Calling the lambda function
    std::cout << "Sum: " << add(3, 4) << std::endl;

    // Call Lambda Function directly
    []()
    {
        std::cout << "Hello World" << std::endl;
    }();

    // Lambda function that takes parameters without name
    [](double a, double b)
    {
        std::cout << "Sum: " << (a + b) << std::endl;
    }(12.5, 15.9);

    // Print result directly
    std::cout << "result : " << [](double a, double b)
    {
        return (a + b);
    }(12.1, 5.7)
              << std::endl;
}
