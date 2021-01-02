/* 이론 문제
Q7
다음 제네릭 함수 선언에서 잘못된 부분을 바르게 고쳐라.

template <typename T>
int max(T x, T y) {
    if (x > y) return x;
    else return y;
}

*/
#include <iostream>

template <typename T>
T max(T x, T y) {
    if (x > y) return x;
    else return y;
}
