// 문자열에 범위를 지정하여 문자열 추출하기 - 배열로 구성
#include <stdio.h>
#define MAX_LENGTH 64

int main() {

	char str[MAX_LENGTH];
	int len = 0, start, end;

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", str);

	while (str[len] != 0) len++;

	// 시작은 0부터 8이전까지 추출 [0:8] 파이썬과 같은 형식으로 함
	printf("문자열을 추출할 시작 위치와 끝 위치를 입력하세요: ");
	scanf("%d %d", &start, &end);

	if (len < end)
		printf("입력된 문자열의 길이보다 추출 범위가 더 큽니다.\n");
	else if (start > end)
		printf("끝 위치가 시작 위치보다 커야 합니다.\n");
	else {
		for ( ; start < end; start++) {
			printf("%c", str[start]);
		}
		printf("\n");
	}

	return 0;
}
