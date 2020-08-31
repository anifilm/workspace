// 포인터도 변수이다
#include <stdio.h>

int main() {

    int a;
    int b;
    int *p;

    p = &a;     // 포인터 p에 변수 a의 주소값을 대입
    *p = 2;     // 포인터 p가 가리키는 주소값(변수 a)에 값 2를 대입
    p = &b;     // 포인터 p에 변수 b의 주소값을 대입
    *p = 4;     // 포인터 p가 가리키는 주소값(변수 b)에 값 4를 대입

    printf("a : %d \n", a);
    printf("b : %d \n", b);

    return 0;
}
