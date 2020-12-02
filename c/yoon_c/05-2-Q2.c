/* 문제 05-1 [scanf 함수와 아스키 코드]
문제 2
프로그램 사용자로부터 두 개의 실수를 입력 받아서 double형 변수에 저장하자. 그리고 두 수의
사칙연산 결과를 출력해보자.
*/
#include <stdio.h>

int main() {

    double num1, num2;

    printf("두 개의 실수를 입력: ");
    scanf("%lf %lf", &num1, &num2);

    printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
    printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
    printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
    printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);

    return 0;
}
