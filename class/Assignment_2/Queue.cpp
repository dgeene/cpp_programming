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
 * Remove a single item from the head of the queue
 */
void Queue::removeItem() {
    if (_pHead != 0) {
        QueueItem *nextItem = _pHead->getNext();
        delete _pHead;
        if (nextItem != 0) {
            _pHead = nextItem;
        } else {
            _pHead = _pTail = 0;
            std::cout << "list now empty" << std::endl;
        }
    }
}

/*
 * Prints the queue to std out. includes the queue id and data
 */
void Queue::print() {
    std::cout << "---------Printing the Queue----------" << std::endl;

    if (_pHead != 0) {
        QueueItem *curItem = _pHead;
        QueueItem *nextItem = curItem->getNext();
        do {
            nextItem = curItem->getNext();
            std::cout << "Item: " << curItem->getId() << " - " << curItem->getData() << std::endl;
            curItem = nextItem;
        } while (nextItem != 0);
    } else {
        std::cout << "The queue is empty" << std::endl;
    }
}
