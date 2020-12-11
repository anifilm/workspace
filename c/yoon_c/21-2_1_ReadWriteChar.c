#include <stdio.h>

int main() {

    int ch1, ch2;

    ch1 = getchar();       // 문자 입력
    ch2 = fgetc(stdin);    // 엔터 키 입력

    putchar(ch1);          // 문자 출력
    fputc(ch2, stdout);    // 엔터 키 출력

    return 0;
}

/*

문자 출력 함수: putchar, fputc

int putchar(int c);
int fputc(int c, FILE* stream);
    -> 함수 호출 성공 시 쓰여진 문자정보 출력, 실패 시 EOF 반환


문자 입력 함수: getchar, fgetc

int getchar(void);
int fgetc(FILE* stream);
    -> 파일의 끝에 도달하거나 함수호출 실패 시 EOF 반환

*/
