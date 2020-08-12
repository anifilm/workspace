#include <stdio.h>
#include <stdlib.h>     // strtol 함수가 선언된 헤더 파일

int main() {

    char *s1 = "0xaf10 42 0x27C 9952";
    int num1;
    int num2;
    int num3;
    int num4;
    char *end;      // 이전 숫자의 끝 부분을 저장하기 위한 포인터

    num1 = strtol(s1, &end, 16);     // 16진수로 표기된 문자열을 정수로 변환
    num2 = strtol(end, &end, 10);    // 10진수로 표기된 문자열을 정수로 변환
    num3 = strtol(end, &end, 16);    // 16진수로 표기된 문자열을 정수로 변환
    num4 = strtol(end, NULL, 10);    // 10진수로 표기된 문자열을 정수로 변환

    printf("num1: %x\n", num1);
    printf("num2: %d\n", num2);
    printf("num3: %x\n", num3);
    printf("num4: %d\n", num4);

    return 0;
}
