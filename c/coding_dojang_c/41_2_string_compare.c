#include <stdio.h>
#include <string.h>     // strcmp 함수가 선언된 헤더 파일

int main() {

    char *s1 = "Hello";     // 포인터에 문자열 Hello의 주소값 할당
    char s2[10] = "Hello";  // 크기가 10인 char형 배열을 선언하고 문자열을 할당

    int ret = strcmp(s1, s2);   // 두 문자열이 같은지 문자열 비교

    printf("strcmp(s1, s2): %d\n", ret);    // 두 문자열이 같으면 0

    //  1: ASCII 코드 기준으로 문자열1 (s1)이 클때
    //  0: ASCII 코드 기준으로 두 문자열이 같을때
    // -1: ASCII 코드 기준으로 문자열2 (s2)이 클때

    return 0;
}
