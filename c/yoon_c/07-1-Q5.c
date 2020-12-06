/* 문제 07-1 [while문의 활용]
문제 5
프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 다음 두 가지
조건을 만족시켜야 한다.
  "먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를
  입력 받는다."
  "평균 값은 소수점 이하까지 계산해서 출력한다."
*/
#include <stdio.h>

int main() {

    int num_of_int, i, num, sum = 0;
    double avg;

    printf("몇 개의 정수를 입력? ");
    scanf("%d", &num_of_int);

    i = 0;
    while (i < num_of_int) {
        printf("정수를 입력: ");
        scanf("%d", &num);
        sum += num;
        i++;
    }

    avg = (double)sum / num_of_int;
    printf("\n입력받은 정수의 평균값은 %.2lf\n", avg);

    return 0;
}
