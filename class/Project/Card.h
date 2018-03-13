#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card {
    public:
        Card(string fName, string lName, string occupation, string address, string phone);
        string show();
    private:
        string mLastName;
        string mFirstName;
        string mOccupation;
        string mAddress;
        string mPhone;
};

#endif
