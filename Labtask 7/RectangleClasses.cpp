#include "RectangleClasses.h"

RectangleClasses::RectangleClasses() {
    length = 0.0;
    width = 0.0;
}

RectangleClasses::RectangleClasses(float len, float wid) {
    length = len;
    width = wid;
}

RectangleClasses::~RectangleClasses() {
    // Destructor does nothing for now
}

void RectangleClasses::setLength(float len) {
    length = len;
}

void RectangleClasses::setWidth(float wid) {
    width = wid;
}

float RectangleClasses::getLength() {
    return length;
}

float RectangleClasses::getWidth() {
    return width;
}

float RectangleClasses::calculateArea() {
    return length * width;
}
