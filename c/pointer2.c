#include <stdio.h>

int main() {

	int *p;
	int a;

	p = &a;		// 포인터 p에 a의 메모리 주소값을 대입

	printf("포인터 p에 들어 있는 값: %p\n", p);
	printf("int 변수 a가 저장된 주소: %p\n", &a);		// &a 메모리의 주소값을 보여준다

	return 0;
}
