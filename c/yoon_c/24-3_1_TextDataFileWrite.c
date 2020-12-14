#include <stdio.h>

int main() {

    FILE* fp = fopen("24-3_1_simple.txt", "wt");
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Chaeyoung.\n", fp);   // 문자열에 개행 문자가 포함되어 있다.
    fputs("Your name is Sungwoo.\n", fp);   // 이를 위해서 반드시 텍스트 모드로 파일을 개방하여야 한다.

    fclose(fp);
    puts("파일 쓰기를 완료하였습니다.");

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
