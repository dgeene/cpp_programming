#ifndef ROLO_H
#define ROLO_H
#include <list>
#include "Card.h"

class Rolodex {
    public:
        Rolodex();
    private:
        list <Card> collection;
}
#endif
