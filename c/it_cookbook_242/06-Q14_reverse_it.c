/* 14
입력 자연수의 자릿수를 반대로 출력하는 프로그램을 작성하라. 예를 들어 1267을 입력하면 7621을 출력해야 한다.
단, 이 프로그램은 0이나 음수가 입력될 때까지 계속 반복되어야 한다.
힌트 주어진 수를 10으로 나눈 나머지를 출력한다. 10으로 나눈 몫에 대해 이 과정을 반복하되 몫이 0이면 빠져나온다.
  void reverse_it(int num);

  > Enter a natural number.
  > 1267 ([Enter])
  > 7621
  > Enter a natural number.
  > 12345 ([Enter])
  > 54321
  > Enter a natural number.
  > 0 ([Enter])
*/
#include <stdio.h>

void reverse_it(int num) {
    while (num) {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
}

int main() {

    int n_number;

    do {
        printf("Enter a natural number: ");
        scanf("%d", &n_number);
        reverse_it(n_number);
    } while (n_number > 0);

    return 0;
}
