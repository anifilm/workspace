/* 06
기호 1번, 2번, 3번 세 사람이 선거에 출마했다고 가정하자. 당선이 확정되려면 과반수 득표에 성공해야 한다.
예를 들어 10명이 투표를 했는데 결과가 2, 2, 2, 2, 2, 3, 3, 3, 1, 1이 나왔다면 2번이 다수 득표자이지만
당선자는 없다. 과반수가 아니기 때문이다. 1번부터 8번까지 출마했을 때 10명의 투표 결과를 입력받아 당선자
가 없으면 없다고 알리고, 있으면 기호 몇번이 당선되었는지 알리는 프로그램을 작성하라.
힌트 입력을 저장하는 배열 vote[10]과 후보별 특표수를 저장하는 배열 count[8]을 활용한다.
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

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 8; j++)
            if (vote[i] == j + 1) count[j]++;
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

    if (max > 5)
        printf("Number %d is the winner.\n", winner);
    else
        printf("Voting is draw.\n");

    return 0;
}
