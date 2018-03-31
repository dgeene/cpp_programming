/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Final Project
 */
#include <sstream>
#include "Rolodex.h"
#include "Card.h"

/*
 * Add a card to the rolodex.
 * Duplicates are allowed.
 */
void Rolodex::add(Card& card) {
    std::ostringstream oss;
    if (mCollection.empty() == 1) {
        mCollection.push_back(card);
        mSelected = mCollection.begin();
    } else {
        mSelected = this->insertAlphabeticallyAt(card);
    }
}

/*
 * Removes the current card from the rolodex and returns it.
 * Sets the next card as mSelected or wraps around if last removed.
 */
Card Rolodex::remove() {
    Card erased = *mSelected;
    vector <Card> :: iterator nextCard = mCollection.erase(mSelected);
    if (nextCard == mCollection.end()) {
        nextCard = mCollection.begin();
    }
    mSelected = nextCard;
    return erased;
}

/*
 * Flips to the next card or returns to beginning
 */
Card Rolodex::flip() {
    ++mSelected;
    if (mSelected == mCollection.end()) {
        mSelected = mCollection.begin();
    }
    return *mSelected;
}

/*
 * Returns the current selected card.
 */
Card Rolodex::getCurrentCard() {
    return *mSelected;
}

/*
 * Searches the rolodex for lastname firstname person.
 * If there are dupe entries then the first instance is found and returned.
 */
bool Rolodex::search(const std::string& lastName, const std::string& firstName) {
    bool found = false;

    if (mCollection.empty() != 1) {
        vector <Card> :: iterator iCard;
        for (iCard = mCollection.begin(); iCard != mCollection.end(); ++iCard) {
            if (lastName == iCard->getLastName() &&
                firstName == iCard->getFirstName() )
            {
                mSelected = iCard;
                found = true;
                break;
            }
        }
    }

    return found;
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
