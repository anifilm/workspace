// 대입 연산자 (=)와 산술연산자 (+, -, *, /, %)
#include <stdio.h>

int main() {

    int num1 = 9, num2 = 2;

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d x %d = %d\n", num1, num2, num1 * num2);
    printf("%d ÷ %d의 몫 = %d\n", num1, num2, num1 / num2);
    printf("%d ÷ %d의 나머지 = %d\n", num1, num2, num1 % num2);

    return 0;
}
