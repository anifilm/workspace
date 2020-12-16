/* 문제 26-1 [매크로의 정의]
문제 1
세 개의 정수를 인자로 받아서 이 세 정수의 덧셈 결과와 곱셈 결과를 반환하는 매크로 함수
를 각각 정의해 보자.
*/
#include <stdio.h>

#define ADD(X, Y, Z)  X + Y + Z
#define MUL(X, Y, Z)  X * Y * Z

int main() {

    printf("Add of 3, 4, 5: %d\n", ADD(3, 4, 5));
    printf("Mul of 3, 4, 5: %d\n", MUL(3, 4, 5));

    return 0;
}
