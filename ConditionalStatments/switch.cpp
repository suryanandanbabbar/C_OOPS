#include <iostream>

int main()
{
    // Tools
    const int Pen = 10;
    const int Marker = 20;
    const int Eraser = 30;

    int tool = Pen;

    switch (tool)
    {
    case Pen:
        std::cout << "Active tool is pen\n";
        break; // breaks the flow here

    case Marker:
        std::cout << "Active tool is marker\n";
        break; // or here

    case Eraser:
        std::cout << "Active tool is eraser\n";
        break; // or here and hence, if "break" is ommited, everything executes

    default:
        std::cout << "Can't match any tool\n";
        break;
        return 1; // Runs only when no match
        // if we don't write "return 1", default statement will run always.
    }
    return 0;

    // Output:
    // Active tool is pen
}