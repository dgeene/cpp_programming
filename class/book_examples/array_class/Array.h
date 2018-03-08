#include <iostream>

class Array {
    public:
        explicit Array(int = 10); // default ctor
    private:
    friend std::ostream& operator << (std::ostream&, const Array&);
    friend std::istream& operator << (std::istream&, Array&);
};
