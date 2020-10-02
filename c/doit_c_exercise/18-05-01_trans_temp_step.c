// 섭씨와 화씨 변환
#include <stdio.h>

int main() {

	int type;
	double temp;

	printf("온도를 입력하세요: ");
	scanf("%lf", &temp);

	printf("현재 입력한 온도가 섭씨 온도이면 1, 화씨 온도이면 2를 입력하세요: ");
	scanf("%d", &type);

	if (type == 1)
		printf("섭씨 %.2lf도는 화씨 %.2lf도 입니다.\n", temp, 32 + 1.8 * temp);
	else if (type == 2)
		printf("화씨 %.2lf도는 섭씨 %.2lf도 입니다.\n", temp, 0.5556 * (temp - 32));
	else
		printf("타입을 잘못 입력하였습니다.\n");

	return 0;
}
