// * 연산자
#include <stdio.h>

int main() {

	int *p;
	int a;

	p = &a;		// 포인터 p에 a의 메모리 주소값을 대입
	*p = 3;		// 포인터 p의 메모리 주소에 있는 값을 3으로 대입

	printf("a의 값: %d\n", a);
	printf("*p의 값: %d\n", *p);		// 포인터 p의 메모리 주소에 있는 값을 출력

	return 0;
}
