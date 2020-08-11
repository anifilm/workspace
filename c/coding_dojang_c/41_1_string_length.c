#include <stdio.h>
#include <string.h>     // strlen 함수가 선언된 헤더 파일

int main() {

    char *s1 = "Hello";     // 포인터에 문자열 Hello의 주소값 할당
    char s2[10] = "Hello";  // 크기가 10인 char형 배열을 선언하고 문자열을 할당

    printf("strlen(s1): %d\n", strlen(s1));     // strlen 함수로 문자열의 길이를 구함
    printf("strlen(s2): %d\n", strlen(s2));     // strlen 함수로 문자열의 길이를 구함

    return 0;
}
