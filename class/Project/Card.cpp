#include "Card.h"
#include <string>
#include <sstream>

using namespace std;

Card::Card(string fName, string lName, string occupation, string address, string phone) {
    this->setFirstName(fName);
}

////////// Setters ////////////
void Card::setFirstName(string fName) {
    mFirstName = fName;
}


////////// Getters ////////////
string Card::getFirstName() {
    return mFirstName;
}


string Card::show() {
    std::ostringstream oss;
    oss << this->getFirstName() << " | " << endl;
    return oss.str();
}
