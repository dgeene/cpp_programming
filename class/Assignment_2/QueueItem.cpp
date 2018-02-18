/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 2
 */
#include "QueueItem.h"
#include <cstring>

QueueItem::QueueItem(const char *pData, int id) {
    std::strcpy(_data, pData);
    _itemId = id;
    _pNext = 0;
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
