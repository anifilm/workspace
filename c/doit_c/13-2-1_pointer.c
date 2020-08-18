// 변수가 위치한 메모리 주소 출력하기
#include <stdio.h>

int main() {

    short birthday;
    short *ptr;         // 포인터 변수 선언
    ptr = &birthday;    // birthday 변수의 주소값를 ptr 변수에 대입

    printf("birthday 변수의 주소는 %p 입니다.\n", ptr);

	return 0;
}
