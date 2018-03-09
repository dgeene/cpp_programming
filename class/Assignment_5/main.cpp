#include <iostream>
#include "Shape.h"

#include "Square.h"
using namespace std;

int main() {
    cout << "Enter a list of shapes OR - 'done' to end" << endl;
    string blue("red");
    double rad = 3;
    Shape* snape = new Square(blue, rad);
    cout << "the shape is: " << snape->toString() << endl;
}
