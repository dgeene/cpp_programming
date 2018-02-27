#include <iostream>

class INT {
    public:
        /* TODO add explicit*/INT(int num = 0);
        //INT(const INT&); // copy ctor
        operator int() const;
        INT& operator += (unsigned int);
        INT& operator -= (unsigned int);
        INT& operator ++ ();   //prefix
        INT operator ++ (int); //postfix
        INT& operator -- ();   //prefix
        INT operator -- (int); //postfix
        friend std::ostream& operator << (std::ostream&, const INT&);
    private:
        int mNum;
};
