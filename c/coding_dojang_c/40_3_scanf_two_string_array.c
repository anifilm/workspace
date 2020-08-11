#include <stdio.h>

int main() {

    char s1[10];        // 크기가 10인 char형 배열을 선언
    char s2[10];        // 크기가 10인 char형 배열을 선언

    printf("문자열을 두개 입력하세요 (문자열 문자열): ");
    scanf("%s %s", s1, s2);     // 표준 입력에서 공백으로 구분된 문자열 두개를 입력받음

    printf("s1: %s\n", s1);     // s1의 입력된 문자열의 내용을 출력
    printf("s2: %s\n", s2);     // s2의 입력된 문자열의 내용을 출력

    return 0;
}
