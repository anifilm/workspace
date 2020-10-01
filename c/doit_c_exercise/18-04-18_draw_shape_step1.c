// '*' 문자로 삼각형 그리기 (C, 1)
#include <stdio.h>

int main() {

	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 0; x < y; x++)
			printf("*");	// y개 만큼 출력
		printf("\n");		// 줄 바꿈
	}

	return 0;
}
