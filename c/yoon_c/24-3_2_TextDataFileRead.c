#include <stdio.h>

int main() {
    char str[30];
    int ch;

    FILE* fp = fopen("24-3_1_simple.txt", "rt");
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    ch = fgetc(fp); // 파일 포인터에서 문자 하나 가져오기
    printf("%c\n", ch);
    ch = fgetc(fp);
    printf("%c\n", ch);

    fgets(str, sizeof(str), fp); // 파일 포인터에서 문자열 가져오기 (문자열 끝에 '\n' 개행 문자가 포함되어 있다.)
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fclose(fp);
    puts("\n파일 읽기를 완료하였습니다.");

    return 0;
}

/*

Chapter 21에서 학습한 파일 입출력 함수들

int fputc(int c, FILE* stream); // 문자 출력
int fgetc(FILE* stream);        // 문자 입력

int fputs(const char* s, FILE* stream);     // 문자열 출력
    -> 성공 시 음수가 아닌 값을, 실패 시 EOF 반환
char* fgets(char* s, int n, FILE* stream);  // 문자열 입력
    -> 파일의 끝에 도달하거나 함수호출 실패 시 NULL 포인터 반환

*/
