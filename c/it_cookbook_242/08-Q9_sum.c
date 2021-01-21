/* 09
자연수 n을 입력받아 sum = 12 + 22 + ... + n2를 계산하여 출력하되 재귀 함수로 구현해 보라.
힌트 인자에서 10을 빼면서 재귀 호출한다. 베이스 케이스는 2일 때다.
  int sum(int n);

*/
#include <stdio.h>

int sum(int n) {
    if (n == 2)
        return 0;
    else
        return (n + sum(n - 10));
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("\nSum of 12 to %d is %d\n", num * 10 + 2, sum(num * 10 + 2));

    return 0;
}
