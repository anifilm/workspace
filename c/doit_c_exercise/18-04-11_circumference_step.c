// 반지름을 입력받아 원둘레 길이 출력하기
#include <stdio.h>
#define PI 3.141592

int main() {

	double radius = 0.0, circumference;

	while (1) {
		printf("Input radius (Exit -> 0): ");
		if (scanf("%lf", &radius) == 0) {
			printf("Invalid radius!\n\n");
			while(getchar() != '\n');
			continue;
		}
		if (radius == 0.0) break;
		circumference = 2 * PI * radius;
		printf("Circumference: 2 x PI x %.3f = %.3f\n\n", radius, circumference);
	}

	return 0;
}
