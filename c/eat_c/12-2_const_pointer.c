// 상수 포인터
#include <stdio.h>

int main() {

    int a;
    int b;
    const int* pa = &a;

    //*pa = 3;  // 값 변경할 수 없다
    pa = &b;    // 주소 대입 가능

    return 0;
}
