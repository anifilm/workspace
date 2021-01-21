/* 12
입력된 자연수 n이 소수인지를 확인하는 프로그램을 작성하되 재귀 함수로 구현해 보라. 이 함수는 인자 n이
소수 이면 1을, 그렇지 않으면 0을 돌려준다. 둘째 인자인 half는 n/2에 해당하는 정수다.
힌트 어떤 수가 소수인지 판단하려면 n/2 또는 sqrt(n)까지로만 나누어 보면 된다. n이 half로 나누어 떨어지면
소수가 아니다. 그렇지 않을 경우 half를 하나 줄여서 재귀 호출한다. 베이스 케이스는 half가 1일때다.
  int is_prime(int n, int half);

*/
#include <stdio.h>

int is_prime(int n, int half) {
    if (half == 1)           // 베이스 케이스는 half가 1일때
        return 1;
    else if (n % half == 0)  // n이 half로 나누어 떨어지면 소수가 아님
        return 0;
    else {                   // 그렇지 않을 경우 half를 하나 줄여서 재귀 호출
        return is_prime(n, half - 1);
    }
}

int main() {

    int num;

    printf("Enter a integer: ");
    scanf("%d", &num);

    if (is_prime(num, num / 2))
        printf("%d is prime number.\n", num);
    else
        printf("%d is NOT prime number.\n", num);

    return 0;
}
