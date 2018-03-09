#include "Circle.h"
#include <cmath>
#define PI 3.14159

/*
 * Get the area of the circle NOTE: return value not rounded.
 */
double Circle::area() {
    return std::pow(mRadius, 2) * PI;
}

string Circle::toString() {
    return string("this is a circle");
}
