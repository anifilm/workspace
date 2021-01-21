/* 03
세 개의 정수를 입력받아 평균을 구하는 프로그램을 작성하라. 단, 출력은 double 형으로서 소수점 이하 3자리까지
출력하기로 한다. 입력은 한 줄로 이어지되 입력 사이는 빈칸으로 구분하기로 한다.
힌트 나눗셈 도중 분자나 분모를 double로 변환하는 형 변환 연산자를 써야 한다.
  > Enter three intergers.
  > 2 3 5 ([Enter])
  > The average of 2, 3, 5 is 3.333.
*/
#include <stdio.h>

int main() {

    int a, b, c;
    double avg;

    printf("Enter three intergers: ");
    scanf("%d %d %d", &a, &b, &c);

    avg = (double)(a + b + c) / 3;
    printf("The average of %d, %d, %d is %lf.\n", a, b, c, avg);

    return 0;
}
