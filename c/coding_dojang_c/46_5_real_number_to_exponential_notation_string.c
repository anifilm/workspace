#include <stdio.h>

int main() {

    char s1[20];        // 변환한 문자열을 저장할 배열 선언

    float num1 = 38.972340f;

    sprintf(s1, "%e", num1);     // %e를 지정하여 실수를 지수 표기법으로 된 문자열로 변환하여 s1에 할당

    printf("s1: %s\n", s1);

    return 0;
}
