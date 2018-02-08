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

const char *Date::getMonthName() {
    const char *name;

    switch(mMonth) {
        case 1:
            name = "January";
            break;
        case 2:
            name = "February";
            break;
        case 3:
            name = "March";
            break;
        case 4:
            name = "April";
            break;
        case 5:
            name = "May";
            break;
        case 6:
            name = "June";
            break;
        case 7:
            name = "July";
            break;
        case 8:
            name = "August";
            break;
        case 9:
            name = "September";
            break;
        case 10:
            name = "October";
            break;
        case 11:
            name = "November";
            break;
        case 12:
            name = "December";
            break;
        default:
            name = "Unknown Month!";
            break;
    }

    return name;
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

/*
 * Prints the date in long format February 2, 2018
 */
void Date::printLong() {
    cout << "printlong" << endl;
}
