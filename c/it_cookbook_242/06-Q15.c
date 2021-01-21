/* 15
일련의 자연수를 입력받아 지속적으로 평균값을 출력하는 프로그램을 작성하라. 단, 0이나 음수가 입력되면 프로그램을
종료한다. 반드시 while 루프를 사용해야 하며 평균값은 소수이하 셋째 자리까지 표시해야 한다. 단, 처음부터 0이나
음수가 들어오면 곧바로 프로그램을 종료해야 한다.
  > Enter a natural number.
  > 4 ([Enter])
  > Current average is 4.000
  > Enter a natural number.
  > 2 ([Enter])
  > Current average is 3.000
  > Enter a natural number.
  > -1 ([Enter])
*/
#include <stdio.h>

int main() {

    int num, sum = 0, count = 1;
    double average;

    while (1) {
        printf("Enter a natural number: ");
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
            average = sum / count;
            printf("Current average is %.3lf\n", average);
            count++;
        } else
            break;
    }

    return 0;
}
