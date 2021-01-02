/* 이론 문제
Q6
다음 두 함수들을 일반화한 제네릭 함수를 작성하라.

  void insert(int a, int b[], int index) {
      b[index] = a;
  }

  void insert(char a, char b[], char index) {
      *(b + index) = a;
  }

*/
#include <iostream>

template <class T>
void insert(T a, T b[], T index) {
    b[index] = a;
}
