// '*' 문자로 삼각형 그리기 (C, 2)
#include <stdio.h>

int main() {

	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 0; x < 5 - y; x++)
			printf(" ");
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}
