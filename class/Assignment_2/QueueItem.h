class QueueItem {
    public:
        QueueItem(const char *pData, int id);
        void setNext(QueueItem *pItem);
        QueueItem* getNext() const;
        int getId() const;
        const char* getData() const;
    private:
        char _data[30]; // data value (null temrinated character string)
        int _itemId; // unique id for item in queue //TODO this needs to be a const
        QueueItem* _pNext; // next item in queue
};
