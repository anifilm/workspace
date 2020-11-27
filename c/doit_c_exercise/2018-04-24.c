// 두 개의 실수값에서 정부수만 합산하기
#include <stdio.h>

int main() {

	double first, second;

	printf("두 개의 실수를 입력하세요: ");
	scanf("%lf %lf", &first, &second);

	printf("정수부 합산 값: %d\n", (int)first + (int)second);

	return 0;
}
