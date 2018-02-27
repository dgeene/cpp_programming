#include <iostream>

class RINT {
    public:
        RINT(int num = 0);
        friend std::ostream& operator << (std::ostream&, const RINT&);
    private:
        int mNum;
};
