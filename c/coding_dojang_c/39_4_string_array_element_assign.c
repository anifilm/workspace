#include <stdio.h>

int main() {

    char s1[10] = "Hello";      // 크기가 10인 char형 배열을 선언하고 문자열 할당

    s1[0] = 'A';                // 문자 배열의 인덱스 0에 문자 A를 할당

    printf("s1: %s\n", s1);     // 변경된 문자열 출력

    return 0;
}
