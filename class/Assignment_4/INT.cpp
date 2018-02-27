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

/*
 * Overloaded output stream operator
 */
std::ostream& operator << (std::ostream& output, const INT& num) {
    output << num.mNum;
    return output;
}
