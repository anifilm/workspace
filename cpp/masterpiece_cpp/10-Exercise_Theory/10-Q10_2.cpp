/* 이론 문제
Q10
다음 두 개의 함수가 있을 때, 질문에 답하여라.

  template <class T> void show(T a) {
      cout << a;
  }

  void show(int a) {
      cout << "special " << a;
  }

  (1) 이 두 함수가 공존할 수 있는가? 있다.
  (2) 만일 (1)의 답이 '예'라면, show(3.14);를 호출한 결과는?
  (3) 만일 (1)의 답이 '예'라면, show(100);를 호출한 결과는?
*/
#include <iostream>

using namespace std;

template <class T> void show(T a) {
    cout << a;
}

void show(int a) {
    cout << "special " << a;
}

int main() {
    show(3.14);  // 3.14
    return 0;
}
