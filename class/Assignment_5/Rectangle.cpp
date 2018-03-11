/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#include "Rectangle.h"
#include <sstream>

double Rectangle::area() {
    return mLength * mWidth;
}

/*
 * String stream describing the square
 */
string Rectangle::toString() {
    std::ostringstream oss;
    oss << this->getColor()
        << " rectangle with a length  of "
        << this->mLength << " and a width of " << this->mWidth
        << " and an area of " << this->area();
    return oss.str();
}
