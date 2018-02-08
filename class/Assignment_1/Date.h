class Date
{
    private:
        int mMonth, mDay, mYear;
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
