// 전역 변수가 필요한 상황
#include <iostream>

using namespace std;

int simObjCnt = 0;  // 전역 변수 선언 및 초기화
int cmxObjCnt = 0;  // 전역 변수 선언 및 초기화

class SoSimple {
public:
    SoSimple() {
        simObjCnt++;
        cout << simObjCnt << "번째 SoSimple 객체" << endl;
    }
};

class SoComplex {
public:
    SoComplex() {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
    SoComplex(SoComplex& copy) {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
    }
};

int main() {

    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();

    return 0;
}
