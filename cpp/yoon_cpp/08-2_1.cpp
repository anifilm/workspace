// 기본 클래스의 포인터로 객체를 참조하면,
#include <iostream>

using namespace std;

class Base {
public:
    void BaseFunc() { cout << "Base Function" << endl; }
};

class Derived : public Base {
public:
    void DerivedFunc() { cout << "Derived Function" << endl; }
};

int main() {

    Base* bptr = new Derived();  // 업 캐스팅
    bptr->BaseFunc();
//  bptr->DerivedFunc();  // 오류! 기본 클래스 포인터로 파생 클래스의 함수를 실행할 수 없다.

    Derived* dptr = (Derived*)bptr;  // 다운 캐스팅 (형변환 필요)
    dptr->DerivedFunc();

    return 0;
}
