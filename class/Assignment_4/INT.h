#include <iostream>

class INT {
    public:
        /* TODO add explicit*/INT(int num = 0);
        operator int() const;
        INT& operator += (unsigned int);
        INT& operator -= (unsigned int);
        friend std::ostream& operator << (std::ostream&, const INT&);
    private:
        int mNum;
};
