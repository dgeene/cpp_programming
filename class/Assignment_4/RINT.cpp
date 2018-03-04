#include "RINT.h"

RINT::RINT(int num) {
    mNum = num;
}

RINT RINT::operator - () {
    return RINT(-mNum);
}

RINT RINT::operator + () {
    return RINT(+mNum);
}

RINT operator + (const RINT &num1, const RINT &num2) {
    return RINT(num1.mNum + num2.mNum);
}

RINT operator - (const RINT &num1, const RINT &num2) {
    return RINT(num1.mNum - num2.mNum);
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
