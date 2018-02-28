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

/*
 * Overloaded input stream
 */
std::istream& operator >> (std::istream& input, RINT &num) {
    input >> num.mNum;
    return input;
}
