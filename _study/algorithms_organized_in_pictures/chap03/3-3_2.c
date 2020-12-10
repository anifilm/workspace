// 1부터 사용자가 지정한 수까지 홀수만 출력하는 알고리즘
#include <stdio.h>

int main() {

    int limit, i;

    printf("정수를 입력: ");
    scanf("%d", &limit);    // 입력 받음

    for (i = 1; i <= limit; i += 2) // 순환하며 출력
        printf("%d ", i);
    printf("\n");

    return 0;
}
