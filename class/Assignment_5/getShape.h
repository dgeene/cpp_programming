/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using std::cout;
using std::endl;
using std::cin;

/*
 * Prompt the user to enter a shape color and type.
 * Additional prompts will be asked for certain shape properties
 * Returns NULL is 'done' is entered or an invalid shape type is entered
 */
Shape* getShape() {
    string color; // shape color
    string type;  // shape type
    Shape* myShape = NULL;


    cout << "Enter the shapes color  (or 'done')" << endl;
    cin >> color;
    if (color == "done") {
        return myShape;
    }

    cout << "Enter the shape type.. Options are [ circle | square | rectangle ]" << endl;
    cin >> type;
    if (type == "circle") {
        double radius;
        cout << "Enter the radius.." << endl;
        cin >> radius;
        myShape = new Circle(color, radius);
    } else if (type == "square") {
        double side;
        cout << "Enter the length of a side.." << endl;
        cin >> side;
        myShape = new Square(color, side);
    } else if (type == "rectangle") {
        double length;
        double width;
        cout << "Enter the width.." << endl;
        cin >> width;
        cout << "Enter the length.." << endl;
        cin >> length;
        myShape = new Rectangle(color, width, length);
    }
    return myShape;
}
