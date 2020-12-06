// while문의 구성과 실행흐름의 세세한 관찰
#include <stdio.h>

int main() {

    int dan, num;

    printf("몇 단? ");
    scanf("%d", &dan);

    num = 0;
    while (num < 10) {
        printf("%d x %d = %d\n", dan, num, dan * num);
        num++;
    }

    return 0;
}
