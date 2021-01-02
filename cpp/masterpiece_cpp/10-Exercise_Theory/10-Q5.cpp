/* 이론 문제
Q5
다음 두 함수를 일반화한 제네릭 함수를 작성하라.

  bool equal(int a, int b) {
      if (a == b) return true;
      else return false;
  }

  bool equal(char a, char b) {
      if (a == b) return true;
      else return false;
  }

*/
#include <iostream>

template <class T>
bool equal(T a, T b) {
    if (a == b) return true;
    else return false;
}
