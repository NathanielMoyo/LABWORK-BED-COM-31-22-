#include "Square.h"

namespace shapes {
    Square::Square() {
        sideLength = 0.0;
    }

    Square::Square(float side) {
        sideLength = side;
    }

    Square::~Square() {
        // Destructor placeholder
    }

    void Square::setSideLength(float side) {
        sideLength = side;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}
