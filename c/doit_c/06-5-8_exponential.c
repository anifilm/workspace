/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/

#include <stdio.h>

void main() {

    float data = 12.34f;
    // %f 실수 출력, %e 지수 출력, %E 지수 출력
    printf("%f, %e, %E", data, data, data);
}
