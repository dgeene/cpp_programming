#include <iostream>
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
    myQueue.print();

    return 0;
}
