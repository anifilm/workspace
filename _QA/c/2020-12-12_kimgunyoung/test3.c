/*
Q3. 3개의 정수 e1, e2, e3가 서로 값을 바꾸는(각각 e3, e1, e2의 값이 대입됨)
함수 swap_numbers를 작성하라(아래 함수 void swap_numbers 반드시 사용)

*/
#include <stdio.h>

void swap_numbers(int** x, int* y, int** z);

int main(void) {

    int e1 = 5, e2 = 3, e3 = 7;
    int *pe1, *pe3;

    // 선언부에 포인터 변수를 대입해 주어야 합니다
    pe1 = &e1;
    pe3 = &e3;

    printf("element 1 = %d, element 2 = %d, element3 = %d\n", e1, e2, e3);

    swap_numbers(&pe1, &e2, &pe3);
    // 예상되는 출력값 7, 5, 3
    printf("element 1 = %d, element 2 = %d, element3 = %d\n", e1, e2, e3);

    return 0;
}

void swap_numbers(int** x , int* y, int** z) {
    int temp1 = **z;
    int temp2 = *y;
    *y = **x;
    **z = temp2;
    **x = temp1;
}

/*

void swap_numbers(int** x , int** y, int** z) {  <- int** y 표기가 잘못되어 있었네요

이중 포인터의 개념을 이해하기 좀 어렵죠 ㅎㅎ 여기선 좀 간단하게 값들을 temp에
넣었다가 재대입 하는거니 * 포인터 연산자만 잘 맞춰주면 됩니다.

*/
