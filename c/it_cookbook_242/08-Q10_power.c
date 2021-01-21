/* 10
양의 정수 a, b를 입력받아 a의 b 제곱을 출력하는 프로그램을 작성하되 재귀 함수로 구현해 보라.
  int power(int a, int b);

  > Enter base and multiplier.
  > 2 5 ([Enter])
  > 2 to the power of 5 is 32
*/
#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

int main() {

    int base, multi;

    printf("Enter base and multiplier.\n");
    scanf("%d %d", &base, &multi);

    printf("%d to the power of %d is %d\n", base, multi, power(base, multi));

    return 0;
}
