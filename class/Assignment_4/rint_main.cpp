#include <iostream>
#include "RINT.h"

using namespace std;

int main() {
    RINT x, y = 4;
    int a = 5, b = 2;

    cout << x << endl;
    cin >> x;
    cout << "x is now: " << x << endl;

    x = x + 1;
    cout << "x + 1 is now: " << x << endl;
    y = x - a;
    cout << "y = x - a is now: " << y << endl;

    x = 1;
    x = -x;
    cout << "x = -x: " << x << endl;

    x = +x;
    cout << "x = +x: " << x << endl;

    //x++;       // should generate error
    //y += 3;    // should generate error
}
