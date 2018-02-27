#include <iostream>
#include "INT.h"

// a simpler test than the INTDemo and RINTDemo
int main() {
    INT x;
    INT y = 6;
    int a = 5, b = 2;

    x = a + b;
    x += 43;
    x -= 3;
    std::cout << "x = " << x << "  a = " << a << std::endl;

    a = x + --y;
    b = x++;

    std::cout << "x = " << x << "  y = " << y << std::endl;
    std::cout << "a = " << a << "  b = " << b << std::endl;

    std::cout << "The absolute value of x is " << abs(x) << std::endl;
}
