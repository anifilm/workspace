// '*' 문자로 삼각형 그리기 (C, 1)
#include <stdio.h>

int main() {

	int x, y, count;

	printf("Input Count: ");
	scanf("%d", &count);

	for (y = 0; y < count; y++) {
		for (x = 0; x < count - y; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}
