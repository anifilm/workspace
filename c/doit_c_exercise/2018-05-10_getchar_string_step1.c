// getchar 함수로 문자열 입력받기
#include <stdio.h>
#define MAX_LENGTH 64

int main() {

	int i;
	char str[MAX_LENGTH];

	printf("Input String: ");

	// int key;
	// while ((key = getchar()) != '\n') {
	// 	str[i++] = key;
	// }

	for (i = 0; i < MAX_LENGTH - 1; i++) {
		str[i] = getchar();
		if (str[i] == '\n') break;
	}
	// 문자열 마지막 위치에 NULL 문자를 추가
	str[i] = '\0';

	printf("Check String: %s\n", str);

	return 0;
}
