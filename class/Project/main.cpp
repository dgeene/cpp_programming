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

    rolo.add( c1 );
    //Card c1 = Card("John", "Doe", "Welder", "21 Brown Street", "555-555-5555");

    cout << "First | Last | Occupation " << std::endl;
    c1.show(oss);
    cout << oss.str();
}
