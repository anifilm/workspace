// 07 거스름돈 문제(Coin Change Problem)는 '주어진 잔돈을 동전으로 거슬러 주되 어떻게 하면
// 동전의 개수를 최소화 할 수 있는가'의 문제다. 어떤 자판기가 500원 100원 50원 10원짜리
// 동전을 자고 있을 경우 거스름 돈이 270원이면 얼마짜리 동전을 몇 개씩 주어야 하는지를 출력
// 하는 프로그램을 작성하라.
// 힌트 반드시 최적의 방법은 아니지만 이 문제를 해결하기 위한 방법 중 하나는 고액권을 많이
// 사용하는 것이다. 500원짜리는 너무 크니 일단 100원 짜리 2개를 준다. 그리고 70원 남으면 50원
// 짜리 1개, 그리고 20원이 남으니 10원 짜리 2개를 주면 된다. 거슬러 줄 금액을 입력받아 이 자판기
// 에서 얼마짜리 몇 개를 주어야 하는지를 출력하는 프로그램을 작성한다.

#include <stdio.h>

int main() {

    int coin;
    int coin_500, change_500;
    int coin_100, change_100;
    int coin_50, change_50;
    int coin_10;

    printf("Enter the amount of change: \n");
    scanf("%d", &coin);

    change_500 = coin % 500;
    coin_500 = (coin - change_500) / 500;
    change_100 = change_500 % 100;
    coin_100 = (change_500 - change_100) / 100;
    change_50 = change_100 % 50;
    coin_50 = (change_100 - change_50) / 50;
    coin_10 = change_50 / 10;

    printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", coin_500, coin_100, coin_50, coin_10);

	return 0;
}
