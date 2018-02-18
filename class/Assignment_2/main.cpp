#include <iostream>
/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 2
 */
#include "Queue.h"

using namespace std;

int main() {
    Queue myQueue;

    myQueue.removeItem();
    myQueue.addItem("red");
    myQueue.addItem("blue");
    myQueue.addItem("green");
    myQueue.addItem("orange");
    myQueue.print();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.addItem("banana");
    myQueue.addItem("pear");
    myQueue.addItem("grapes");
    myQueue.addItem("pomegranite");
    myQueue.print();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.print();
    myQueue.erase();
    myQueue.addItem("soccer");
    myQueue.addItem("gymnastics");
    myQueue.addItem("skiing");
    myQueue.print();
    myQueue.erase();
    myQueue.print();
        

    return 0;
}
