#include <iostream>

#include "point.hpp"

int main()
{
    std::cout << "Hello world" << std::endl;

    constexpr Point point(0.0, 10.0);
    std::cout << "p( " << point.x() << ", " << point.y() << " )" << std::endl;
}