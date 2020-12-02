// 실수를 표현 및 처리하기 위한 일반적인 자료형의 선택
#include <stdio.h>

int main() {

    double rad;
    double area;

    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);

    area = rad * rad * 3.1415;
    printf("원의 넓이: %lf\n", area);

    return 0;
}
