#include <iostream>

class Dog
{
    std::string m_name;
};

struct Cat
{
    std::string m_name;
};

struct Point {
    double x;
    double y;
};

void printPoint(const Point& point) {
    std::cout << "Point [x: " << point.x << ", y: " << point.y << "]\n";
}

int main()
{
    Dog dog1;
    Cat cat1;
    Point point1;

    // dog1.m_name = "Fluffy"; Compiler ERROR! (PRIVATE MEMBER)
    cat1.m_name = "Tom"; // No Error (PUBLIC MEMBER)

    std::cout << "Cat Name: " << cat1.m_name << std::endl; // Tom

    point1.x = 5.6;
    point1.y = 6.7;

    printPoint(point1); // [x: 5.6, y: 6.7]

}