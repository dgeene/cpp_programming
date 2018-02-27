#include <iostream>
#include "INT.h"

// a simpler test than the INTDemo and RINTDemo
int main() {
    INT x;
    INT y = 6;
    int a = 5, b = 2;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    x = a + b;
    std::cout << "x = a + b = " << x << std::endl;

    x += 43;
    std::cout << "x += 43 = " << x << std::endl;

    x -= 3;
    std::cout << "x -= 43 = " << x << std::endl;

    ++x;
    std::cout << "++x = " << x << std::endl;

    x++;
    std::cout << "x++ = " << x << std::endl;

    --x;
    std::cout << "--x = " << x << std::endl;

    x--;
    std::cout << "x-- = " << x << std::endl;
}
