#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

int main() {

    char *s1 = malloc(sizeof(char) * 20);   // char 20개 크기만큼 동적 메모리 할당

    sprintf(s1, "Hello, %s", "world!");     // "Hello, %s"로 서식을 지정하여 s1에 저장

    printf("s1: %s\n", s1);

    free(s1);

    return 0;
}
