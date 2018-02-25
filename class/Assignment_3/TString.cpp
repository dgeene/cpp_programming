#include "TString.h"
#include <iostream>
#include <string.h>

TString::TString(const char *pText) {
    if (pText != 0 && pText[0] != '\0') {
        this->mLength = strlen(pText);
        this->mpText = new char[mLength];
        strcpy(this->mpText, pText);
    } else {
        this->mLength = 1;
        this->mpText = new char[mLength]; // TODO add \0
    }

}

TString::TString(const TString *string) {
    std::cout << "copy ctor called" << std::endl;
}

TString::~TString() {
    delete this->mpText;
    this->mpText = 0;
    this->mLength = 0;
}

/*
 * Return the length of the charactr string
 */
int TString::length() const {
    return this->mLength;
}