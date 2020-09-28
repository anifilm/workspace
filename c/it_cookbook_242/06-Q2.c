// 02 1부터 n까지의 합을 구하되 그 합이 입력 정수를 넘지 않아야 한다는 조건 하에서 최대값을 구하라.
// > Enter a maximum number:
// > 1000 ([Enter])
// > The sum from 1 to 44 is 990
#include <stdio.h>

int main() {

    int max, sum = 0, i = 1;

    printf("Enter a maximum number: ");
    scanf("%d", &max);

    while (1) {
        sum += i;
        if (sum > max) break;
        i++;
    }
    // 누적 단계를 한 단계 이전으로 되돌림
    sum -= i;
    i--;

    printf("\nThe sum from 1 to %d is %d\n", i, sum);

    return 0;
}
