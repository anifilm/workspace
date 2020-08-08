#include <stdio.h>

int main() {

    unsigned char num1 = 3;          // 0000 0011
    unsigned char num2 = 24;         // 0001 1000

    printf("num1: %u\n", num1 << 2); // 0000 1100 (num1 비트값을 왼쪽으로 2 이동)   -> 12
    printf("num2: %u\n", num2 >> 2); // 0000 0110 (num2 비트값을 오른쪽으로 2 이동) -> 6

    return 0;
}
