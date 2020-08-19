#include <stdio.h>

void Sum(int, int);     // Sum 함수의 원형 (Prototype)
extern int result;      // sum.c 에서 선언된 전역변수를 사용

int main() {

    Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}
