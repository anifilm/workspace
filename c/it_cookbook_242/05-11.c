/*

> Enter thr coefficients a, b, c
> 1 -4 3 ([Enter])
> The roots are, 3.000, 1.000

위와 같이 정수 a, b, c를 입력받아 ax² + bx + x = 0 의 근을 구하는 프로그램을 작성해 보자.
단, 2차 방정식의 판별식 D(= b² - 4ac)의 값은 0 이상으로 가정하기로 한다. 일단 알고리즘을
생각해 보자. 프로그램은 항상 특수한 경우의 입력을 예상하고 처리할 수 있어야 한다.
a와 b 모두가 -으로 입력될 때도 있을 것이다. 그 경우에 예는 0차 방정식이라고 할 수 있다.
a는 0 이지만 b가 0이 아니면 1차 방정식이다. a가 0이 아니면 2차 방정식이다. 따라서 다음과
같은 의사 코드를 써서 알고리즘을 표현할 수 있다.

1. 정수 a, b, c를 입력받는다.
2. 몇 차 방정식인지 판단한다.
3. 2차 방정식이면 판별식 D 값을 계산한고 근의 공식에 대입하여 두 실근을 출력한다.
4. 1차 방정식이면 하나의 근을 계산하여 출력한다.
5. 0차 방정식이면 근이 없다고 출력한다.

*/

#include <stdio.h>
#include <math.h>

void zero_order(int a, int b, int c) {
    printf("There is no root.\n");
}

void first_order(int a, int b, int c) {
    printf("The root is, %.3f\n", (-c) / (double)b);
}

double calc_D(int a, int b, int c) {
    return (double)(b * b - 4 * a * c);
}

void second_order(int a, int b, int c) {
    double root1, root2, D, root_D;
    D = calc_D(a, b, c);
    root_D = sqrt(D);
    root1 = (-b + root_D) / (double)(2 * a);
    root2 = (-b - root_D) / (double)(2 * a);
    printf("The roots are, %.3f, %.3f\n", root1, root2);
}

int main() {

    int a, b, c;

    printf("Enter the coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0)
        second_order(a, b, c);
    else if (b != 0)
        first_order(a, b, c);
    else
        zero_order(a, b, c);

    return 0;
}
