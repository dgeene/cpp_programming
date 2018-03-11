/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 5
 */
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using std::string;

class Shape {
    public:
        Shape(const string& color)
        {
            mColor = color;
        };
        string getColor() const;
        virtual double area() = 0;
        virtual string toString() = 0;
    private:
        string mColor;
};

#endif
