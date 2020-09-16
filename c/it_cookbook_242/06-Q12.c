// 12 숫자 5를 입력했을 때 실행 결과다. 홀수 n을 입력받아서 이러한 모습을 화면에 출력하는 프로그램을
// 작성하라. 단, 하나의 프로그램에서 세 가지 모습을 연이어 출력해야 한다.
// 2중 for 문을 사용하되 바깥쪽 for의 인덱스 i는 몇 줄을 찍을 것인지를 제어하고 안쪽 for의 인덱스 j는
// 그 줄의 내용을 어떻게 찍을 것인가를 제어하되 i, j 값을 서로 연관시켜야 한다.
// > Enter the number:
// > 5 ([Enter])
// > *
// > **
// > ***
// > ****
// > *****
// > 1
// > 12
// > 123
// > 1234
// > 12345
// >   *
// >  ***
// > *****
#include <stdio.h>

int main() {

    int i, j, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (i = 1; i <= num - 2; i++) {
        for (j = num - 2; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
