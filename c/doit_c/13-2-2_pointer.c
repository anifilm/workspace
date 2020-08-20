// 다른 변수의 주소를 사용하여 포인터로 값 대입하기
#include <stdio.h>

int main() {

    short birthday;
    short *ptr;
    ptr = &birthday;    // birthday 변수의 주소값을 ptr 변수에 대입
    *ptr = 0x0412;      // birthday = 0x0412;

    printf("birthday = %d (0x%04x)\n", birthday, birthday);

	return 0;
}
