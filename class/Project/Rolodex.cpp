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
    position = mCollection.begin();
    bool positionFound = false;
    while(!positionFound) {
        if (card.getLastName() < position->getLastName()) {
            // we overstepped. back up and insert at this position
            //--position;
            mCollection.insert(position, card);
            //++position;
            break;
        } else if (card.getLastName() > position->getLastName()){
            ++position;
            //continue;
            break;

        } else if (card.getLastName() == position->getLastName()) {
            // last names are equal sort by first name then
            std::cout << " last names are equivalent  " << std::endl;
            break;
        }

        // we reached the end. insert at the end.
        if (position == mCollection.end()) {
            std::cout << " breaking out " << std::endl;
            mCollection.push_back(card);
            break;
        }
    }
    return position;
}
