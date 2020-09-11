#include <stdio.h>

int main() {

    int i;
    float sum = 0.0f;

    for (i = 0; i < 100; i++)
        sum = sum + 0.1f;

    printf("The sum is %f\n", sum);

	return 0;
}

/*

부동 소수 연산에는 항상 오차가 개입 될수 있다는 점에 유의해야 한다.
예는 0.1을 100번 더한 값을 출력하는 프로그램이다.
이 프로그램을 샐행한 결과는 10.000000이 아니라 10.000002 이다.
부동 소수 표현에 오차가 있기 때문이다.
0.1을 2진수로 표현해 보면 그 이유를 알 수 있다.


[Real Number (Floating Point Numbers)]

float num1 = 0.1f;
double num2 = 3867.215820;
long double num3 = 9.3275131L;

%f  -> float, double
%Lf -> long double

*/
