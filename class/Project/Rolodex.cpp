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

vector <Card> :: iterator Rolodex::shouldInsertAlphabeticallyAt(Card& card) {
    vector <Card> :: iterator position;
    for (position = mCollection.begin(); position != mCollection.end(); ++position) {
        if (card.getLastName() > position->getLastName()) {
            std::cout << card.getLastName() << " is greater than " << position->getLastName() << std::endl;
        } else {
            std::cout << card.getLastName() << " is less than " << position->getLastName() << std::endl;

        }
    }
    return position;
}
