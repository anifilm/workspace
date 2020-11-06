#include <stdio.h>
#include <string.h>

int write_to_file() {
    FILE* fp;

    fp = fopen("data.txt", "w");            // data.txt 파일을 쓰기모드로 열기
    if (fp == NULL) {
        perror("fopen error\n");            // perrer, 에러 출력
        return -1;
    }

    fputs("hello world!\n", fp);            // 파일에 줄단위로 문자열 쓰기
    fprintf(fp, "%s\n", "hello world!");    // 서식을 지정하여 문자열을 파일에 쓰기

    fclose(fp);                             // 파일 닫기
    return 0;
}

int read_from_file() {
    FILE* fp;
    char buf[1024];

    fp = fopen("data.txt", "r");            // data.txt 파일을 읽기모드로 열기
    if (fp == NULL) {
        perror("fopen error\n");            // perrer, 에러 출력
        return -1;
    }

    memset(buf, 0, sizeof(buf));            // buf 배열 내용을 0으로 초기화
    fgets(buf, sizeof(buf), fp);            // 파일에서 줄단위로 문자열 읽어와 buf에 저장

    printf("%s\n", buf);

    fclose(fp);                             // 파일 닫기
    return 0;
}

int main() {

    // 파일에 쓰기 함수 호출
    if (write_to_file()) {
        perror("write to file\n");
        return -1;
    }

    // 파일에서 읽기 함수 호출
    if (read_from_file()) {
        perror("read from file\n");
        return -1;
    }

    return 0;
}
