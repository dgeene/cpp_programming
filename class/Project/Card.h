#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card {
    public:
        Card(string fName, string lName, string occupation, string address, string phone);
        string show();

        // setters
        void setFirstName(string fName) { mFirstName = fName; }
        void setLastName(string lName) { mLastName = lName; }
        void setOccupation(string occupation) { mOccupation = occupation; }
        void setAddress(string address) { mAddress = address; }
        void setPhone(string phone) { mPhone = phone; }

        // getters
        string getFirstName() { return mFirstName; }
        string getLastName() { return mLastName; }
        string getOccupation() { return mOccupation; }
        string getAddress() { return mAddress; }
        string getPhone() { return mPhone; }
    private:
        string mLastName;
        string mFirstName;
        string mOccupation;
        string mAddress;
        string mPhone;
};

#endif
