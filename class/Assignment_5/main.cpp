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

    if (myShapes[0] != NULL) {

        // print the list of shapes
        cout << endl << endl
        << "---------------------------------" << endl;
        cout << "The list of shapes entered" << endl;
        for (int i = 0; i < SIZE; i++) {
            if (myShapes[i] == NULL)
                break;
            cout << myShapes[i]->toString() << endl;
        }

        // now sort the list
        for (int i = 0; i < SIZE; i++) {
            if (myShapes[i] == NULL)
                break;
            for (int j = 0; j < SIZE; j++) {
                if (myShapes[j+1] == NULL) // peek ahead
                    break;
                if (myShapes[j]->area() > myShapes[j+1]->area()) {
                    Shape* tmp = myShapes[j];
                    myShapes[j] = myShapes[j+1];
                    myShapes[j+1] = tmp;
                }
            }
        }


        // print the list of shapes
        cout << endl << endl
        << "---------------------------------" << endl;
        cout << "The list of shapes sorted" << endl;
        for (int i = 0; i < SIZE; i++) {
            if (myShapes[i] == NULL)
                break;
            cout << myShapes[i]->toString() << endl;
        }
    }

    cout << "end" << endl;
}
