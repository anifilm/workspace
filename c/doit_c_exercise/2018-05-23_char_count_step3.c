// 문자열에 포함된 소문자('a'~'z') 개수를 문자별로 계산하기 (C, 2)
#include <stdio.h>
#define MAX_LENGTH 64
#define ALPHA_COUNT 26

int main() {

	char str[MAX_LENGTH];
	int i, len = 0, counts[ALPHA_COUNT] = {0};

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", str);

	while (str[len] != 0) len++;

	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			counts[str[i] - 'a']++;
	}

	for (i = 0; i < ALPHA_COUNT; i++) {
		if (counts[i] > 0)
			printf("'%c': %d번\n", 'a' + i, counts[i]);
	}
	printf("\n");

	return 0;
}
