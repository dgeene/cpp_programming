#ifndef _TSTRING_H
#define _TSTRING_H

class TString {
    public:
        TString(const char *pText = 0);
        //TODO
    private:
        int mLength; // length of char data (does not include null terminator)
        char *mpText; // pointer to dynamic char array in heap
};

#endif
