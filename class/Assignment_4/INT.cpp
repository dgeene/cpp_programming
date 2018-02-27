#include "INT.h"

INT::INT(int num) {
    mNum = num;
}

/*
 * Overloaded output stream operator
 */
std::ostream& operator << (std::ostream& output, const INT& num) {
    output << num.mNum;
    return output;
}
