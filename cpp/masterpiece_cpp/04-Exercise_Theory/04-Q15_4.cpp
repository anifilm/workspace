/* 이론 문제
Q15
함수 f()r가 실행되고 난 뒤 메모리 누수가 발생하는지 판단하고 메모리 누수가 발생하면
발생하지 않도록 수정하라.
  void f() {
      int* p;
      for (int i = 0; i < 5; i++) {
          p = new int;
          cin >> *p;
          if (*p % 2 == 1) break;
      }
      delete p;
  }
*/
#include <iostream>
#include <cstring>

using namespace std;

// Answer: 메모리 누수 있음
void f() {
    int* p;
    p = new int;
    for (int i = 0; i < 5; i++) {
        cin >> *p;
        if (*p % 2 == 1) break;
        cout << p << ": " << *p << endl;
    }
    delete p;
}

int main() {
    f();
    return 0;
}
