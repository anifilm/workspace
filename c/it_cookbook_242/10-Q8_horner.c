/* 08
다항식 p(x) = 5.0x³ + 6.0x² + 7.0x¹ + 8.0을 평가하려면 5.0 * x * x * x + 6.0 * x * x + 7.0 * x + 8.0을
계산해야 한다. 그런데 곱셈 횟수가 많을수록 오류가 쌓인다. 부동 소수는 곱할 때마다 아래쪽 자릿수가 잘려 나가기
때문이다. 이에 대한 대안이 호르너 규칙(Horner's Rule)이다. 이는 예를 (((5.0(x + 6.0))x + 7.0)x + 8.0) 형태
로 계산하여 곱셈 횟수를 차수만큼으로 줄여 연산을 정확도를 높이는 방법이다. main에서 다항식의 차수와 계수를
입력받은 후에 아래 호르너 규칙을 적용한 함수를 호출하여 결과를 출력하는 프로그램을 작성하라. 여기서 n은 다항식의
차수, p[]는 계수를 저장한 배열, x는 변수 x의 값이다. 단, 다항식의 차수는 1차 이상으로 가정한다.
힌트 결과 값을 p[0]으로 초기화한 후 루프를 돌면서 p[i]에 x를 곱하고 p[i + 1]을 더한다.
2차 다항식의 경우 계수는 세 개다.
  double horner(const int n, const double p[], const double x);

  > Enter order of polynomial.
  > 2 ([Enter])
  > Enter 3 coefficients.
  > 1.0 2.0 3.0 ([Enter])
  > Enter the value of x.
  > 2.0 ([Enter])
  > The value of the polynomial is 11.000000
*/
#include <stdio.h>
#define MAX 5

double horner(const int n, const double p[], const double x) {
    int i;
    double result;
    result = p[0];
    for (i = 1; i < n; i++) {
        result = (result * x) + p[i];
        // result += (p[i] * x) + p[i + 1];
        // printf("%lf %lf\n", (p[i] * x), p[i + 1]);
        // printf("%lf\n", result);
    }
    return result;
}

int main() {

    int num, i;
    double poly[MAX], val;

    printf("Enter order of polynomial.\n");
    scanf("%d", &num);

    printf("Enter %d coefficients.\n", num + 1);
    for (i = 0; i <= num; i++)
        scanf("%lf", &poly[i]);

    printf("Enter the value of x.\n");
    scanf("%lf", &val);

    printf("The value of the polynomial is %lf\n", horner(num + 1, poly, val));

    return 0;
}
