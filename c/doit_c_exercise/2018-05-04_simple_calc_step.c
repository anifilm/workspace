// 계산기 만들기 (C, 1)
#include <stdio.h>

int main() {

	int first, second;
	char op_type;

	printf("첫 번째 정수값을 입력: ");
	scanf("%d", &first);
	while(getchar() != '\n');
	printf("연산자 입력 (+, -, *, / 가능): ");
	scanf("%c", &op_type);
	while(getchar() != '\n');
	printf("두 번째 정수값을 입력: ");
	scanf("%d", &second);
	while(getchar() != '\n');

	switch (op_type) {
		case '+':
			printf("%d + %d = %d\n", first, second, first + second);
			break;
		case '-':
			printf("%d - %d = %d\n", first, second, first - second);
			break;
		case '*':
			printf("%d * %d = %d\n", first, second, first * second);
			break;
		case '/':
			if (second == 0)
				printf("오류가 발생했습니다! 0으로 나눌 수 없습니다.\n");
			else
				printf("%d / %d = %d\n", first, second, first / second);
			break;
	}

	return 0;
}
