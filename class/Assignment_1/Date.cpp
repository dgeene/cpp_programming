/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 1
 */
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

    if (isValidDayOfMonth(day)) {
        mDay = day;
    } else {
        mDay = 1;
    }

}

/*
 * Returns the name of the month
 */
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
            name = "Invalid Month!";
            break;
    }

    return name;
}

/*
 * Validates that the day we enter for the given month is correct
 */
bool Date::isValidDayOfMonth(int day) {
    bool isValid = true;

    // obviously we cant have a day number less than 1
    if (day < 1) {
        return isValid = false;
    }

    switch(day) {
        case 2: // assume february always has 28 days
            if (day > 28) {
                isValid = false;
            }
            break;
        case 4: // months with 30 days
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                isValid = false;
            }
            break;
        default: // every other month has 31 days
            if (day > 31) {
                isValid = false;
            }
            break;
    }

    return isValid;
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
    cout << mDay << " " << getMonthName() << " " << mYear << endl;
}
