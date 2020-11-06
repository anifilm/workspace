// 01 다음 코드가 무슨 작업을 하려는 것인지 예측해 보고 프로그램을 실행시켜 예측이 맞는지
// 확인하라.
#include <stdio.h>

void fcn(char* str) {
    char ch;
    char* current = str;
    while (*str)
        str++;
    for (str--; str > current; str--, current++) {
        ch = *str;
        *str = *current;
        *current = ch;
    }
}

int main() {

    char string[100];

    printf("Enter input string.\n");
    gets(string);

    fcn(string);
    puts(string);

    return 0;
}
