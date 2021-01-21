/* 05
통계학에서 변이(variance)란 평균과의 차이 제곱을 모두 더해 그것을 데이터 수로 나눈 값이다. 변이에 루트를 취하면
표준 편차(Standard Deviation)가 된다. 3.0, 5.0, 7.0이라는 데이터가 있다면 평균은 (3.0 + 5.0 + 7.0) / 3 = 5.0
이다. 따라서 변이는 ((5.0 - 3.0)² + (5.0 - 5.0)² + (5.0 - 7.0)²) / 3 = 2.666667 이다. 표준 편차를 계산하려면
변이에 루트를 씌야하 하므로 math.h에 정의된 sqrt 함수를 불러야 한다. 세 개의 실수를 입력받은 후 표준 편차를 계산
하는 프로그램을 작성하되 main에서 반드시 printf("Standard deviation is %lf\n"), std_deviation(a, b, c));
라는 명령문을 호출하라.
힌트 main에서 std_deviation 함수를 호출하고 std_deviation 함수 내부에서 average 함수를 호출한다.
  double average(double a, double b, double c);
  double std_deviation(double a, double b, double c);

  > Enter a three real numbers.
  > 3 5 7 ([Enter])
  > Standard deviation is 1.632993
*/
#include <stdio.h>
#include <math.h>

double average(double a, double b, double c);
double std_deviation(double a, double b, double c);

int main() {

    double first, second, third;

    printf("Enter a three real numbers: ");
    scanf("%lf %lf %lf", &first, &second, &third);

    printf("Standard deviation is %lf\n", std_deviation(first, second, third));

    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

double std_deviation(double a, double b, double c) {
    double avg = average(a, b, c);
    double variance = (pow((avg - a), 2.0) + pow((avg - b), 2.0) + pow((avg - c), 2.0)) / 3;
    return sqrt(variance);
}
