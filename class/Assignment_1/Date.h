/*
 * David Geene
 * INFO 2680-061 - C++ Programming
 * Assignment 1
 *
 * The date object can represent a date between January 1st 1900
 *  and beyond. The object is based on the Gregorian calendar and thus obeys
 *  the rules of that calendar. For simplicity the month of February
 *  is assumed to always have 28 days.
 */
class Date
{
    private:
        int mMonth, mDay, mYear;
        bool isValidDayOfMonth(int day);
    public:
        Date();
        Date(int month, int day, int year);
        const char *getMonthName();
        void print();
        void printLong();
        int getDay() { return mDay; }
        int getMonth() { return mMonth; }
        int getYear() { return mYear; }
};
