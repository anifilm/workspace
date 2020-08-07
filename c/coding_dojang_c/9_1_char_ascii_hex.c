#include <stdio.h>

int main() {

    char c1 = 0x61;   // a의 ASCII 16진수 코드값 97
    char c2 = 0x62;   // b의 ASCII 16진수 코드값 98

    printf("char c1: %c, %d, 0x%x\n", c1, c1, c1);     // %c 문자열, %d 정수값, %x 16진수 출력
    printf("char c2: %c, %d, 0x%x\n", c2, c2, c2);     // %c 문자열, %d 정수값, %x 16진수 출력

    return 0;
}
