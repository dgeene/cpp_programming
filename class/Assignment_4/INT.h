#include <iostream>

class INT {
    public:
        /* TODO add explicit*/INT(int num = 0);
        operator int() const;
        friend std::ostream& operator << (std::ostream&, const INT&);
    private:
        int mNum;
};
