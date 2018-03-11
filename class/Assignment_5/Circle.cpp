/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#include "Circle.h"
#include <cmath>
#include <sstream>
#define PI 3.14159

/*
 * Get the area of the circle NOTE: return value not rounded.
 */
double Circle::area() {
    return std::pow(mRadius, 2) * PI;
}

/*
 * String stream describing the circle
 */
string Circle::toString() {
    std::ostringstream oss;
    oss << this->getColor()
        << " circle with a radius of "
        << this->mRadius << " and an area of " << this->area();
    return oss.str();
}
