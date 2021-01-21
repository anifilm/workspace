/* 09
짝수인지 홀수인지 판정은 비트 연산으로도 가능하다. 홀수의 2진 표현은 1로 끝나기 때문에 비트 단위로 1을 곱하면
1이 되기 때문이다. 예를 들어 11 & 1 = (1011) & (0001) = (0001) = 1 이 된다. 숫자를 입력받아 &(Bitwise AND)
연산에 의해 그것이 짝수인지 홀수인지 판정하는 프로그램을 작성하라.
  > Enter an integer:
  > 201 ([Enter])
  > 201 is odd number.
*/
#include <stdio.h>

void odd_even(int n) {
    if ((n & 1) == 1)
        printf("%d is odd number.\n", n);
    else
        printf("%d is even number.\n", n);
    return;
}

int main() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    odd_even(num);

    return 0;
}
