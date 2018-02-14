#include "QueueItem.h"

QueueItem::QueueItem(const char *pData, int id) {
    _data = *pData;
    _itemId = id;
}

void QueueItem::setNext(QueueItem *pItem) {
    _pNext = pItem;
}

QueueItem* QueueItem::getNext() {
    return _pNext;
}

int QueueItem::getId() {
    return _itemId;
}

const char* QueueItem::getData() {
    return _data;
}
