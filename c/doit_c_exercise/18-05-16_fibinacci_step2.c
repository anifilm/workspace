// 피보나치수열
#include <stdio.h>

int Fibonacci(int a_num) {
	if (a_num < 2)
		return a_num;
	return Fibonacci(a_num - 1) + Fibonacci(a_num - 2);
}

int main() {

	int num, fibo = 0, i;

	printf("피보나치 수의 상한 값을 입력하세요: ");
	scanf("%d", &num);

	for (i = 1; fibo < num; i++) {
		printf("%d ", fibo);
		fibo = Fibonacci(i);
	}
	printf("\n");

	return 0;
}
