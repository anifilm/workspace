/* 05
자연수 n을 입력받은 후 재귀 호출에 의해 1부터 n까지의 합을 출력하는 프로그램을 작성하라.
힌트 베이스 케이스가 아닌 경우 n + sum(n - 1)을 리턴한다.
  int sum(int n);

*/
#include <stdio.h>

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return (n + sum(n - 1));
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("\nSum of 1 to %d is %d\n", num, sum(num));

    return 0;
}
