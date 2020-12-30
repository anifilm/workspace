// 가상 함수 (Virtual Function)
#include <iostream>

using namespace std;

class First {
public:
    virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First {
public:
    virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second {
public:
    virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main() {

    Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;

    fptr->MyFunc();  // ThirdFunc
    sptr->MyFunc();  // ThirdFunc
    tptr->MyFunc();  // ThirdFunc

    delete tptr;

    return 0;
}
