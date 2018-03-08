#include "Shape.h"
#include <string>

using std::string;

/*Shape::Shape(color) { //Shape::Shape(const string& color) {
    mColor = color;
}*/

string Shape::getColor() const {
    return mColor;
}
