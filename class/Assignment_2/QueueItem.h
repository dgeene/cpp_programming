/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 2
 */
class QueueItem {
    public:
        QueueItem(const char *pData, int id);
        void setNext(QueueItem *pItem);
        QueueItem* getNext() const; // returns the next queueItem
        int getId() const; // gets the unique id number
        const char* getData() const;
    private:
        char _data[30]; // data value (null temrinated character string)
        int _itemId; // unique id for item in queue //TODO this needs to be a const
        QueueItem* _pNext; // next item in queue
};
