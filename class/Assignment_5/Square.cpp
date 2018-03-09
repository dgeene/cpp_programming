#include "Square.h"
#include <cmath>
#include <sstream>

double Square::area() {
    return std::pow(mSideLength, 2);
}

/*
 * String stream describing the square
 */
string Square::toString() {
    std::ostringstream oss;
    oss << this->getColor()
        << " square with a side length of "
        << this->mSideLength << " and an area of " << this->area();
    return oss.str();
}
