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

Date::Date(int month, int day, int year) {
    // TODO do validation
    if (month < 1 || month > 12) {
        mMonth = 1;
    } else {
        mMonth = month;
    }

    if (year < 1900) {
        mYear = 1900;
    } else {
        mYear = year;
    }

    mDay = day;
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
