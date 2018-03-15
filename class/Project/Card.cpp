#include "Card.h"
#include <string>
#include <sstream>

using namespace std;

Card::Card(string fName, string lName, string occupation, string address, string phone) {
    this->setFirstName(fName);
    this->setLastName(lName);
    this->setOccupation(occupation);
    this->setAddress(occupation);
    this->setPhone(phone);
}


string Card::show() {
    std::ostringstream oss;
    oss << this->getFirstName() << " | " << this->getLastName() << " | " << endl;
    return oss.str();
}
