#include <stdio.h>
#include <string.h>     // strcpy 함수가 선언된 헤더 파일

int main() {

    char s1[10] = "world!";
    char s2[20] = "Hello, ";      // s2 뒤에 붙일 것이므로 배열 크기를 크게 만듬

    strcat(s2, s1);             // s2 뒤에 s1을 붙임

    printf("s2: %s\n", s2);

    return 0;
}
