/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/

#include <stdio.h>

int main() {

    int data1 = -1;
    unsigned int data2 = 4294967295;
    printf("%d, %u, %d, %u", data1, data1, data2, data2);
	
	return 0;
}
