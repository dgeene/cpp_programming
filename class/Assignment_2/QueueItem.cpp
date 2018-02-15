#include "QueueItem.h"
#include <cstring>

QueueItem::QueueItem(const char *pData, int id) {
    //_data = *pData;
    std::strcpy(_data, pData);
    _itemId = id;
}

void QueueItem::setNext(QueueItem *pItem) {
    _pNext = pItem;
}

QueueItem* QueueItem::getNext() const {
    return _pNext;
}

int QueueItem::getId() const {
    return _itemId;
}

const char* QueueItem::getData() const {
    return _data;
}
