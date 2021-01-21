/* 03
1부터 입력 정수 n까지의 합을 구하되 5의 배수는 제외한 합을 구하라. 단, 이 프로그램은 반드시 continue 문을
사용해야 한다.
  > Enter a natural number.
  > 6 ([Enter])
  > The sum is 16
*/
#include <stdio.h>

int main() {

    int num, i, sum = 0;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {
        if (i % 5 == 0)
            continue;
        else
            sum += i;
    }

    printf("The sum is %d\n", sum);

    return 0;
}
