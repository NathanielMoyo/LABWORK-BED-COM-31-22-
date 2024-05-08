#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor

    // Accessor methods
    void setLength(float len);
    void setWidth(float wid);
    float getLength();
    float getWidth();

    // Calculate area
    float calculateArea();
};

#endif // RECTANGLE_H
