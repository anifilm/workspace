#include <stdio.h>

int main() {

    char s1[20];        // 크기가 20인 char형 배열을 선언

    sprintf(s1, "Hello, %s", "world!");     // "Hello, %s"로 서식을 지정하여 s1에 저장

    printf("s1: %s\n", s1);

    return 0;
}
