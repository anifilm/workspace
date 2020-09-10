// 문자열 입력받는 함수 만들기
#include <stdio.h>
#include <conio.h>

int main() {

    // 최대 31개의 문자를 입력 받아 저장 할 수 있다
    char input[32];

    gets(input);    // 문자열을 입력 받는다
    printf("Input string: %s\n", input);    // 입력된 문자열을 출력한다

	return 0;
}
