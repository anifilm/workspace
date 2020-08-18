// 실수 값을 지수 형태로 출력하기
#include <stdio.h>

int main() {

    float data = 12.34f;
    // %f 실수 출력, %e 지수 출력, %E 지수 출력
    printf("%f, %e, %E", data, data, data);

	return 0;
}

/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/
