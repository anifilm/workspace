/* 이론 문제
Q5
다음 코드에서 컴파일 오류가 발생하는 곳을 있는 대로 골라라.
*/
#include <iostream>

class A {
private:
    int s, x;
protected:
    void setX(int x) { this->x = x; }
    void setS(int s) { this->s = s; }
};

class B : private A {
private:
    int y;
public:
    void setXY(int a, int b, int s) {
        x = a;  // 상속 받은 A 클래스의 private 멤버 변수 이므로 접근 불가
        y = b;
        setS(s);  // 상속 받은 A 클래스의 protected 멤버 함수 이므로 클래스 B 내부에서 사용 가능 (외부에서는 private로 접근 불가)
    }
};
