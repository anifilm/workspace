// stdin 버퍼 비우기 2
#include <stdio.h>

int main() {
    int num;
    char c;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    getchar();    // stdin 입력 버퍼를 비운다

    printf("문자를 입력하세요: ");
    scanf("%c", &c);

    return 0;
}
