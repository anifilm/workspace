#include <iostream>
#include <cstring>
#include <cctype>
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
        std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring&& source)
    : str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;

}

// Destructor
Mystring::~Mystring() {
    // if (str == nullptr) {
    //     std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
    // } else {
    //     std::cout << "Calling destructor for Mystring : " << str << std::endl;
    // }
    delete [] str;
}

// Copy assignment operator
Mystring& Mystring::operator=(const Mystring& rhs) {
    std::cout << "Using copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment operator
Mystring& Mystring::operator=(Mystring&& rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Make lowercase
Mystring operator-(const Mystring& obj) {
    char* buff = new char[strlen(obj.str) + 1];
    strcpy(buff, obj.str);

    for (size_t i = 0; i < strlen(buff); i++)
        buff[i] = tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatentate
Mystring operator+(const Mystring& lhs, const Mystring& rhs) {
    char* buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete[] buff;
    return temp;
}

// Equality
bool operator==(const Mystring& lhs, const Mystring& rhs) {
    return (strcmp(lhs.str, rhs.str) == 0);
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
