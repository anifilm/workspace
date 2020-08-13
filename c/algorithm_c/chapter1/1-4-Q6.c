// Q6 실습 1-4에서 while문이 종료될 때 변수 i값이 n+1이 됨을 확인하세요.
// (변수 i값을 출력하도록 프로그램을 수정하시오)
#include <stdio.h>

int main(void) {

    int i, n;
    int sum;

    n = 4;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: %d\n", n);
    // scanf("%d", &n);

    sum = 0;
    i = 1;

    while (i <= n) {    // i가 n 이하이면 반복합니다.
        sum += i;       // sum에 i를 더합니다.
        i++;            // i값을 1 증가 시킵니다.
    }

    printf("1부터 %d까지의 합은 %d 입니다. (변수 i값: %d)\n", n, sum, i);

    return 0;
}
