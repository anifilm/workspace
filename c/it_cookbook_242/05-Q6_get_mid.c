/* 06
체조 경기에서는 가장 낮은 점수와 가장 높은 점수를 제외한 나머지 점수만 평가에 반영한다. 문제를 단순화하여 3명의
심판이 1에서 10점까지 점수를 줄 경우 선수가 받는 점수를 계산해 보라. 단, 세 심판이 모두 서로 다른 점수를 준다고
가정하라.
힌트 입력 점수 중 어느 하나가 최대이거나 최소이면 해당 점수를 0으로 놓아 덧셈 계산에서 제외할 수 있다.
  > Enter scores of three judges:
  > 10 5 7 ([Enter])
  > The player gets 7
*/
#include <stdio.h>

int get_mid(int a, int b, int c);

int main() {

    int first, second, third;

    printf("Enter scores of three judges: ");
    scanf("%d %d %d", &first, &second, &third);

    printf("The player gets %d\n", get_mid(first, second, third));

    return 0;
}

int get_mid(int a, int b, int c) {
    // find min value
    if (a < b) {
        if (a < c)
            a = 0;
        else
            c = 0;
    } else {
        if (b < c)
            b = 0;
        else
            c = 0;
    }
    // find max value
    if (a > b) {
        if (a > c)
            a = 0;
        else
            c = 0;
    } else {
        if (b > c)
            b = 0;
        else
            c = 0;
    }
    return a + b + c;
}
