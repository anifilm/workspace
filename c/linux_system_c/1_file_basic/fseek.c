#include <stdio.h>
#include <string.h>

static int create_file() {
    FILE* fp;

    if (!(fp = fopen("datafile.txt", "w"))) {   // datafile.txt 파일을 쓰기모드로 열기
        printf("fopen() fail\n");
        return -1;
    }

    printf("after fopen(). offset = %ld\n", ftell(fp));     // offset = 0
    fputs("hello world\n", fp);                             // 파일에 문자열 쓰기
    fputs("hello world!\n", fp);
    fputs("hello world!!\n", fp);
    fputs("hello world!!!\n", fp);
    printf("before fopen(). offset = %ld\n", ftell(fp));    // offset = 58
    printf("--------------------------------\n");

    fclose(fp);
    return 0;
}

static int read_file() {
    FILE* fp;
    char buf[1024];

    if (!(fp = fopen("datafile.txt", "r+"))) {   // datafile.txt 파일을 읽기+(쓰기가능)모드로 열기
        printf("fopen() fail\n");
        return -1;
    }

    printf("after fopen(). offset = %ld\n", ftell(fp));     // offset = 0
    memset(buf, 0, sizeof(buf));
    fgets(buf, sizeof(buf), fp);
    printf("after fgets(). offset = %ld\n", ftell(fp));     // offset = 13

    fseek(fp, 0, SEEK_END);     // 파일 포지션 - 오프셋으로 끝 부분으로 이동
    printf("after fseek(). offset = %ld\n", ftell(fp));     // offset = 58
    fputs("final\n", fp);                                   // 파일에 문자열 쓰기
    printf("before fclose(). offset = %ld\n", ftell(fp));   // offset = 65
    printf("--------------------------------\n");

    fclose(fp);
    return 0;
}

int main() {

    // 파일 생성 함수 호출
    create_file();
    // 파일 읽기 함수 호출
    read_file();

    return 0;
}
