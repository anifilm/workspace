// Q14 오른쪽과 같이 입력한 수를 한 변으로 하는 정사각형을 * 기로호 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void) {

    int n, i, j;

    n = 4;

    puts("사각형을 출력합니다.");
    printf("입력할 수: %d\n", n);
    // scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
