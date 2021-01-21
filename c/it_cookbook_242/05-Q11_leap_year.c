/* 11
윤년이란 2월이 29일까지 있는 해를 말한다. 이는 4로 나누어 떨어지지만 100으로는 나누어 떨어지지 않거나 4로
나누어 떨어지는 동시에 400으로 나누어 떨어지는 해를 말한다. 아래 함수를 사용하여 연도가 주어질 때 윤년인지
아닌지를 출력하는 프로그램을 작성하라.
  int leap_year(int y);

  > Enter year:
  > 2000 ([Enter])
  > 2000 is a leap year.
*/
#include <stdio.h>

int leap_year(int y) {
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {

    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (leap_year(year) == 1)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is NOT a leap year.\n", year);

    return 0;
}
