/*
2 다음 함수들에 대해 문제에서 주어진 함수의 실행 결과 n 값은 무엇인가?
*/
#include <iostream>

using namespace std;

void f(int a) { a = -a; }
void g(int* a) { *a = -*a; }
void h(int& a) { a = -a; }

int main() {
    int n;

/* (1) */
    n = 5;
    f(n);   // 5, 값 복사로 반환값이 전달 되지 않는다

/* (2) */
    n = 5;
    g(&n);  // -5, 주소값 전달로 원본값이 변경됨

/* (3) */
    n = 5;
    h(n);   // -5, 참조 전달로 원본값이 변경됨

    return 0;
}
