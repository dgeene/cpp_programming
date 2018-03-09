#include <iostream>
#include "Shape.h"

#include "Circle.h"
using namespace std;

int main() {
    cout << "Enter a list of shapes OR - 'done' to end" << endl;
    string blue("blue");
    double rad = 0.5;
    Shape* snape = new Circle(blue, rad);
}
