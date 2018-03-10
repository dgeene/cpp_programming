#include <iostream>
#include "Shape.h"

using std::cout;
using std::endl;
using std::cin;

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
    } else if (type == "square") {
        double side;
        cout << "Enter the length of a side.." << endl;
        cin >> side;
    } else if (type == "rectangle") {
        double length;
        double width;
        cout << "Enter the width.." << endl;
        cin >> width;
        cout << "Enter the length.." << endl;
        cin >> length;
    }
    return myShape;
}
