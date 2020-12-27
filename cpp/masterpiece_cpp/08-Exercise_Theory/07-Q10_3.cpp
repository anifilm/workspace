/* 이론 문제
Q10
다음 코드에 대한 물음에 답하라.
*/
#include <iostream>

using namespace std;

class A {
public:
    A(int x) { cout << "생성자 A " << x << endl; }
};

class B : public A {
public:
    B() : A(20) { cout << "생성자 B" << endl; }
    B(int x) : A(x + 20) { cout << "생성자 B " << x << endl; }
};

/*
  (1) 위 코드에서 컴파일 오류가 발생하는 곳은 어디인가? 컴파일 오류의 내용은 무엇인가?
    A 클래스의 디폴트 생성자가 없다.

  (2) 다음 코드와 실행한 결과가 아래와 같도록 생성자 B()를 수정하라.
    B b;
    생성자 A 20
    생성자 B

  (3) 다음 코드와 실행한 결과가 아래와 같도록 생성자 B(int x)를 수정하라.
    B b(15);
    생성자 A 35
    생성자 B 15

*/
int main() {
    B b(15);
    return 0;
}
