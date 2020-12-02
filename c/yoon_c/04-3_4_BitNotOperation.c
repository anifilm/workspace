// ~ 연산자: 비트단위 NOT
#include <stdio.h>

int main() {

    int num1 = 15;      // 0000 0000 0000 0000 0000 0000 0000 1111

    int num2 = ~num1;
    printf("NOT 연산의 결과: %d \n", num2);      // -16: 1111 0000

    return 0;
}
