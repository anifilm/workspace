// static 멤버 함수
#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1;
    static int num2;
public:
    SoSimple(int n) : num1(n) {}
    static void Adder(int n) {
        num1 += n;  // num1 은 static 멤버 변수가 아니기 때문에 접근 불가
        num2 += n;
    }
};

int SoSimple::num2 = 0;

/*

static 멤버 함수
  - 선언된 클래스의 모든 객체가 공유한다.
  - public으로 선언되면 클래스의 이름을 사용하여 호출 가능하다.
  - 객체의 멤버로 존재하는 것이 아니다.

static 멤버 함수 내에서는 static 멤버 변수와 static 멤버 함수에만 접근 가능하다.

*/
