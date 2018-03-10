#include <iostream>
#include "getShape.h"
#include "Shape.h"

using namespace std;

#define SIZE 10

int main() {

    Shape* myShapes[SIZE] = { 0 };

    cout << "Enter a list of shapes OR - 'done' to end" << endl;

    // prompt the user for shape input
    int count = 0;
    Shape* shapePtr;
    while (true) {
        shapePtr = getShape();
        if (shapePtr == NULL || count > SIZE)
            break;

        myShapes[count] = shapePtr;
        ++count;
    }

    // print the list of shapes
    if (myShapes[0] != NULL) {
        cout << endl << endl
        << "---------------------------------" << endl;
        cout << "The list of shapes entered" << endl;
        for (int i = 0; i < SIZE; i++) {
            if (myShapes[i] == NULL)
                break;
            cout << myShapes[i]->toString() << endl;
        }
    }

    cout << "end" << endl;
}
