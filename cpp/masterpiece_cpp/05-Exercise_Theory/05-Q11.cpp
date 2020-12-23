/* 이론 문제
Q11
다음 copy() 함수는 src 값을 dest에 복사하는 함수이다.
  void copy(int dest, int src) {
      dest = src;
  }

copy()를 이용하여 b값을 a에 복사하고자 하지만, b값이 a에 복사되지 않는다.
  int a = 4, b = 5;
  copy(a, b);   // b값을 a에 복사

복사되지 않는 이유가 무엇인지 설명하고, 복사가 잘 되도록 copy() 함수만 고쳐라.
*/
#include <iostream>

using namespace std;

void copy(int& dest, int src) {
    dest = src;
}

int main() {
    int a = 4, b = 5;
    copy(a, b);   // b값을 a에 복사
    cout << a << ' ' << b << endl;
    return 0;
}

/*

a 변수가 함수에 전달될 때 값을 복사하는 방식으로 전달 되기 때문에 함수 종료시 dest에
저장된 값이 소멸되므로 a의 값에는 영향을 주지 않는다.
a 변수를 int& dest 매개 변수의 참조(레퍼런스)로 전달하여 값을 변경할 수 있게 수정하면 된다.

*/
