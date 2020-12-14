#include <stdio.h>

int main() {

    long fpos;
    int i;

    /* 파일생성 */
    FILE* fp = fopen("24-5_2_text.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    /* 파일열기 */
    fp = fopen("24-5_2_text.txt", "rt");

    for (i = 0; i < 4; i++) {
        putchar(fgetc(fp));
        fpos = ftell(fp);
        fseek(fp, -1, SEEK_END);
        putchar(fgetc(fp));
        fseek(fp, fpos, SEEK_SET);
    }

    fclose(fp);
    return 0;
}

/*

현재 파일 위치 지시자의 위치는?: ftell

long ftell(FILE* stream);
    -> 파일 위치 지시자의 위치 정보를 반환

*/
