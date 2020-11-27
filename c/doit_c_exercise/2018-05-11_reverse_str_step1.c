// 입력한 문자열을 거꾸로 출력하기 (C, 1)
#include <stdio.h>

void PrintChar() {
	int key = getc(stdin);
	if (key != '\n')
		PrintChar();
	else {
		printf(" ->");
		key = ' ';		// 엔터 키값('\n')을 공백 문자로 변경
	}
	printf("%c", key);
}

int main() {

	printf("Input String: ");
	PrintChar();
	printf("\n");

	return 0;
}
