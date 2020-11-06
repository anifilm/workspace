// 특정 함수에서만 전역 변수 사용하기
#include <stdio.h>


void Test() {
    static int data = 0;        // 해당 함수 내에서 사용 가능한 전역 변수 선언
    printf("%d, ", data++);
}

int main() {

    int i;

    for (i = 0; i < 5; i++) Test();
    // printf("%d\n", data);    // 해당 함수가 아니어서 사용 불가

    return 0;
}
