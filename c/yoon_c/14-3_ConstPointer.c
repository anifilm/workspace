// 포인터 대상의 const 선언
#include <stdio.h>

int main() {

/* 포인터 변수가 참조하는 대상의 값을 변경할 수 없다 */
    int num1 = 10;
    const int* ptr1 = &num1;

//  *ptr1 = 20;  // 오류! 참조하는 대상의 값 변경 불가

    printf("*ptr1: %d\n", *ptr1);


/* 포인터 변수의 상수화 (포인터 변수가 참조하는 대상 자체를 바꿀 수 없다) */
    int num2 = 20;
    int* const ptr2 = &num2;

    *ptr2 = 30; // 포인터 변수가 참조하는 대상의 값 변경 가능

    int num3 = 30;
//  ptr2 = &num3;   // 오류! 참조 대상을 변경할 수 없다.

    printf("*ptr2: %d\n", *ptr2);


/* 포인터 변수의 대상의 값과 대상 자체의 변경 모두 불가능 하다 */
    int num4 = 40;
    const int* const ptr3 = &num4;

    int num5 = 50;
/*
    *ptr3 = 50;     // 둘다 허용하지 않는다!
    ptr3 = &num5;
*/
    printf("*ptr3: %d\n", *ptr3);

    return 0;
}

/*

[앞에 있다 const] int* ptr -> 값 변경 불가
int* [뒤에 있다 const] ptr -> 대상 변경 불가

*/
