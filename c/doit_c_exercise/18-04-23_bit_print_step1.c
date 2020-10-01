// 8비트 정수의 비트 값 확인 (보수 포함)
#include <stdio.h>

int main() {

	unsigned char num;

	while (1) {
		printf("Input number (1 ~ 255, Exit -> 0): ");
		scanf("%hhu", &num);
		if (num == 0) break;

		printf("입력된 값   -> ");
		printf("Hexa (0x%02X), unsigned (%4u), signed (%4d)\n", num, num, (char)num);

		printf("1의 보수 값 -> ");
		num = ~num;		// 현재 비트 값을 반전시키면 1의 보수 값이 된다.
		printf("Hexa (0x%02X), unsigned (%4u), signed (%4d)\n", num, num, (char)num);

		printf("2의 보수 값 -> ");
		num++;			// 1의 보수 값에 1을 더하면 2의 보수 값이 된다.
		printf("Hexa (0x%02X), unsigned (%4u), signed (%4d)\n", num, num, (char)num);

		printf("\n");
	}

	return 0;
}
