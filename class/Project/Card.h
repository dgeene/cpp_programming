/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Final Project
 */
#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

/*
 * Data container class to hold a single card.
 * A card holds the name and contact information for a single person.
 */
class Card {
    public:
        Card(string fName, string lName, string occupation, string address, string phone);
        void show(ostream& os);

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
