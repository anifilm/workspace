/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/

#include <stdio.h>

void main() {

    double data = 3.141592;
    printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data, data, data, data);
}
