// getchar 함수로 문자열 입력받기
#include <stdio.h>
#define MAX_LENGTH 64

int MyGetString(char a_string[], int a_max_length) {
	int i;
	for (i = 0; i < a_max_length; i++) {
		a_string[i] = getchar();
		if (a_string[i] == '\n') break;
	}
	// 문자열 마지막 위치에 NULL 문자를 추가
	a_string[i] = '\0';

	return i;
}

int main() {

	int len;
	char str[MAX_LENGTH];

	printf("Input String: ");
	len = MyGetString(str, MAX_LENGTH);

	printf("Check String: %s [length = %d]\n", str, len);

	return 0;
}
