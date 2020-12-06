/* 문제 14-1 [Call-by-value & Call-by-reference]
문제 1
변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이른 호출하는 main 함수를
작성해 보자. 단, 여기서는 다음 두 가지 형태로 함수를 정의해야 한다.
 - Call-by-value 기반의 SquareByValue 함수
 - Call-by-reference 기반의 SequareByReference 함수

SquareByValue 함수는 인자로 전달된 값의 제곱을 반환해야 하며, SequareByReference
함수는 정수가 저장되어 있는 변수의 주소 값을 인자로 받아서 해당 변수에 저장된 값의
제곱을 그 변수에 다시 저장해야 한다.
*/
#include <stdio.h>

int SquareByValue(int num) {
    return num * num;
}

void SequareByReference(int* p_num) {
    int num = *p_num;
    *p_num = num * num;
}

int main() {

    int num = 10;

    printf("num: %d\n", SquareByValue(num));

    SequareByReference(&num);
    printf("num: %d\n", num);

    return 0;
}
