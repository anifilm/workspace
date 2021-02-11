/* 15
제품의 단가, 개수, 급행 여부를 물어보고 지불해야 할 운송료 총액을 계산하는 프로그램을 작성하라. 단, 금액이
20000원 이상이면 운송료는 1500원이고 그 미만이면 2000원이다. 또, 급행일 경우에는 1000원이 추가된다.
  > 단가를 입력하세요.
  > 5000 ([Enter])
  > 개수를 입력하세요.
  > 6 ([Enter])
  > 급행 여부를 입력하세요. (1: 급행, 0: 아님)
  > 1 ([Enter])
  > 지불해야 할 총액은 32500원 입니다.
*/
#include <stdio.h>

int calc_shipping_price(int p, int a, int e) {
    int ship_price;
    int total = p * a;

    if (total > 20000)
        if (e == 1)
            ship_price = 1500 + 1000;
        else
            ship_price = 1500;
    else
        ship_price = 2000;

    return total + ship_price;
}

int main() {

    int price, amount, is_exp, total_cost;

    printf("단가를 입력하세요.\n");
    scanf("%d", &price);

    printf("개수를 입력하세요.\n");
    scanf("%d", &amount);

    printf("급행 여부를 입력하세요. (1: 급행, 0: 아님)\n");
    scanf("%d", &is_exp);

    total_cost = calc_shipping_price(price, amount, is_exp);

    printf("\n지불해야 할 총액은 %d원 입니다.\n", total_cost);

    return 0;
}
