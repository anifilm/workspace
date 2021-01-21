/* 07
앞의 06번 문제를 해결하는 또 다름 방법은 서로 다른 숫자를 상쇄하는 방법이다. 예를 들어 2, 1, 3, 1, 2, 3, 3이
들어왔을 때 처음 2와 1은 서로 다른 숫자이므로 상쇄시킨다. 이후 3과 1을 상쇄시키고 2와 3을 상쇄시키면 3만 남는다.
만약 어떤 숫자가 과반수라면 그것과 다른 모든 수를 일대일로 상쇄시켜도 살아남아야 한다. 그러나 이 예에서 보듯이
살아남은 숫자라고 해서 반드시 과반수는 아니므로 살아남은 숫자가 배열 전체에서 몇 번 나타나는지 확인해야 한다.
이 방법을 써서 위 문제를 해결하는 프로그램을 작성하라.
힌트 또 다른 배열을 만들어 상쇄된 요소를 모두 0으로 표시하기로 하고 요소별로 그 이전에 있는 모든 요소와 비교해서
서로 다르면 둘 다 0으로 만든다. 단, 비교 시에 0은 이미 상쇄된 요소이므로 비교 대상에서 제외한다. 이후 원본 배열
에서 0이 아닌 요소의 개수를 세어 과반수인지 확인한다.
  > Enter the result of voting.
  > 4 2 4 1 4 7 4 3 4 4 ([Enter])
  > Number 4 is the winner.
*/
#include <stdio.h>

int main() {

    int i, j, max, winner = 1, vote[10], count[8] = {0};

    printf("Enter the result of voting.\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &vote[i]);

    for (i = 0; i < 10; i += 2) {
        if (vote[i] != vote[i + 1])
            vote[i] = vote[i + 1] = 0;
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 8; j++) {
            if (vote[i] == j + 1)
                count[j]++;
        }
    }

    // for (j = 0; j < 8; j++)
    //     printf("%d ", count[j]);
    // printf("\n");

    max = count[0];
    for (j = 1; j < 8; j++) {
        if (count[j] > max) {
            max = count[j];
            winner = j + 1;
        }
    }

    if (max > 1)
        printf("Number %d is the winner.\n", winner);
    else
        printf("Voting is draw.\n");

    return 0;
}
