// 가상 소멸자 (Virtual Destructor)
#include <iostream>
#include <cstring>

using namespace std;

class First {
private:
    char* strOne;
public:
    First(const char* str) {
        strOne = new char[strlen(str)+1];
    }
    virtual ~First() {  // 가상 소멸자 선언
        cout << "~First()" << endl;
        delete[] strOne;
    }
};

class Second : public First {
private:
    char* strTwo;
public:
    Second(const char* str1, const char* str2)
        : First(str1) {
            strTwo = new char[strlen(str2)+1];
    }
    virtual ~Second() {  // 가상 소멸자 선언
        cout << "~Second()" << endl;
        delete[] strTwo;
    }
};

int main() {

    First* ptr = new Second("simple", "complex");
    delete ptr;

    return 0;
}
