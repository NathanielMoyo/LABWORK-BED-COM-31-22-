#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle(); // Default constructor
        Circle(float r); // Overloaded constructor
        ~Circle(); // Destructor

        // Accessor methods
        void setRadius(float r);
        float getRadius() const;
    };
}

#endif // CIRCLE_H
