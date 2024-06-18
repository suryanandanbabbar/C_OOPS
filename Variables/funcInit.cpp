// Functional Variable Initialisers
#include <iostream>

int main()
{
    int apple_count(5);
    int orange_count(10);

    int fruitCount(apple_count + orange_count);

    // Information lost. Less safe than braced initialisers
    int narrowingFunction(2.9); // 2
}