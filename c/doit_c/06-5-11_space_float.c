// 실수 값 출력할 때 칸 수 지정하기
#include <stdio.h>

int main() {

    double data = 3.141592;
    printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data, data, data, data);

	return 0;
}

/*
키워드      출력 형식
%d          정수(10진수)
%f          실수
%c          문자
%s          문자열
*/
