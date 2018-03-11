/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape {
    public:
        Square(const string& color, double side) : Shape(color) {
            mSideLength = side;
        };
        double area();
        string toString();
    private:
        double mSideLength;
};

#endif
