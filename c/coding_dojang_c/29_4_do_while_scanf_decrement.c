#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    do {    // 처음 한번은 아래 코드가 실행됨
        printf("Hello, world! %d\n", count);    // Hello, world!와 count의 값을 함께 출력
        count--;                            // count를 1씩 감소시킴
    } while (count > 0);      // count가 0보다 클 때까지 반복

    return 0;
}
