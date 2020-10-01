// 범위에 포함된 영문자 출력하기 (C, 1)
#include <stdio.h>

int main() {

	char start, end;

	printf("시작 문자: ");
	scanf("%c", &start);
	while (getchar() != '\n');

	printf("끝 문자: ");
	scanf("%c", &end);
	while (getchar() != '\n');
	
	printf("\n");
	if (start < end) {
		printf("%c ~ %c: ", start, end);
		for ( ; start < end; start++)
			printf("%c, ", start);
		printf("%c", start);
	} else if (start > end) {
		printf("%c ~ %c: ", start, end);
		for ( ; start > end; start--)
			printf("%c, ", start);
		printf("%c", start);
	} else {
		printf("%c ~ %c: ", start, end);
		printf("%c", start);
	}
	printf("\n");


	return 0;
}
