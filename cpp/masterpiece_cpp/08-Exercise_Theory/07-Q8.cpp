/* 이론 문제
Q8
다음 클래스 A, B와 변수가 선언되어 있을 때 물음에 답하라.
*/
#include <iostream>

class A {
public:
    int w;
};

class B : public A {
public:
    int x;
};

class C : public A {
public:
    int y;
};

class D : public B {
public:
    int z;
};

int main() {

    A a; B b; C c; D d; // 클래스마다 하나씩 객체 생성

    A* ap = &a;
    B* bp = &b;
    C* cp = &c;
    D* dp = &d;

/* (1) 업 캐스팅에 해당하지 않는 것은? */
// ①
    ap = bp;
// ②
    ap = cp;
// ③ 상속 관계 없음
    bp = cp;
// ④
    bp = dp;

/* (2) 객체 d의 멤버를 모두 나열하라. */
    int w, x, z;

/* (3) 객체 d의 멤버에 대한 접근 중에서 컴파일 오류가 발생하는 것은? */
// ①
    d.x = 10;
// ②
    dp->x = 10;
// ③ 상속 관계 없음, 컴파일 오류 발생
    ap = dp; ap->x = 10;
// ④
    bp = dp; bp->x = 10;

/* (4) 아래 두 라인을 작성하면 두 번째 라인에서 컴파일 오류가 발생한다. 수정하라. */
    ap = dp;      // 컴파일 오류 발생하지 않음. 업 캐스팅
    dp = (D*)ap;  // 컴파일 오류 발생. 다운 캐스팅, 명시적인 형 변환 필요

    return 0;
}
