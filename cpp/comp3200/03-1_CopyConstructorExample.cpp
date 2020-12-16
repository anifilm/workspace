#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char* mString;
    size_t mSize;

public:
    String(const char* str);
    String(const String& str);
    ~String();

    void Print();
};

String::String(const char* str)
    : mSize(strlen(str) + 1) {
        mString = new char[mSize];
        memcpy(mString, str, mSize);
}

String::String(const String& str)
    : mSize(str.mSize) {
        mString = new char[mSize];
        memcpy(mString, str.mString, mSize);
}

String::~String() {
    delete[] mString;
}

void String::Print() {
    cout << "Member string: " << mString << endl;
}

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|   Copy Constructor Example   |" << endl;
    cout << "+------------------------------+" << endl;

    String myName("John Doe");
    String myNameCopy(myName);

    myName.Print();
    myNameCopy.Print();

    return 0;
}
