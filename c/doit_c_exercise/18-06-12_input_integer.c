// 정수값 입력받기
#include <stdio.h>

int main() {

    int num;

    while (1) {
        printf("정수 입력: ");
        if (scanf("%d", &num) == 0) {
            printf("숫자를 입력해야 합니다.\n");
            while (getchar() != '\n');
        } else {
            if (num >= 3 && num <= 7) {
                printf("정상적으로 입력했습니다. 프로그램을 종료합니다.\n");
                break;
            } else
                printf("정수를 다시 입력하세요.\n");
        }
    }

    return 0;
}
