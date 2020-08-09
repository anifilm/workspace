#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    while (count > 0) {                    // count가 0보다 클때까지 반복
        printf("Hello, world! %d\n", count);
        count--;                           // count를 1씩 증가시킴
    }

    return 0;
}
