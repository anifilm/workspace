// '*' 문자로 삼각형 그리기 (C, 5)
#include <stdio.h>

int main() {

	int x, y;

	for (y = 1; y <= 4; y++) {
		for (x = 0; x < 4 - y; x++)
			printf(" ");
		for (x = 1; x < y * 2; x++)
			printf("*");
		printf("\n");
	}

	for (y = 1; y < 4; y++) {
		for (x = 0; x < y; x++)
			printf(" ");
		for (x = 0; x < 7 - y * 2; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}
