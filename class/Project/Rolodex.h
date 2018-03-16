#ifndef ROLO_H
#define ROLO_H
#include <vector>
#include "Card.h"

class Rolodex {
    public:
        //Rolodex(); // why does this cause g++ error - Undefined symbols for architecture x86_64: and ld error?
        void add(Card& card);
        void getCurrentCard();
        void show(ostream& os);
    private:
        vector <Card> mCollection;
        vector <Card> :: iterator mSelected;
};
#endif
