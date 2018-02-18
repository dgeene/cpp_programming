#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue myQueue;

    //myQueue.removeItem();
    myQueue.addItem("red");
    myQueue.addItem("blue");
    myQueue.print();

    return 0;
}
