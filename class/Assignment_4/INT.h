#include <iostream>

class INT {
    public:
        INT(int num = 0);
        friend std::ostream& operator << (std::ostream&, const INT&);
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
