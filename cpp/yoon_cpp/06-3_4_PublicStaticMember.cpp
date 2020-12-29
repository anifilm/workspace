// static 멤버 변수의 또 다른 접근 방법
#include <iostream>

using namespace std;

class SoSimple {
public:
    static int simObjCnt;
    SoSimple() {
        simObjCnt++;
    }
};

int SoSimple::simObjCnt = 0;  // SoSimple 클래스 static 멤버 변수 초기화

int main() {

    cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
    SoSimple sim1;
    SoSimple sim2;

    // 같은 내용을 출력
    cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
    cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
    cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

    return 0;
}
