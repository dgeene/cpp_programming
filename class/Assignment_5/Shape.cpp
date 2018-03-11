/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#include "Shape.h"
#include <string>

using std::string;

/*
 * Returns the color. This method is never overidden. It's lonely down here
 */
string Shape::getColor() const {
    return mColor;
}
