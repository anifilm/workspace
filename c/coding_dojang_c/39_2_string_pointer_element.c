#include <stdio.h>

int main() {

    char *s1 = "Hello";     // 포인터에 문자열 "Hello"의 주소 할당

    printf("s1[1]: %c\n", s1[1]);   // 인덱스 1 (두번째)의 문자 출력
    printf("s1[4]: %c\n", s1[4]);   // 인덱스 4 (다섯번째)의 문자 출력
    printf("s1[5]: %c\n", s1[5]);   // 문자열 맨 뒤의 NULL(\0) 출력, NULL은 화면에 표시되지 않음

    return 0;
}
