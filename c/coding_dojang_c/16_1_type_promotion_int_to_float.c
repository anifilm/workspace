#include <stdio.h>

int main() {

    int num1 = 11;
    float num2 = 4.4f;

    // 정수와 실수 연산. 정수는 실수로 변환됨
    printf("%f\n", num1 + num2);    // 15.400000
    printf("%f\n", num1 - num2);    // 6.600000
    printf("%f\n", num1 * num2);    // 48.400002
    printf("%f\n", num1 / num2);    // 2.500000

    return 0;
}
