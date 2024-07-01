#include <iostream>

int main()
{
    bool green = true;
    bool police_stop = true;

    if (green)
    {
        if (police_stop)
        {
            std::cout << "Stop\n";
        }
        else
        {
            std::cout << "Go\n";
        }
    }
}