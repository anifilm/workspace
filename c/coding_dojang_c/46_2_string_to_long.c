#include <stdio.h>
#include <stdlib.h>     // strtol 함수가 선언된 헤더 파일

int main() {

    char *s1 = "0xaf10";       // "0xaf10"은 문자열

    int num1;

    num1 = strtol(s1, NULL, 16);    // 16진수로 표기된 문자열을 정수로 변환

    printf("num1: %x %d\n", num1, num1);

    return 0;
}
