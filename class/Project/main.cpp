#include <iostream>
#include <sstream>
#include "Rolodex.h"
#include "Card.h"

using std::cout;

int main() {
    cout << "Rolodex program" << std::endl;
    std::ostringstream oss;
    Rolodex rolo;

    Card c1 = Card("Bill", "Dell", "Welder", "21 Brown Street", "555-555-5555");
    Card c2 = Card("Ben", "Carpenter", "Welder", "21 Brown Street", "555-555-5555");
    Card c3 = Card("John", "Bonbon", "Welder", "21 Brown Street", "555-555-5555");
    Card c4 = Card("Jane", "Applebee", "Accountant", "100 Bling St.", "535-422-5555");
    Card c5 = Card("Do", "Zed", "Accountant", "100 Bling St.", "535-422-5555");
    Card c6 = Card("Nash", "Jay", "Accountant", "100 Bling St.", "535-422-5555");
    Card c7 = Card("Ashley", "Bonbon", "Welder", "21 Brown Street", "555-555-5555");
    Card c8 = Card("Adam", "Bonbon", "Welder", "21 Brown Street", "555-555-5555");
    Card c9 = Card("Ashley", "Bonbon", "Welder", "21 Brown Street", "555-555-5555");




    rolo.add( c1 );
    rolo.add( c2 );
    rolo.add( c3 );
    rolo.add( c4 );
    rolo.add( c5 );
    rolo.add( c6 );
    rolo.add( c7 );
    rolo.add( c8 );
    rolo.add( c9 );

    cout << "First | Last | Occupation " << std::endl;
    //rolo.show(oss);
    //cout << oss.str();

    //Card curr = rolo.getCurrentCard();
    //urr.show(oss);
    //cout << oss.str();
}
