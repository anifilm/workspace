// 비트 연산
#include <stdio.h>

int main() {

    int a = 0xAF;   // 1010 1111
    int b = 0xB5;   // 1011 0101

    printf("a & b = %x\n", a & b);   // 1010 0101
    printf("a | b = %x\n", a | b);   // 1011 1111
    printf("a ^ b = %x\n", a ^ b);   // 0001 1010
    printf("~a = %x\n", ~a);         // (1111 1111) 0101 0000
    printf("a << 2 = %x\n", a << 2); // 0010 1011 1100
    printf("b >> 3 = %x\n", b >> 3); // 0001 0110

    return 0;
}
