// 왼쪽 또는 오른쪽으로 정렬해서 출력하기
#include <stdio.h>

int main() {

    int data = 7;
    printf("[%5d] [%05d] [%-5d]", data, data, data);

	return 0;
}

/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/
