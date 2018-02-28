#include <iostream>

class RINT {
    public:
        RINT(int num = 0);
        friend std::ostream& operator << (std::ostream&, const RINT&);
        friend std::istream& operator >> (std::istream&, RINT &num);
    private:
        int mNum;
};
