/* 도전! 프로그래밍 1
도전 4
필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근일에 DVD나 만화책을 잔뜩 빌리고, 동네
슈퍼에 들러서 군것질 거리를 사가지고 집에 들어가는 것이다. 오늘은 금요일이다. 현재
필자의 주머니에는 5천원이 있다. DVD 한편을 빌리면 3,500원이 남는다. 슈퍼에 들려서
크림빵(500원), 새우깡(700원), 콜라(400)를 사려한다. 잔돈을 하나도 남기지 않고 이
세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가? 물론
여기에는 여러 가지 경우의 수가 있을 것이다. 필자가 어떠한 선택을 할 수 있는지
여러분이 제시해 주기 바란다.

[실행의 예]
현재 당신이 소유하고 있는 금액: 3500
크림빵 1개, 새우깡 2개, 콜라 4개
크림빵 2개, 새우깡 3개, 콜라 1개
크림빵 4개, 새우깡 1개, 콜라 3개
어떻게 구입하시겠습니까?
*/
#include <stdio.h>

const int BREAD = 500;
const int SNACK = 700;
const int DRINK = 400;

int main() {

    int i, j, k;
    int myMoney;

    printf("현재 당신이 소유하고 있는 금액: ");
    scanf("%d", &myMoney);
    printf("\n");

    for (i = 1; i < myMoney / BREAD; i++) {
        for (j = 1; j < myMoney / SNACK; j++) {
            for (k = 1; k < myMoney / DRINK; k++) {
                if (myMoney == BREAD * i + SNACK * j + DRINK * k) {
                    printf("크림빵 %d개, ", i);
                    printf("새우깡 %d개, ", j);
                    printf("콜라 %d개\n", k);
                }
            }
        }
    }
    printf("\n어떻게 구입하시겠습니까?\n");

    return 0;
}
