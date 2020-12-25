/* 이론 문제
Q9
다음의 friend 선언과 main() 함수의 isZero()의 호출이 옳은지 설명하라.
*/
#include <iostream>

using namespace std;

class Sample {
public:
    int x;
    Sample(int x) { this->x = x; }
    friend bool isZero(Sample& a) {  // 외부 함수 isZero()는 friend 선언으로 Sample 클래스 내부에 구현되어 있다.
        if (a.x == 0) return true;
        else return false;
    }
};

int main() {
    Sample a(5), b(6);
//  bool ret = a.isZero(b); // Sample 클래스의 friend 외부 함수 isZero()를 클래스 멤버 함수 형식으로 호출하였다. 오류 발생
    cout << boolalpha;
    cout << isZero(a) << endl;
    cout << isZero(b) << endl;

    return 0;
}
