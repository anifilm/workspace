// 공백 문자로 구분해서 scanf 함수로 8, 10, 16진수 입력 받기
#include <stdio.h>

int main() {

    int num1, num2, num3;
    scanf("%o %d %x", &num1, &num2, &num3); // 8, 10, 16진수 값을 입력 받음

    printf("input: %d %d %d\n", num1, num2, num3);

	return 0;
}
