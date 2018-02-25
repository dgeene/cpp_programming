#include <iostream>
#include "TString.h"

int main() {

    TString str1("hello");
    TString str2; // default ctor
    TString str3(""); // empty
    TString str4(str1);
    TString str5("yoyoyoyoyo");

    std::cout << "length of str1: " << str1.length() << std::endl;
    std::cout << "length of str2: " << str2.length() << std::endl;
    std::cout << "str1 as char: " << str1.asChar() << std::endl;
    std::cout << "assign str1 to str2" << std::endl;
    str2.assign(&str1);
    std::cout << "str2 as char: " << str2.asChar() << std::endl;
    std::cout << "assign str5 to str2" << std::endl;
    str2.assign(str5.asChar());
    std::cout << "str5 as char: " << str5.asChar() << std::endl;
    std::cout << "str2 and str5 are qual?: " << str2.equals(&str5) << std::endl;
    std::cout << "searching for 'l' in str1: " << str1.indexOf('g') << std::endl;
    // TODO
    //length()
    //asChar()
    //...

    return 0;
}
