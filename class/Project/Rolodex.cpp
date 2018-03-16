#include "Rolodex.h"
#include "Card.h"

void Rolodex::add(Card& card) {
    // dupes are allowed
    // todo insert new card in correct alphabetical order
    collection.push_back(card);
}
