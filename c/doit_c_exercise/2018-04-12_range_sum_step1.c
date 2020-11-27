// 범위에 포함된 숫자 합산하기 (C, 1)
#include <stdio.h>

int main() {

	int begin, end, sum = 0;

	printf("Begin: ");
	scanf("%d", &begin);
	printf("End: ");
	scanf("%d", &end);

	for ( ; begin < end; begin++) {
		printf("%d, ", begin);
		sum += begin;
	}
	// 마지막 숫자는 콤마 없는 출력을 위해서 이렇게 함
	printf("%d\n", begin);
	sum += begin;

	printf("Sum = %d\n", sum);

	return 0;
}
