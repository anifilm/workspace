// 정수 값을 여러 가지 진법으로 출력하기
#include <stdio.h>

int main() {

    int data1 = 10;
    int data2 = 010;
    int data3 = 0x10;
    // %x 16진수 출력, %d 10진수 출력, %o 8진수 출력
    printf("%x, %d, %o", data1, data2, data3);

	return 0;
}

/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/
