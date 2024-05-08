#include <iostream>
#include "RectangleClasses.h"

int main() {
    // Create first instance of RectangleClasses using default constructor
    RectangleClasses rect1;

    float length1, width1;
    std::cout << "Enter length of rectangle 1: ";
    std::cin >> length1;
    std::cout << "Enter width of rectangle 1: ";
    std::cin >> width1;

    rect1.setLength(length1);
    rect1.setWidth(width1);

    std::cout << "Area of rectangle 1: " << rect1.calculateArea() << std::endl;

    // Create second instance of RectangleClasses using overloaded constructor
    float length2, width2;
    std::cout << "Enter length of rectangle 2: ";
    std::cin >> length2;
    std::cout << "Enter width of rectangle 2: ";
    std::cin >> width2;

    RectangleClasses rect2(length2, width2);

    std::cout << "Area of rectangle 2: " << rect2.calculateArea() << std::endl;

    return 0;
}
