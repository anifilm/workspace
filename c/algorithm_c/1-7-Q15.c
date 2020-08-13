// Q15 오른쪽과 같이 입력한 높이와 너비에 맞는 직사각형을 * 기호로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void) {

    int h, w, i, j;

    h = 3, w = 7;

    puts("직사각형을 출력합니다.");
    printf("높이: %d\n", h);
    // scanf("%d", &h);
    printf("너비: %d\n", w);
    // scanf("%d", &w);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= 7; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
