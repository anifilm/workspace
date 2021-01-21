/* 22
변형이 있을 수 있지만 일반적인 369 게임의 규칙은 다음과 같다. 숫자에 3이나 6이나 9가 들어가면 369 수다.
그 경우에 그것이 들어간 개수만큼 박수를 친다. 예를 들어, 36은 박수를 두번 친다. 그 외의 숫자는 박수를
치지 않고 숫자를 말하면 된다. 1부터 입력 N까지 숫자에 대해 369 게임을 할 경우의 출력을 작성하라.
힌트 몫이 0이 될 때까지 계속해서 10으로 나누어 가면서 나머지가 369 수인지를 확인하여 박수를 몇번 쳐야
하는지를 먼저 계산 하라.
  > Enter a number:
  > 20 ([Enter])
  > 1 2 ! 4 5 ! 7 8 ! 10 11 12 ! 14 15 ! 17 18 ! 20
*/
#include <stdio.h>

int main() {

    int limit_num, i, num = 0, check = 0;

    printf("Enter a number: ");
    scanf("%d", &limit_num);

    /*
    for (i = 1; i <= num; i++) {
        // 십단위가 3,6,9이고 일단위가 3,6,9인 경우
        if ((i/10 == 3 || i/10 == 6 || i/10 == 9) && (i%10 == 3 || i%10 == 6 || i%10 == 9))
            printf("!!(%d) ", i);
        // 십단위가 3,6,9인 경우이거나 일단위가 3,6,9인 경우
        else if((i/10 == 3 || i/10 == 6 || i/10 == 9) || (i%10 == 3 || i%10 == 6 || i%10 == 9))
            printf("!(%d) ", i);
        else
            printf("%d ", i);
    }
    */
    for (i = 1; i <= limit_num; i++) {
        num = i;
        do {
            check = num % 10;
            if (check && (check % 3) == 0) break;
            num = num / 10;
        } while (num > 0);

        if (num)
            printf("!(%d) ", i);
        else
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
