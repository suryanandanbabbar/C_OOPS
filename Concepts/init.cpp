#include <iostream>
#include <concepts>

// Define the Addable concept (as defined earlier)
template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::convertible_to<T>;
};

// Use the Addable concept to constrain the add function template
template <Addable T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << add(1, 2) << std::endl;     // Works, int satisfies Addable
    std::cout << add(1.5, 2.5) << std::endl; // Works, double satisfies Addable

    // std::cout << add("Hello", "World") << std::endl; // Error, const char* does not satisfy Addable

    return 0;
}
