/* 문제 24-1 [문자열 방식의 데이터 입출력]
문제 3
문제1과 2에서 생성한 파일에 저장된 정보 전체를 출력하는 프로그램을 작성하자
*/
#include <stdio.h>
#include <string.h>

int main() {

    char str[50];

    FILE* fp = fopen("24-3-Q_myinfo.txt", "rt");    // 읽기 모드로 파일 스트림 (입력)을 생성
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        str[strlen(str) - 1] = 0;   // '\n' 개행 문자 삭제
        puts(str);          // 파일 내용을 문자열 단위 (한 줄씩)로 출력한다.
    //  prtinf(str);        // 개행 문자를 포함하여 출력해도 문제가 없다.
    //  fputs(str, stdout); // 개행 문자를 포함하여 출력해도 문제가 없다.
    }
    fclose(fp);

    puts("\n파일 읽기를 완료하였습니다.");
    return 0;
}
