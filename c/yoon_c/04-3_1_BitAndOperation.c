// & 언산자: 비트단위 AND
#include <stdio.h>

int main() {

    int num1 = 15;      // 0000 0000 0000 0000 0000 0000 0000 1111
    int num2 = 20;      // 0000 0000 0000 0000 0000 0000 0001 0100

    int num3 = num1 & num2;
    printf("AND 연산의 결과: %d\n", num3);         // 4: 0000 0100

    return 0;
}
