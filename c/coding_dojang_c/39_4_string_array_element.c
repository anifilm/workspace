#include <stdio.h>

int main() {

    char s1[10] = "Hello";      // 크기가 10인 char형 배열을 선언하고 문자열 할당

    printf("s1[1]: %c\n", s1[1]);   // 인덱스 1 (두번째)의 문자 출력
    printf("s1[4]: %c\n", s1[4]);   // 인덱스 4 (다섯번째)의 문자 출력
    printf("s1[5]: %c\n", s1[5]);   // 문자열 맨 뒤의 NULL(\0) 출력, NULL은 화면에 표시되지 않음

    return 0;
}
