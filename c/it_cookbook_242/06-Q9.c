/* 09
0부터 9999 사이의 숫자를 입력받아 각 자릿수의 합을 계산하는 프로그램을 작성하라. 예를 들어 1325가 들어오면
숫자의 합은 1 + 3 + 2 + 5 = 11이 되어야 한다. 몫이 0보다 클 동안 계속해서 10으로 나눈 나머지를 더해야 한다.
  > Enter the number.
  > 1325 ([Enter])
  > The sum is 11
*/
#include <stdio.h>

int main() {

    int num, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum is %d\n", sum);


    return 0;
}
