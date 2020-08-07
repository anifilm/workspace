#include <stdio.h>

int main() {

    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3;    // num1에 3을 곱한 뒤 다시 num1에 대입
    num2 = num2 / 2;    // num2에서 2를 나눈 뒤 다시 num2에 대입

    printf("num1: %d\n", num1);    // 6
    printf("num2: %d\n", num2);    // 3

    return 0;
}
