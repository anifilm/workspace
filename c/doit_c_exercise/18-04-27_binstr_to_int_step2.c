// 2진수 형태의 문자열을 정수로 변경하기 (C, 2)
#include <stdio.h>
#define MAX_BIT_COUNT 33

int main() {

	char str[MAX_BIT_COUNT];	// 2진수 형태의 문자열을 저장할 변수
	int i, num = 0;

	printf("Input Bit: ");
	scanf("%s", str);
	fgets(str, MAX_BIT_COUNT, stdin);

	// 2진수 형식의 문자열을 정수로 변경
	for (i = 0; i < 4; i++)
		// num = num * 2 + str[i] - '0';
		num = (num << 1) + str[i] - '0';

	// 정수로 바뀐 값을 10진수와 16진수 형태로 출력
	printf("Decimal = %d, Hexa = 0x%02X\n", num, num);

	return 0;
}
