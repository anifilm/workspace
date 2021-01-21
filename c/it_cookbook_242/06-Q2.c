/* 02
1부터 n까지의 합을 구하되 그 합이 입력 정수를 넘지 않아야 한다는 조건 하에서 최대값을 구하라.
  > Enter a maximum number.
  > 1000 ([Enter])
  > The sum from 1 to 44 is 990
*/
#include <stdio.h>

int main() {

    int i, n, sum = 0;

    printf("Enter a maximum number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (sum + i > n) break;  // 합이 입력 정수를 넘지 않도록
        sum += i;
    }

    printf("The sum from 1 to %d is %d\n", --i, sum);

    return 0;
}
