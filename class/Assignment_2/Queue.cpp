#include "Queue.h"

Queue::Queue() {
    _itemCounter = 0;
}

Queue::~Queue() {
}

void Queue::addItem(const char *pData) {
    QueueItem *pItem = new QueueItem(pData, ++_itemCounter);

    if (_pHead == 0) {
        _pHead = _pTail = pItem;
    } else {
        // link new item to the tail of the list
    }

}
