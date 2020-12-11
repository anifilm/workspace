#include <stdio.h>

int main() {

    char str[7];
    int i;

    puts("문자열을 입력");
    for (i = 0; i < 3; i++) {
        fgets(str, sizeof(str), stdin);
        printf("Read %d: %s ", i + 1, str);
    }

    return 0;
}

/*

문자열 입력 함수: gets, fgets

char* gets(char* s);
char* fgets(char* s, int n, FILE* stream);
    -> 파일의 끝에 도달하거나 함수호출 실패 시 NULL 포인터 반환

*/
