#include <stdio.h>

int main() {

    char null_1 = '\0';         // 이 3개는 모두 동일하다
    char null_2 = 0;
    char* null_3 = NULL;   // 모두 대문자로 써야 한다

    char not_null = '0';

    printf("NULL의 정수(아스키)값: %d, %d, %s\n", null_1, null_2, null_3);
    printf("'0'의 정수(아스키)값: %d\n", not_null);

    return 0;
}
