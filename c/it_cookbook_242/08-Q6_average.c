/* 06
두 정수의 평균을 구할 수도 있고 세 정수의 평균을 구할 수도 있는 가변 길이 함수를 구현하라. 또, 프로그램이
시작하면 경우 별로 인자의 개수와 값을 입력받아 평균을 출력하는 프로그램을 작성하라.
  double average(int count, ...);

  > Enter number of arguments. It must be 2 or 3.
  > 3 ([Enter])
  > Enter three integers.
  > 80 90 100 ([Enter])
  > Average value is 90.000000
*/
#include <stdio.h>
#include <stdarg.h>

double average(int count, ...) {
    int i;
    double sum = 0.0;

    va_list(p);
    va_start(p, count);
    for (i = 0; i < count; i++) {
        sum += va_arg(p, double);
    }
    va_end(p);
    return sum / count;
}

int main() {

    int num;
    double first, second, third;

    while (1) {
        printf("Enter number of arguments. It must be 2 or 3.\n");
        scanf("%d", &num);
        if (num != 2 && num != 3)
            printf("Retry input!\n");
        else
            break;
    }

    if (num == 2) {
        printf("Enter two integers.\n");
        scanf("%lf %lf", &first, &second);
        printf("Average value is %lf\n", average(num, first, second));
    } else {
        printf("Enter three integers.\n");
        scanf("%lf %lf %lf", &first, &second, &third);
        printf("Average value is %lf\n", average(num, first, second, third));
    }

    return 0;
}
