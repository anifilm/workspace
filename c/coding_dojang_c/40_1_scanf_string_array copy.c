#include <stdio.h>

int main() {

    char s1[10];      // 크기가 10인 char형 배열을 선언

    printf("문자열을 입력하세요 [10]: ");
    scanf("%s", &s1);       // 표준 입력을 받아서 배열 형태의 문자열에 저장

    printf("s1: %s\n", s1);     // 입력된 문자열의 내용을 출력

    return 0;
}
