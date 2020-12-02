// 명시적 형 변환: 강제로 일으키는 형 변환
#include <stdio.h>

int main() {

	int num1 = 3, num2 = 4;
	double divResult;

//  divResult = num1 / num2;
	divResult = (double)num1 / num2;

	printf("나눗셈 결과: %lf\n", divResult);

    return 0;
}
