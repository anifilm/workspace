// this 포인터의 이해
#include <iostream>
#include <cstring>

using namespace std;

class SoSimple {
private:
    int num;
public:
    SoSimple(int n) : num(n) {
        cout << "num = " << num << ", ";
        cout << "address = " << this << endl;
    }
    void ShowSimpleData() {
        cout << num << endl;
    }
    SoSimple* GetThisPointer() {
        return this;
    }
};

int main() {

    SoSimple sim1(100);
    SoSimple* ptr1 = sim1.GetThisPointer();     // sim1 객체의 주소값 저장
    cout << ptr1 << ", ";
    ptr1->ShowSimpleData();

    SoSimple sim2(200);
    SoSimple* ptr2 = sim2.GetThisPointer();     // sim2 객체의 주소값 저장
    cout << ptr2 << ", ";
    ptr2->ShowSimpleData();

    return 0;
}

/*

소스코드와 실행결과를 통해서 this는 객체자신의 주소값을 의미한다는 사실을 확인할 수 있다.
this 포인터는 그 주소값과 자료형이 정해져 있지 않은 포인터이다.

0x12FF번지에 할당된 SoSimple 객체 내에서 사용이 되면, this는 SoSimple형의 포인터이며
값은 0x12FF를 의미하게 되고,

0x52AA번지에 할당된 SoComplex 객체 내에서 사용이 되면, this는 SoComplex형의 포인터이며
그 값은 0x52AA번지를 의미하게 된다.

*/
