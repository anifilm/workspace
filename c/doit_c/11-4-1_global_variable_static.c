// 특정 소스 코드 내에서만 전역 변수 사용하기
#include <stdio.h>

static int data = 0;        // 해당 코드 내에서 사용 가능한 전역 변수 선언

void Test() {
    printf("%d, ", data++);
}

int main() {

    int i;

    for (i = 0; i < 5; i++) Test();

    printf("%d\n", data);

    return 0;
}
