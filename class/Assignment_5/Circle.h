#include "Shape.h"

class Circle : public Shape {
    public:
        Circle(const string& color, double radius) : Shape(color) {
            mRadius = radius;
        };
    private:
        double mRadius;
};
