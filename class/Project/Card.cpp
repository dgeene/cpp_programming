/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Final Project
 */
#include "Card.h"
#include <string>
#include <sstream>

using namespace std;

Card::Card(string fName, string lName, string occupation, string address, string phone) {
    this->setFirstName(fName);
    this->setLastName(lName);
    this->setOccupation(occupation);
    this->setAddress(address);
    this->setPhone(phone);
}


/*
 * Fils an ostream buffer reference with details about the card
 */
void Card::show(ostream& os) {
    os << this->getFirstName() << " | "
        << this->getLastName() << " | "
        << this->getOccupation() << " | "
        << this->getAddress() << " | "
        << this->getPhone() << " | " << endl;
}
