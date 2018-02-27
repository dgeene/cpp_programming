#include "RINT.h"

RINT::RINT(int num) {
    mNum = num;
}

/*
 * Overloaded output stream operator
 */
std::ostream& operator << (std::ostream& output, const RINT& num) {
    output << num.mNum;
    return output;
}
