// int 정수값을 바이트 단위로 출력하기
#include <stdio.h>

int main() {

	int i, value = 0x12345678;
	char *p = (char *)&value;

	printf("value = 0x%x, bytelist = ", value);
	for (i = 0; i < 3; i++) {
		printf("0x%x, ", *(p + i));
	}
	printf("0x%x\n", *(p + i));

	return 0;
}
