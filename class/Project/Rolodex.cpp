#include <sstream>
#include <iostream> // temporary
#include "Rolodex.h"
#include "Card.h"

void Rolodex::add(Card& card) {
    // dupes are allowed
    // TODO insert new card in correct alphabetical order
    if (mCollection.empty() == 1) {
        mCollection.push_back(card);
        mSelected = mCollection.end();
    } else {
        this->shouldInsertAlphabeticallyAt(card);
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
 *
 * String comparisons: a < b
 */
vector <Card> :: iterator Rolodex::shouldInsertAlphabeticallyAt(Card& card) {
    vector <Card> :: iterator position;
    position = mCollection.begin();
    while(true) {
        if (position == mCollection.end()) {
            // we reached the end. insert at the end.
            mCollection.push_back(card);
            break;
        }

        if (card.getLastName() < position->getLastName()) {
            mCollection.insert(position, card);
            break;
        } else if (card.getLastName() > position->getLastName()){
            ++position;
            continue;
        } else if (card.getLastName() == position->getLastName()) {
            // last names are equal sort by first name then
            if (card.getFirstName() < position->getFirstName()) {
                mCollection.insert(position, card);
                break;
            } else if (card.getFirstName() > position->getFirstName()){
                ++position;
                continue;
            } else if (card.getFirstName() == position->getFirstName()) {
                std::cout << " found duplicate name  " << std::endl;
                mCollection.insert(position, card);
                break;
            }
            break;
        }


    }
    return position;
}
