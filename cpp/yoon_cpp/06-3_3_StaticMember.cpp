// static 멤버 변수 (클래스 변수)
#include <iostream>

using namespace std;

class SoSimple {
private:
    static int simObjCnt;
public:
    SoSimple() {
        simObjCnt++;
        cout << simObjCnt << "번째 SoSimple 객체" << endl;
    }
};

int SoSimple::simObjCnt = 0;  // SoSimple 클래스 static 멤버 변수 초기화

class SoComplex {
private:
    static int cmxObjCnt;
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

int SoComplex::cmxObjCnt = 0;  // SoComplex 클래스 static 멤버 변수 초기화

int main() {

    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();

    return 0;
}
