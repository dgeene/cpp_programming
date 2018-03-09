#include "Shape.h"
#include <string>

using std::string;

/*
 * Returns the color. This method is never overidden
 */
string Shape::getColor() const {
    return mColor;
}
