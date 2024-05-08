#ifndef RECTANGLECLASSES_H
#define RECTANGLECLASSES_H

class RectangleClasses {
private:
    float length;
    float width;

public:
    RectangleClasses(); // Default constructor
    RectangleClasses(float len, float wid); // Overloaded constructor
    ~RectangleClasses(); // Destructor

    // Accessor methods
    void setLength(float len);
    void setWidth(float wid);
    float getLength();
    float getWidth();

    // Calculate area
    float calculateArea();
};

#endif // RECTANGLECLASSES_H
