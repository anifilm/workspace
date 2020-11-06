// 04 매크로 상수 __FILE__은 C소스코드 파일이 있는 경로를 나타낸다.
// 따라서 FILE* fp = fopen(__FILE__, "r"); 이라고 하면 소스 코드 자체를 열 수 있다. 현재의
// 소스코드 파일을 읽어서 소괄호(parenthesis)의 개수와 중괄호(brace)의 개수를 출력하고 여는
// 괄호 수와 닫는 괄호 수가 일치하는지 확인하라.
// > left parenthesis: 17, right parenthesis: 17
// > left brace: 6, right brace: 6
#include <stdio.h>
#include <stdlib.h>

int main() {

    int ch, count_lp = 0, count_rp = 0, count_lb = 0, count_rb = 0;

    FILE* fp = fopen(__FILE__, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        // printf("%c", ch);
        if (ch == '(')
            count_lp++;
        else if (ch == ')')
            count_rp++;
        else if (ch == '{')
            count_lb++;
        else if (ch == '}')
            count_rb++;
    }

    printf("left parenthesis: %d, right parenthesis: %d\n", count_lp, count_rp);
    printf("left brace: %d, right brace: %d\n", count_lb, count_rb);

    fclose(fp);
    return 0;
}
