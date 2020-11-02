// 상수 포인터 2
#include <stdio.h>

int main() {

    int a;
    int b;
    int* const pa = &a;

    *pa = 3;    // 값 대입 가능
    //pa = &b;  // 주소 변경할 수 없다

    return 0;
}
