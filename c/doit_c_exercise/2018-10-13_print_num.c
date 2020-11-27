// 문자열에 포함된 숫자 출력하기
#include <stdio.h>

int main() {

    char str[30];
    int i;

    printf("문자열 입력: ");
    scanf("%[^\n]s", str);

    printf("문자열에서 숫자만 출력: ");
    for (i = 0; str[i] != 0; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            putc(str[i], stdout);
    }
    printf("\n");

    return 0;
}
