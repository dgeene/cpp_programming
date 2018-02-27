#include "INT.h"

INT::INT(int num) {
    mNum = num;
}

/* TODO not working

g++ main.cpp INT.cpp
main.cpp:7:9: error: no viable conversion from 'int' to 'INT'
    INT y = 6;
        ^   ~
./INT.h:3:7: note: candidate constructor (the implicit copy constructor) not viable: no
      known conversion from 'int' to 'const INT &' for 1st argument
class INT {
      ^
1 error generated.

INT::operator int() const {
    return mNum;
}*/

INT& INT::operator += (unsigned int numToAdd) {
    mNum = mNum + numToAdd;
    return *this;
}

INT& INT::operator -= (unsigned int numToSubtract) {
    mNum = mNum - numToSubtract;
    return *this;
}

// prefix ++x
INT& INT::operator ++ () {
    mNum = mNum + 1;
    return *this;
}

// postfix x++
INT INT::operator ++ (int) {
    INT temp = *this; // cpp11|14 INT temp{*this};
    mNum = mNum + 1;
    return temp;
}

/*
 * Overloaded output stream operator
 */
std::ostream& operator << (std::ostream& output, const INT& num) {
    output << num.mNum;
    return output;
}
