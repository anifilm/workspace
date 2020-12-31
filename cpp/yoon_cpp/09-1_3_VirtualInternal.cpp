// 가상 함수의 동작 원리와 가상 함수 테이블
#include <iostream>

using namespace std;

class AAA {
private:
    int num1;
public:
    virtual void Func1() { cout << "Func1" << endl;}
    virtual void Func2() { cout << "Func2" << endl;}
};

class BBB : public AAA {
private:
    int num2;
public:
    virtual void Func1() { cout << "BBB::Func1" << endl;}
    void Func3() { cout << "Func3" << endl; }
};

int main() {

    AAA* aptr = new AAA();
    aptr->Func1();  // "Func1"

    BBB* bptr = new BBB();
    bptr->Func1();  // "BBB::Fun1"

    return 0;
}
