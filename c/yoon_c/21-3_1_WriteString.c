#include <stdio.h>

int main() {

    const char* str = "Simple String";

    printf("1. puts test ------\n");

    puts(str);
    puts("So Simple String");

    printf("\n2. fputs test -----\n");

    fputs(str, stdout); printf("\n");
    fputs("So Simple String", stdout); printf("\n");

    printf("\n3. end of main ----\n");

    return 0;
}

/*

문자열 출력 함수: puts, fputs

int puts(const char* s);
int fputs(const char* s, FILE* stream);
    -> 성공 시 음수가 아닌 값을, 실패 시 EOF 반환

*/
