#include <stdio.h>
#include <stdlib.h>     // sprintf 함수가 선언된 헤더 파일

int main() {

    char s1[10];        // 변환한 문자열을 저장할 배열 선언

    int num1 = 283;

    sprintf(s1, "%d", num1);     // %d를 지정하여 정수를 문자열로 변환하여 s1에 할당

    printf("s1: %s\n", s1);

    return 0;
}
