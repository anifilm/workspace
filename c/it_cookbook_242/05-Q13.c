// 13 현행 가정용 전기 요금 누진제에 의하면 월 소비량이 200Kwh 이하일 경우 기본 요금 910원에
// 단가 93.3원이다. 또, 201Kwh 부터 400Kwh 까지는 기본요금 1600원에 단가 187.9원 이고 401Kwh
// 이상은 기본요금 7300원에 단가 280.6원 이다. 하지만 여름과 겨울에 1000Kwh 를 초과하면 기본
// 요금 7300원에 단가 709.5원이 적용된다. 이렇게 하여 요금이 계산되면 여기에 세금 13.7% (부가
// 가치세 10%, 전력산업 기반기금 3.7%)가 추가되어 청구액이 결정된다. 전력 사용량을 입력받아
// 청구액을 계산하는 프로그램을 작성하라.
// 힌트 사용량은 정수형, 요금은 double형, 청구액은 요금에 1.137을 곱한 후 정수형으로 형변환을 한다.
// > Enter monthly amount in Kwh:
// > 500 ([Enter])
// > Enter 1 if summer or winter, 0 of not:
// > 1 ([Enter])
// > Including tax, you pay 167821 won.
#include <stdio.h>
#define TAX 1.137

int calc_pay(int a, int s) {
    double pay_val;
    if (a <= 200)
        pay_val = a * 93.3 + 910;
    else if (a > 200 && a <= 400)
        pay_val = a * 187.9 + 1600;
    else if (a > 401 && a <= 1000)
        pay_val = a * 280.6 + 7300;
    else if (a > 1000 && s == 1)
        pay_val = a * 709.5 + 7300;
    return (int)(pay_val * TAX);
}

int main() {

    int amount, season;

    printf("Enter monthly amount in Kwh: ");
    scanf("%d", &amount);

    printf("Enter 1 if summer or winter, 0 of not: ");
    scanf("%d", &season);

    printf("Including tax, you pay %d won.", calc_pay(amount, season));

    return 0;
}
