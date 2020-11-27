// 입력한 문자열을 거꾸로 출력하기 (C, 2)
#include <stdio.h>
#define MAX_LENGTH 64

int main() {

	char str[MAX_LENGTH];
	int i, len = 0;

	printf("Input String: ");
	scanf("%[^\n]s", str);			// 형식 지정자를 사용하여 공백을 포함하여 입력 받음

	while (str[len] != 0) len++;	// str 배열의 문자열 길이를 구함
									// len = strlen(str);
	printf(" -> ");
	for (i = len - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
