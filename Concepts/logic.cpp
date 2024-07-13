#include <iostream>
#include <concepts>
#include <type_traits>

// checks if a type is integral or floating-point type but not a pointer
template <typename T>
concept NumericNotPointer = (std::integral<T> || std::floating_point<T>) && !std::is_pointer_v<T>;

// Function template constrained by NumericNotPointer
template <NumericNotPointer T>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int x = 5;
    double y = 3.14;

    printValue(x);  // Works, int satisfies NumericNotPointer
    printValue(y);  // Works, double satisfies NumericNotPointer

    // int* ptr = &x;
    // printValue(ptr); Error, int* does not satisfy NumericNotPointer

    return 0;
}
