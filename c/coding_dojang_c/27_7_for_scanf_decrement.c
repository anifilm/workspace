#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = count; i > 0; i--) {   // 입력받은 값을 감소시키면서 반복
        printf("Hello, world! %d\n", i);
    }

    return 0;
}
