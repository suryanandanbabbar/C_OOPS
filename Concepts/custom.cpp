#include <iostream>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
requires MyIntegral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x = 6;
    int y = 7;

    add(x, y);
}