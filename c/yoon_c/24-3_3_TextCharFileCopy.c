// feof() 함수 기반의 파일복사 프로그램
#include <stdio.h>

int main() {

    FILE* src = fopen("24-3_3_src.txt", "rt");
    FILE* des = fopen("24-3_3_des.txt", "wt");
    int ch;

    if (src == NULL || des == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, des); // 파일 내용을 한 문자씩 복사한다.

    if (feof(src) != 0) // feof() 함수를 이용하여 EOF의 반환을 재확인
        puts("파일복사 완료!");
    else
        puts("파일복사 실패!");

    fclose(src);
    fclose(des);

    return 0;
}

/*

파일의 끝을 확인
int feof(FILE* stream);
    -> 파일의 끝에 도달한 경우 0이 아닌 값을 반환

Chapter 21에서 학습한 파일 입출력 함수들

int fputc(int c, FILE* stream); // 문자 출력
int fgetc(FILE* stream);        // 문자 입력

int fputs(const char* s, FILE* stream);     // 문자열 출력
    -> 성공 시 음수가 아닌 값을, 실패 시 EOF 반환
char* fgets(char* s, int n, FILE* stream);  // 문자열 입력
    -> 파일의 끝에 도달하거나 함수호출 실패 시 NULL 포인터 반환

*/
