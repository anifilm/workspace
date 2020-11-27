// 피보나치수열
#include <stdio.h>

int main() {

	int num, a = 0, b = 1, c;

	printf("피보나치 수의 상한 값을 입력하세요: ");
	scanf("%d", &num);

	// 피보나치 수열의 시작값 두 개를 출력
	printf("%d %d ", a, b);

	c = a + b;
	while (c < num) {
		printf("%d ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");

	return 0;
}
