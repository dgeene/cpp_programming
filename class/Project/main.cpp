#include <iostream>
#include <sstream>
#include "Rolodex.h"
#include "Card.h"

using std::cout;

int main() {
    cout << "Rolodex program" << std::endl;
    std::ostringstream oss;
    Rolodex rolo;

    Card c1 = Card("John", "Doe", "Welder", "21 Brown Street", "555-555-5555");
    Card c2 = Card("Sara", "Weathers", "Accountant", "100 Bling St.", "535-422-5555");

    rolo.add( c1 );
    rolo.add( c2 );

    cout << "First | Last | Occupation " << std::endl;
    rolo.show(oss);
    cout << oss.str();

    //Card curr = rolo.getCurrentCard();
    //urr.show(oss);
    //cout << oss.str();
}
