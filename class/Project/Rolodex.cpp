#include <sstream>
#include <iostream> // temporary
#include "Rolodex.h"
#include "Card.h"
#include <sstream> // tem[p]
void Rolodex::add(Card& card) {
    std::ostringstream oss;
    // dupes are allowed
    // TODO insert new card in correct alphabetical order
    if (mCollection.empty() == 1) {
        mCollection.push_back(card);
        mSelected = mCollection.begin();
        //mSelected->show(oss);
        cout << mSelected->getLastName() << std::endl;
    } else {
        mSelected = this->insertAlphabeticallyAt(card);
        Card a = this->getCurrentCard();
        cout << a.getLastName() << std::endl;
        //mSelected->show(oss);
        cout << oss.str();
    }
}

Card Rolodex::getCurrentCard() {
    return *mSelected;
}

/*
 * Go through the collection from beginning to end
 *  call display on each items contents
 */
void Rolodex::show(ostream& os) {
    if (mCollection.empty() != 1) {
        vector <Card> :: iterator iCard;
        for (iCard = mCollection.begin(); iCard != mCollection.end(); ++iCard) {
            iCard->show(os);
        }
    } else {
        os << "The rolodex is empty!" << std::endl;
    }

}

/*
 * Insert a card into the rolodex alphabetically.
 * Duplicates are allowed
 * String comparisons: a < b
 * Returns the current position that the element was inserted at
 */
vector <Card> :: iterator Rolodex::insertAlphabeticallyAt(Card& card) {
    vector <Card> :: iterator position;
    position = mCollection.begin();
    while(true) {
        if (position == mCollection.end()) {
            // we reached the end. insert at the end.
            mCollection.push_back(card);
            position = mCollection.insert(mCollection.end(), card);
            break;
        }

        if (card.getLastName() < position->getLastName()) {
            position = mCollection.insert(position, card);
            break;
        } else if (card.getLastName() > position->getLastName()){
            ++position;
            continue;
        } else if (card.getLastName() == position->getLastName()) {
            // last names are equal insert by first name then
            if (card.getFirstName() < position->getFirstName()) {
                position = mCollection.insert(position, card);
                break;
            } else if (card.getFirstName() > position->getFirstName()){
                ++position;
                continue;
            } else if (card.getFirstName() == position->getFirstName()) {
                position = mCollection.insert(position, card);
                break;
            }
            break;
        }


    }
    return position;
}
