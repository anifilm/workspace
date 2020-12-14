#include <stdio.h>

int main() {

    /* 파일생성 */
    FILE* fp = fopen("24-5_1_text.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    /* 파일열기 */
    fp = fopen("24-5_1_text.txt", "rt");

    /* SEEK_END test */
    fseek(fp, -2, SEEK_END);    // 파일 끝(EOF)에서 -2칸(이전으로) 이동
    putchar(fgetc(fp));

    /* SEEK_SET test */
    fseek(fp, 2, SEEK_SET);     // 파일의 시작에서 2칸(다음으로) 이동
    putchar(fgetc(fp));

    /* SEEK_CUR test */
    fseek(fp, 2, SEEK_CUR);     // 현재 위치에서 2칸(다음으로) 이동
    putchar(fgetc(fp));

    fclose(fp);
    return 0;
}

/*

파일 위치 지시자의 이동: fseek

ine fseek(FILE* stream, long offset, int wherefrom);
    -> 성공 시 0, 실패 시 0이 아닌 값을 반환

매개변수 wherefrom      파일 위치 지시자는
SEEK_SET               파일 맨 앞에서부터 이동을 시작
SEEK_CUR               현재 위치에서부터 이동을 시작
SEEK_END               파일 맨 끝에서부터 이동을 시작

*/
