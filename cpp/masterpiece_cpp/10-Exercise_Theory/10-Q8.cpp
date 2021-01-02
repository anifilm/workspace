/* 이론 문제
Q8
다음 제네릭 클래스의 선언에서 잘못된 부분을 바르게 고쳐라.

template <class TYPE>
TYPE equals(TYPE x, int y) {
    if (x == y) return true;
    else return false;
}

*/
#include <iostream>

template <class TYPE>
TYPE equals(TYPE x, TYPE y) {
    if (x == y) return true;
    else return false;
}
