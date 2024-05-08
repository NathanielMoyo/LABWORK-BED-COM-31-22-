#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect;

    float length, width;
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    rect.setLength(length);
    rect.setWidth(width);

    std::cout << "Area of rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
