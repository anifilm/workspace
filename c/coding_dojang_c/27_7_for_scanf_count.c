#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (; count > 0; count--) {        // 초기값 없이 scanf에서 사용한 변수를 감소시켜서 반복
        printf("Hello, world! %d\n", count);
    }

    return 0;
}
