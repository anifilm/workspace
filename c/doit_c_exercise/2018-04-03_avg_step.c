// 정수값을 입력받아 합과 평균 출력하기
#include <stdio.h>

int main() {

	int first, second, third, sum;
	double avg;

	printf("첫 번째 값을 입력하세요: ");
	scanf("%d", &first);

	printf("두 번째 값을 입력하세요: ");
	scanf("%d", &second);

	printf("세 번째 값을 입력하세요: ");
	scanf("%d", &third);

	printf("입력된 값: %d %d %d\n", first, second, third);

	sum = first + second + third;
	avg = sum / 3.0;

	printf("그리고 입력된 값의 합계는 %d이고 평균값은 %lf 입니다.\n", sum, avg);

	return 0;
}
