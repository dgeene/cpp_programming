#include "QueueItem.h"

class Queue {
    public:
        Queue();
        ~Queue();
        void addItem(const char *pData); // add to the tail
        void removeItem(); // remove from the head
        void print();
        // TODO erase the queue
    private:
        QueueItem *_pHead; // the first QueueItem in the list
        QueueItem *_pTail; // the last item
        int _itemCounter;
};
