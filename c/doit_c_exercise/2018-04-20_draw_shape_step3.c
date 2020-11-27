// '*' 문자로 삼각형 그리기 (C, 3)
#include <stdio.h>

int main() {

	int x, y, count;

	printf("몇 줄의 삼각형을 만드시겠습니까?: ");
	scanf("%d", &count);

	for (y = 1; y <= count; y++) {
		for (x = 0; x < count - y; x++)
			printf(" ");
		for (x = 1; x < y * 2; x++)
			printf("*");
		printf("\n");
	}


	return 0;
}
