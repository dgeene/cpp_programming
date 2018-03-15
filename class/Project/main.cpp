#include <iostream>
#include "Card.h"

using std::cout;

int main() {
    cout << "Rolodex program" << std::endl;
    Card mine = Card("John", "Doe", "Welder", "21 Brown Street", "555-555-5555");

    cout << "First | Last | Occupation " << std::endl;
    cout << mine.show();
}
