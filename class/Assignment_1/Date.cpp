#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;


Date::Date() {
    mMonth = 1;
    mDay = 1;
    mYear = 2000;
}

/*
 * Prints the date to stdout in the form mm/dd/yyyy
 */
void Date::print() {
        cout
            << setfill('0') << setw(2) << mMonth << "/"
            << setfill('0') << setw(2) << mDay << "/"
            << mYear <<  endl;
}
