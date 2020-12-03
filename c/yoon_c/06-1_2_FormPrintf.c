// printf 함수의 서식지정
#include <stdio.h>

int main() {

    int myAge = 12;
    printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다. \n", myAge, myAge);

    return 0;
}

/*

서식문자의 종류와 그 의미

서식문자     출력 대상 (자료형)         출력 형태
%d          char, short, int    부호 있는 10진수 정수
%ld         long                부호 있는 10진수 정수
%lld        long long           부호 있는 10진수 정수
%u          unsigned int        부호 없는 10진수 정수
%o          unsigned int        부호 없는 8진수 정수
%x, %X      unsigned int        부호 없는 16진수 정수
%f          float               10진수 방식의 부동소수점 실수
%lf         double              10진수 방식의 부동소수점 실수   (C99에서 추가됨)
%Lf         long double         10진수 방식의 부동소수점 실수
%e, %E      float, double       e 또는 E 방식의 부동소수점 실수
%g, %G      float, double       값에 따라  %f와 %e 사이에서 선택
%c          char, short, int    값에 대응하는 문자
%s          char*               문자열
%p          void*               포인터의 주소 값

*/
