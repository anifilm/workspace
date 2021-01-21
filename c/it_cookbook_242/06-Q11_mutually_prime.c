/* 11
'서로 소'(Mutually Prime)는 1 이외에는 공약수가 없는 상태를 말한다. 예를 들어 5와 11은 1 이외에는 공약수가
없으므로 서로 소다. 두 정수 a, b가 인자로 전달될 때 서로 소라면 문자 'y'를, 그렇지 않으면 문자 'n'을 리턴하는
함수를 작성하고 main에서 그것을 불러 결과를 출력하는 프로그램을 작성하라.
힌트 2부터 a, b 중 작은 수까지만 루프를 돌리면서 어느 순간이라도 공약수가 있으면 곧바로 'n'를 리턴한다. 그렇지
않으면 끝까지 루프를 돈 다음에 빠져나와서 'y'을 리턴한다.
  char mutually_prime(int a, int b);

  > Enter two numbers.
  > 5 11 ([Enter])
  > They are mutually prime.
*/
#include <stdio.h>

char mutually_prime(int a, int b) {
    int i, t = a;
    if (a > b) t = b;
    for (i = 2; i < t; i++) {
        if (a % i == 0 && b % i == 0)
            return 'n';
    }
    return 'y';
}

int main() {

    int first, second;

    printf("Enter two number: ");
    scanf("%d %d", &first, &second);

    if (mutually_prime(first, second) == 'y')
        printf("They are mutually prime.\n");
    else
        printf("They are NOT mutually prime.\n");

    return 0;
}
