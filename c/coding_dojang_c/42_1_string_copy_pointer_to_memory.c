#include <stdio.h>
#include <string.h>     // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

int main() {

    char *s1 = "Hello";     // 포인터에 문자열 "Hello"의 주소값 할당
    char *s2 = malloc(sizeof(char) * 10);   // char 10개 크기만큼 동적 메모리 할당

    strcpy(s2, s1);         // s1의 문자열을 s2로 복사

    printf("s2: %s\n", s2);

    free(s2);       // 동적 메모리 해제

    return 0;
}
