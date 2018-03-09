#include <iostream>
#include "Shape.h"

#include "Rectangle.h"
using namespace std;

int main() {
    cout << "Enter a list of shapes OR - 'done' to end" << endl;
    string blue("red");
    double w = 3;
    double l = 4;
    Shape* snape = new Rectangle(blue, w, l);
    cout << "the shape is: " << snape->toString() << endl;
}
