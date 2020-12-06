// 특정 함수에서만 전역 변수 사용하기
#include <stdio.h>


void Test() {
    static int data = 0;        // 해당 함수 내에서 사용 가능한 전역 변수 선언
    printf("%d, ", data++);
}

int main() {

    int i;

    for (i = 0; i < 5; i++) Test();
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

    return 0;
}
