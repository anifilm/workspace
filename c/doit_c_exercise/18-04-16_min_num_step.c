// 최소값 구하기
#include <stdio.h>

int main() {

	int first, second, third, min;

	printf("세 개의 정수값을 입력하세요: ");
	scanf("%d %d %d", &first, &second, &third);

	if (first < second) {
		// first가 더 작은 경우
		if (first < third)
			min = first;
		else
			min = third;
	} else {
		// second가 더 작은 경우
		if (second < third)
			min = second;
		else
			min = third;
	}

	printf("\n입력한 3개의 정수값은 %d, %d, %d 이며 ", first, second, third);
	printf("최소값은 %d 입니다.\n", min);


	return 0;
}
