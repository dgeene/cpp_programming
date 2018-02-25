#include <iostream>
#include "TString.h"

int main() {

    TString str1("hello");
    TString str2; // default ctor
    TString str3(""); // empty
    TString str4(str1);

    std::cout << "length of str1: " << str1.length() << std::endl;
    std::cout << "length of str2: " << str2.length() << std::endl;
    std::cout << "str1 as char: " << str1.asChar() << std::endl;
    std::cout << "assign str1 to str2" << std::endl;
    str2.assign(&str1);
    std::cout << "str2 as char: " << str2.asChar() << std::endl;
    // TODO
    //length()
    //asChar()
    //...

    return 0;
}
