#include <stdio.h>

int is_digit(char c);

int main() {

	char input;

	printf("숫자를 입력하세요: ");
	scanf("%c", &input);

	if (is_digit(input)) {
		printf("%c는 숫자입니다.\n", input);
	} else {
		printf("%c는 숫자가 아닙니다.\n", input);
	}

	return 0;
}

// c가 숫자인지 아닌지 판별하는 함수
int is_digit(char c) {
	if (48 <= c && c <= 57)
		return 1;
	else
		return 0;
}
