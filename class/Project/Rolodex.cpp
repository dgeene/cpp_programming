#include "Rolodex.h"
#include "Card.h"

void Rolodex::add(Card& card) {
    // dupes are allowed
    // TODO insert new card in correct alphabetical order
    mCollection.push_back(card);
}

/*
 * Go through the collection from beginning to end
 *  call display on each items contents
 */
void Rolodex::show(ostream& os) {
    list <Card> :: iterator iCard;
    for (iCard = mCollection.begin(); iCard != mCollection.end(); ++iCard) {
        iCard->show(os);
    }
}
