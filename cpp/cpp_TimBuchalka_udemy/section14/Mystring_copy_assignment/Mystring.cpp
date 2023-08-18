#include <iostream>
#include <cstring>
#include "Mystring.h"

// no-args constructor
Mystring::Mystring()
    : str {nullptr} {
        str = new char[1];
        *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char* s)
    : str {nullptr} {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring& source)
    : str {nullptr} {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete[] str;
}

// Copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] this->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

// Displat method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const {
    return strlen(str);
}

// string getter
const char* Mystring::get_str() const {
    return str;
}
