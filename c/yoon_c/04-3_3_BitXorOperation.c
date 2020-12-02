// ^ 연산자: 비트단위 XOR
#include <stdio.h>

int main() {

    int num1 = 15;      // 0000 0000 0000 0000 0000 0000 0000 1111
    int num2 = 20;      // 0000 0000 0000 0000 0000 0000 0001 0100

    int num3 = num1 ^ num2;
    printf("XOR 연산의 결과: %d \n", num3);       // 27: 0001 1011

    return 0;
}
