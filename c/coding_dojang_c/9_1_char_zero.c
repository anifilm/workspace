#include <stdio.h>

int main() {

    char c1 = '0';  // 문자 0을 대입
    char c2 = 0;    // 숫자 0을 대입

    printf("char c1: %c\n", c1);     // 문자 상태로 0을 출력
    printf("char c1: %d\n", c1);     // 문자 0 -> ASCII 코드 48 출력
    printf("char c2:   \n", c2);     // 0 -> ASCII 코드 0은 널문자 (출력 없음)
    printf("char c2: %d\n", c2);     // 정수 0을 출력

    return 0;
}
