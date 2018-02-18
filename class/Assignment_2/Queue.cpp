#include <iostream>
#include "Queue.h"

Queue::Queue() {
    _itemCounter = 0;
    _pHead = _pTail = 0;
}

Queue::~Queue() {
}

void Queue::addItem(const char *pData) {
    QueueItem *pItem = new QueueItem(pData, ++_itemCounter);

    if (_pHead == 0) {
        _pHead = _pTail = pItem;
    } else {
        // link new item to the tail of the list
        _pTail->setNext(pItem);
        _pTail = pItem;
    }

}

/*
 * Prints the qeueu to std out. includes the queue id and data
 */
void Queue::print() {
    std::cout << "---------Printing the Queue----------" << std::endl;

    if (_pHead != 0) {
        QueueItem *curItem = _pHead;
        QueueItem *nextItem = curItem->getNext();
        do {
            std::cout << "Item: " << curItem->getId() << " - " << curItem->getData() << std::endl;
            curItem = curItem->getNext();
        } while (nextItem != 0);
    } else {
        std::cout << "The queue is empty" << std::endl;
    }
}
