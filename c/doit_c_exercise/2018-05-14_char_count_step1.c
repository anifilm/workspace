// 연속된 문자 개수 계산하기
#include <stdio.h>
#define MAX_LENGTH 64

int main() {

	char str[MAX_LENGTH];
	int i, len = 0, count = 1;

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", str);

	while (str[len] != 0) len++;

	printf("연속된 문자열 체크 -> ");
	for (i = 0; i < len; i++) {
		if (str[i] == str[i + 1])
			count++;
		else {
			if (count > 1) {
				printf("['%c': %d]", str[i], count);
				count = 1;
				printf(", ");
			}
		}
	}
	printf("\n");

	return 0;
}
