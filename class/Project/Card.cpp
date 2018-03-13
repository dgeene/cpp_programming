#include "Card.h"
#include <string>
#include <sstream>

using namespace std;

Card::Card(string fName, string lName, string occupation, string address, string phone) {

}

string Card::show() {
    std::ostringstream oss;
    oss << "This is a card";
    return oss.str();
}
