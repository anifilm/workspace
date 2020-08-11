#include <stdio.h>

int main() {

    char s1[30];        // 크기가 30인 char형 배열을 선언

    sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);   // 문자, 정수, 실수를 문자열로 만듬

    printf("s1: %s\n", s1);

    return 0;
}
