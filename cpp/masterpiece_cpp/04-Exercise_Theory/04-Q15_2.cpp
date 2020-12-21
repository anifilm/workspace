/* 이론 문제
Q15
함수 f()r가 실행되고 난 뒤 메모리 누수가 발생하는지 판단하고 메모리 누수가 발생하면
발생하지 않도록 수정하라.
  void f() {
      int* p = new int;
      int* q = p;
      *q = 10;
      delete q;
  }

*/
#include <iostream>
#include <cstring>

using namespace std;

// Answer: 메모리 누수 있음
void f() {
    int* p = new int;
    int* q = p;
    *q = 10;
    cout << *q << endl;
    q = nullptr;
    delete p;
}

int main() {
    f();
    return 0;
}
