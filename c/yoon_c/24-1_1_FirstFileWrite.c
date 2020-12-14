// 파일에 데이터를 써봅시다
#include <stdio.h>

int main() {

    FILE* fp = fopen("24-1_1_data.txt", "wt"); // 쓰기 모드로 파일 스트림 (출력)을 생성
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;  // 비정상적 종료를 의미하기 위해서 -1을 반환
    }

    // 파일에 문자 쓰기 (출력)
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp); // 스트림의 종료, 실제 파일쓰기를 하는 시점
    puts("파일 쓰기를 완료하였습니다.");

    return 0;
}

/*

fopen() 함수호출을 통한 파일과의 스트림 형성과 FILE 구조체

FILE* fopen(const char* filename, const char* mode);
    -> 성공 시 해당 파일의 FILE 구조체 변수의 주소 값, 실패시 NULL 포인터 반환

스트림의 소멸을 요청하는 fclose() 함수

int fclose(FILE* stream);
    -> 성공 시 0, 실패 시 EOF를 반환

*/
