// 함수의 오버라이딩과 포인터 형
#include <iostream>

using namespace std;

class First {
public:
    void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First {
public:
    void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second {
public:
    void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main() {

    Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;

    fptr->MyFunc();  // FirstFunc
    sptr->MyFunc();  // SecondFunc
    tptr->MyFunc();  // ThirdFunc

    delete tptr;

    return 0;
}
