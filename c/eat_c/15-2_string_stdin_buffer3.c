// stdin 버퍼 비우기 3 (리눅스에서만 동작 가능)
#include <stdio.h>
#include <stdio_ext.h>

int main() {

    int num;
    char c;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

//  while (getchar() != '\n');
    __fpurge(stdin);    // stdin 입력 버퍼를 비운다 (리눅스에서만 동작 가능)

    printf("문자를 입력하세요: ");
    scanf("%c", &c);

    return 0;
}
