#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape {
    public:
        Circle(const string& color, double radius) : Shape(color) {
            mRadius = radius;
        };
        double area();
        string toString();
    private:
        double mRadius;
};

#endif
