#include "TString.h"
#include <iostream>
#include <string.h>

TString::TString(const char *pText) {
    if (pText != 0 && pText[0] != '\0') {
        this->mLength = strlen(pText);
        this->mpText = new char[this->mLength];
        strcpy(this->mpText, pText);
    } else {
        this->mLength = 1;
        this->mpText = new char[this->mLength]; // TODO add \0
    }

}

TString::TString(const TString *string) {
    std::cout << "copy ctor called" << std::endl;
    this->mLength = string->length();
    this->mpText = new char[this->mLength];
    strcpy(this->mpText, string->asChar());
}

TString::~TString() {
    delete this->mpText;
    this->mpText = 0;
    this->mLength = 0;
}

/*
 * Assign one TString's character data to another
 */
void TString::assign(const TString *strObj) {
    if (this == strObj)
        return;

    delete this->mpText;
    this->mLength = strObj->length();
    this->mpText = new char[this->mLength];
    strcpy(this->mpText, strObj->asChar());
}

/*
 * Assign one TString's character data to another
 */
void TString::assign(const char *str) {
    if (this->mpText == str)
        return;

    delete this->mpText;
    this->mLength = strlen(str);
    this->mpText = new char[this->mLength];
    strcpy(this->mpText, str);
}

/*
 * Compares two TString objects to see if they are the same
 */
bool TString::equals(const TString *strObj) const {
    if (strcmp(this->mpText, strObj->asChar()) == 0) {
        return true;
    } else {
        return false;
    }
}

/*
 * Return the length of the charactr string
 */
int TString::length() const {
    return this->mLength;
}

/*
 * Returns object as a char array reference
 */
const char *TString::asChar() const {
    return mpText;
}