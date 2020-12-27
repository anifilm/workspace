/* 이론 문제
Q9
다음 코드에 대한 물음에 답하라.
*/
#include <iostream>

using namespace std;

class A {
public:
    A() { cout << "생성자 A" << endl; }
    A(int x) { cout << "생성자 A " << x << endl; }
};

class B : public A {
public:
    B() { cout << "생성자 B" << endl; }
    B(int x) { cout << "생성자 B " << x << endl; }
    B(int x, int y) : A(x + y + 2) { cout << "생성자 B " << x * y * 2 << endl; }
};

/* 다음과 같이 객체 b가 생성될 때 화면에 출력되는 내용은?
  (1) B b;
    생성자 A
    생성자 B

  (2) B b(10);
    생성자 A
    생성자 B 10

  (3) B b(10, 20);
    생성자 A 32
    생성자 B 400

*/
