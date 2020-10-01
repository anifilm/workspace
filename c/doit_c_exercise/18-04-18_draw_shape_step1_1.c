// '*' 문자로 삼각형 그리기 (C, 1)
#include <stdio.h>

int main() {

	int x, y, count;

	printf("Input Count: ");
	scanf("%d", &count);

	for (y = count; y > 0; y--) {
		for (x = y; x < count; x++)
			printf(" ");	// count - y개 만큼 공백 문자 출력
		for (x = 0; x < y; x++)
			printf("*");	// y개 만큼 '*' 문자 출력
		printf("\n");		// 줄 바꿈
	}

	return 0;
}
