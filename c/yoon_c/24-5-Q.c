/* 문제 24-2 [파일의 크기를 바이트 단위로 계산하기]
FILE 구조체의 포인터가 인자로 전달되면, 파일의 크리를 바이트 단위로 계산하여 반환하는
함수를 정의하자. 단! 바로 위에서 소개한 ftell() 함수를 이용해서 구현해야 하며, 함수가
호출된 이후에도 파일 위치 지시자의 정보가 변경되어서는 안된다. (파일의 크기를 계산하는
과정에서 변경시켰다면, 파일의 크기를 계산한 이후에는 되돌려 놓아야 한다.)
*/
#include <stdio.h>
#include <string.h>

long GetFileSize(FILE* fp);

int main() {

    char str[100];

    FILE* fp = fopen("24-5-Q_text.txt", "rt");
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        fputs(str, stdout); // 개행 문자를 포함하여 출력해도 문제가 없다.
    //  prtinf(str);        // 개행 문자를 포함하여 출력해도 문제가 없다.
    //  str[strlen(str) - 1] = 0;   // '\n' 개행 문자 삭제
    //  puts(str);          // 파일 내용을 문자열 단위 (한 줄씩)로 출력한다.
    }

    printf("\n파일의 크기: %ld byte\n", GetFileSize(fp));

    fclose(fp);
    return 0;
}

long GetFileSize(FILE* fp) {
    long fpos;
    long fsize;
    fpos = ftell(fp);   // 파일 위치 지시자 정보 백업

    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fseek(fp, fpos, SEEK_SET);  // 파일 위치 지시자 정보 복구
    return fsize;
}
