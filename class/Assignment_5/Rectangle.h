/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
    public:
        Rectangle(const string& color, double width, double length) : Shape(color) {
            mWidth = width;
            mLength = length;
        };
        double area();
        string toString();
    private:
        double mWidth;
        double mLength;
};

#endif
