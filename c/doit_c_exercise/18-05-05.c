// '*' 문자 출력하기
#include <stdio.h>

int main() {

	int num, i;

	printf("'*' 문자를 몇 개 출력할까요?: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");

	return 0;
}
