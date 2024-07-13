#include <iostream>
#include <type_traits>

template <typename T>
// "requires" keyword needs to be mentioned
    requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    char a0 = 10;
    char a1 = 20;

    auto resultA = add(a0, a1);
    std::cout << "ResultA: " << static_cast<int>(resultA) << std::endl;

    int b0 = 11;
    int b1 = 5;

    auto resultB = add(b0, b1);
    std::cout << "ResultB: " << static_cast<int>(resultB) << std::endl;

    double c0 = 11.1;
    double c1 = 1.9;
    // auto resultC = add(c0, c1); Error std::integral concept not satisfied.
}