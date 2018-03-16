#ifndef ROLO_H
#define ROLO_H
#include <list>
#include "Card.h"

class Rolodex {
    public:
        //Rolodex(); // why does this cause g++ error - Undefined symbols for architecture x86_64: and ld error?
        void add(Card& card);
    private:
        list <Card> collection;
        list <Card> :: iterator selected;
};
#endif
