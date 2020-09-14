// 03 단가(unit_price)와 개수(quantity)를 입력받아 총액(total_price)을 출력하는
// 프로그램을 작성하라. 단, 단가, 개수, 총액은 정수형이어야 한다. 개수가 10개를 넘을 때는
// 총액에서 5%를 할인한 금액을 출력해야 한다. 입출력 형식은 자유로이 할 수 있다.
// 힌트 0.95를 곱한 결과를 정수형으로 변환해야 한다.
#include <stdio.h>

int main() {

    int unit_price, quantity, total_price;

    printf("단가와 개수를 입력하세요: ");
    scanf("%d %d", &unit_price, &quantity);

    if (quantity > 10)
        total_price = (int)(unit_price * 0.95) * quantity;
    else
        total_price = unit_price * quantity;

    printf("총액은 %d 입니다.", total_price);

    return 0;
}
