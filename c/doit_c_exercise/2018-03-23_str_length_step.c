// 문자열 입력 후에 길이 계산하기
#include <stdio.h>
#include <string.h>

int main() {

	char str[64];
	int len;

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	len = strlen(str) - 1;
	str[len] = '\0';

	printf("\n입력된 문자열은 [%s] 입니다.\n", str);
	printf("그리고 입력된 문자열의 길이는 %d 입니다.\n", len);

	return 0;
}
