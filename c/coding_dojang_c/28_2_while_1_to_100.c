#include <stdio.h>

int main() {

    int i = 1;

    while (i <= 100) {  // i가 100보다 작거나 같을 때까지 반복.
                        // 1에서 100까지 증가하면서 100번 반복
        printf("Hello, world! %d\n", i);
        i++;            // i를 1씩 증가시킴
    }

    return 0;
}
