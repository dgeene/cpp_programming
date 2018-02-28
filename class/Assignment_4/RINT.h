#include <iostream>

class RINT {
    public:
        RINT(int num = 0);
        friend RINT operator + (const RINT &num1, const RINT &num2);
        friend RINT operator - (const RINT &num1, const RINT &num2);
        friend std::ostream& operator << (std::ostream&, const RINT&);
        friend std::istream& operator >> (std::istream&, RINT &num);
    private:
        int mNum;
};
