#include <iostream>
#include "getShape.h"
#include "Shape.h"

using namespace std;

int main() {

    Shape* myShape;

    cout << "Enter a list of shapes OR - 'done' to end" << endl;

    while (getShape() != NULL) {

    }

    cout << "end" << endl;
}
