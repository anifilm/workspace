// 문자열에 포함된 소문자('a'~'z') 개수 계산하기 (C, 1)
#include <stdio.h>
#define MAX_LENGTH 64

int main() {

	char str[MAX_LENGTH];
	int i, len = 0, count = 0;

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", str);

	while (str[len] != 0) len++;

	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			count++;
	}
	printf("%s에 포함된 소문자는 총 %d개 입니다.\n", str, count);

	return 0;
}
