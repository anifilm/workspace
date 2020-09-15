// 12 비만을 평가하는 기준에는 여러 가지가 있지만 보편적으로 사용하는 방법은 체질량 지수
// (BMI: Body Mass Index)다. 이는 몸무게를 키의 제곱으로 나눈 값으로서 미국은 BMI 지수가
// 18.5 미만이면 저체중(Underweight)으로 분류한다. 또, 18.5 이상 25.0 미만이면 정상 체중
// (Normal), 25.0 이상이면 과체중(Overweight)으로 분류한다. 예를 들어, 몸무게 72kg에 키
// 1.76m 인 경우 체질량 지수는 74 / (1.76)² = 23.8 로서 정상 체중이다. 몸무게와 키를 입력
// 받아 BMI 평가 결과를 출력하는 프로그램을 작성하라.
// > Enter your height:
// > 176 ([Enter])
// > Enter your weight:
// > 73 ([Enter])
// > Your BMI is 23.57. It is normal.
#include <stdio.h>

double calc_bmi(double height, double weight) {
    return weight / ((height * 0.01) * (height * 0.01));
}

void view_bmi_res(double bmi) {
    printf("\nYour BMI is %.2lf. ", bmi);
    if (bmi > 18.5 && bmi < 25.0)
        printf("It is normal.\n");
    else if (bmi > 25.0)
        printf("It is overweight.\n");
    else
        printf("It is underweight.\n");
}

int main() {

    double h, w;

    printf("Enter your height: ");
    scanf("%lf", &h);

    printf("Enter your weight: ");
    scanf("%lf", &w);

    view_bmi_res(calc_bmi(h, w));

    return 0;
}
