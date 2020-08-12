#include <stdio.h>
#include <stdlib.h>     // strtof 함수가 선언된 헤더 파일

int main() {

    char *s1 = "35.283672 3.e5 9.281772 7.e-5";
    float num1;
    float num2;
    float num3;
    float num4;
    char *end;      // 이전 숫자의 끝 부분을 저장하기 위한 포인터

    num1 = strtof(s1, &end);     // 문자열을 실수로 변환
    num2 = strtof(end, &end);    // 문자열을 실수로 변환
    num3 = strtof(end, &end);    // 문자열을 실수로 변환
    num4 = strtof(end, NULL);    // 문자열을 실수로 변환

    printf("num1: %f\n", num1);
    printf("num2: %e\n", num2);
    printf("num3: %f\n", num3);
    printf("num4: %e\n", num4);

    return 0;
}
