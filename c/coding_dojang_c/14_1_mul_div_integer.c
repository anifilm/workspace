#include <stdio.h>

int main() {

    int num1;
    int num2;

    num1 = 2 * 3;       // 2에 3를 곱해서 num1에 대입
    num2 = 7 / 2;       // 7에서 2를 나누어서 num2에 대입

    printf("num1: %d\n", num1);    // 6
    printf("num2: %d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3

    return 0;
}
