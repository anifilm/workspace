// 8비트 정수의 비트 값 확인 (보수 포함)
#include <stdio.h>

void ShowValue(unsigned char a_num) {
	printf("Hexa (0x%02X), unsigned (%4u), signed (%4d), Bin (", a_num, a_num, (char)a_num);
	for (int i = 0; i < 8; i++) {
		printf("%d", (a_num & (0x80 >> i)) >> (7 - i));
		// 4개의 비트 값을 출력하고 공백 문자을 출력
		if (i == 3) printf(" ");
	}
	printf(")\n");

}

int main() {

	unsigned char num;

	while (1) {
		printf("Input number (1 ~ 255, Exit -> 0): ");
		scanf("%hhu", &num);
		if (num == 0) break;

		printf("입력된 값   -> ");
		ShowValue(num);

		printf("1의 보수 값 -> ");
		num = ~num;		// 현재 비트 값을 반전시키면 1의 보수 값이 된다.
		ShowValue(num);

		printf("2의 보수 값 -> ");
		num++;			// 1의 보수 값에 1을 더하면 2의 보수 값이 된다.
		ShowValue(num);

		printf("\n");
	}

	return 0;
}
