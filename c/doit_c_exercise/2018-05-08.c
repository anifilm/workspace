// 중첩 반복문 연습하기 (C, 1)
#include <stdio.h>

int main() {

	int x, y;

	for (y = 1; y <= 7; y++) {
		for (x = 1; x <= 7; x++)
			if (x <= y)
				printf("%d", x);
			else
				printf("*");
		printf("\n");
	}

	return 0;
}
