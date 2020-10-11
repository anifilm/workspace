// 06 다음과 같이 선언하고 p가 가리키는 구조체에 name, price, seasonal_sales 값을 입려받은
// 후에 계절별 판매량을 모두 더하고 거기에 가격을 곱해 연간 판매액을 출력하라.
// > Enter item name.
// > grapefruit ([Enter])
// > Enter unit price.
// > 400 ([Enter])
// > Enter seasonal sales.
// > 290 120 130 310 ([Enter])
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;             // 아이템 명
    int price;              // 단가
} infoType;

typedef struct {
    infoType item;          // 아이템 정보
    int seasonal_sales[4];  // 계절별 판매량
} itemType;

int main() {

    itemType *p;
    int i, season_sales_sum = 0, total_sales;

    printf("Enter item name.\n");
    scanf("%s", p->item.name);

    printf("Enter unit price.\n");
    scanf("%d", &p->item.price);

    printf("Enter seasonal sales.\n");
    for (i = 0; i < 4; i++)
        scanf("%d", &p->seasonal_sales[i]);

    for (i = 0; i < 4; i++)
        season_sales_sum += p->seasonal_sales[i];
    total_sales = season_sales_sum * p->item.price;

    printf("Yearly income of %s is %d\n", p->item.name, total_sales);

    return 0;
}
