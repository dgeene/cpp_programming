class INT {
    public:
        INT(int num = 0) {
            mNum = num;
        }
        /*INT& operator = (const I& i) {
            num = i.num;
            return *this;
        }*/
        /*operator int() {
            return num;
        }*/
    private:
        int mNum;
};
