/* 이론 문제
Q10
다음 코드에서 프렌드 선언이 필요한지 설명하라.
*/
#include <iostream>

using namespace std;

class Sample {
public:
    int x;
    Sample(int x) { this->x = x; }
//  friend bool isZero(Sample& a);
};

bool isZero(Sample& a) {
    if (a.x == 0) return true;
    else return false;
}

/*
Sample 클래스에 friend 선언된 외부 함수 isZero()는 Sample 클래스의 public 멤버 변수에
접근하여 해당 사용하고 있으므로 friend 선언이 필요하지 않다.

*/
