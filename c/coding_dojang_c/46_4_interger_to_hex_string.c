#include <stdio.h>

int main() {

    char s1[10];        // 변환한 문자열을 저장할 배열 선언

    int num1 = 283;

    sprintf(s1, "0x%x", num1);      // %x를 지정하여 정수를 16진주로 표기된 문자열로 저장
                                    // 16진수라는 것을 나타내기 위해 앞에 0x를 붙임

    printf("s1: %s\n", s1);

    return 0;
}
