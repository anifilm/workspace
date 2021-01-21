/* 15
컴퓨터는 클럭이 만드는 박자에 맞추어 움직인다. time.h에 선언된 clock_t clock();이라는 원형의 함수는
프로그램 시작 후 지금까지 발생한 클럭 신호의 횟수를 리턴하는 함수다. 이를 매크로 상수 CLOCKS_PER_SEC로
나눈후 float로 변환하면 경과 시작을 초 단위로 계산할 수 있다. [예제 8-22]를 수정하여 fib 함수 실행에
걸린 시간을 측정하는 프로그램을 작성하라.
  > Enter the number N
  > 30 ([Enter])
  > 30th fibonacci number is 832040
    Time elapsed for fibonacci is 0.036 seconds.
*/
#include <stdio.h>
#include <time.h>

long long fib(long long n) {
    if (n < 3)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main() {

    clock_t start, end;
    float res;
    long long num;

    printf("Enter a number N: ");
    scanf("%lld", &num);

    start = clock();
    printf("\n%lldth fibonacci number is %lld\n", num, fib(num));
    end = clock();
    res = (float)(end - start) / CLOCKS_PER_SEC;
    printf("Time elapsed for fibonacci is %f seconds.\n", res);

    return 0;
}
