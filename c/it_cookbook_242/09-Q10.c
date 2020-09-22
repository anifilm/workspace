// 10 입력 문자열을 배열에 저장한 후 그 문자열의 부분 문자열(Substring)을 모두 나열하는
// 프로그램을 작성하라.
// 힌트 배열의 마지막 인덱스를 last라고 하면 시작 인덱스 start를 0부터 last까지 움직이게
// 한다. 또, start로부터의 이격 거리인 offset를 0부터 (last - start)까지 움직이게 한다.
// 그 상태에서 배열 인덱스 i를 start로 초기화한 후 i가 start + offset이 될 때까지 움직
// 이면서 찍어야 하므로 결국 3중 for 문이 필요하다.
// > Enter a string.
// > code ([Enter])
// > c
// > co
// > cod
// > code
// > o
// > od
// > ode
// > d
// > de
// > e
#include <stdio.h>

int main() {

    char ch[16];
    int i, j, k, count;

    printf("Enter a string.\n");
    scanf("%s", ch);

    for (i = 0; i < 16; i++) {
        if (ch[i] == '\0') {
            count = i;
            break;
        }
    }

    for (i = 0; i < count; i++) {
        for (j = i; j < count; j++) {
            for (k = i; k < j + 1; k++)
                printf("%c", ch[k]);
            printf("\n");
        }
    }

    return 0;
}
