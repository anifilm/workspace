// 대입연산의 전달과정에서 발생하는 자동 형 변환
#include <stdio.h>

int main() {

	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %lf\n", num1);
	printf("실수 3.1415를 정수로: %d\n", num2);
	printf("큰 정수 129를 작은 정수로: %d\n", ch);

	return 0;
}
