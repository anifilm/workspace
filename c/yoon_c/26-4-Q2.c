/* 문제 26-1 [매크로의 정의]
문제 2
원주율 PI를 매크로 상수로 정의하고 이를 이용해서 원의 넓이를 구하는 매크로 함수 AREA를
정의해 보자.
*/
#include <stdio.h>

#define PI 3.14
#define AREA(R)  ((R) * (R)) * PI

int main() {

    double rad;

    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);

    printf("원의 넓이: %g\n", AREA(rad));

    return 0;
}
