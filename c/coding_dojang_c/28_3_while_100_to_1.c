#include <stdio.h>

int main() {

    int i = 100;

    while (i > 0) {     // i가 0보다 클 때까지 반복.
                        // 100에서 1까지 증가하면서 100번 반복
        printf("Hello, world! %d\n", i);
        i--;            // i를 1씩 감소시킴
    }

    return 0;
}
