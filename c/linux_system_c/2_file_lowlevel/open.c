#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int append_file() {
    int fd;
    // datafile.txt 파일 쓰기모드 | append mode, 사용자 읽기쓰기 권한
    fd = open("datafile.txt", O_WRONLY | O_APPEND);
    if (fd == -1) {
        printf("open() error\n");
        return -1;
    }
    // 유닉스 계열에서 lowlevel 파일 처리시 서식 지정하여 문자열을 파일에 쓰기
    dprintf(fd, "hello again..\n");

    close(fd);
    return 0;
}

static int trunc_file() {
    int fd;
    // datafile.txt 파일 쓰기모드 | 파일이 없으면 생성 | 파일이 있으면 내용을 초기화, 사용자 읽기쓰기 권한
    fd = open("datafile.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1) {
        printf("open() error\n");
        return -1;
    }
    // 유닉스 계열에서 lowlevel 파일 처리시 서식 지정하여 문자열을 파일에 쓰기
    dprintf(fd, "byebye file\n");

    close(fd);
    return 0;
}

static int write_file() {
    int fd;
    // datafile.txt 파일 쓰기모드 | 파일이 없으면 생성, 사용자 읽기쓰기 권한
    fd = open("datafile.txt", O_WRONLY | O_CREAT, 0600);
    if (fd == -1) {
        printf("open() error\n");
        return -1;
    }
    // 유닉스 계열에서 lowlevel 파일 처리시 서식 지정하여 문자열을 파일에 쓰기
    dprintf(fd, "hello world!! %d\n", 123);

    close(fd);      // 파일 닫기
    return 0;
}

int main(int argc, char **argv) {

    // 파일에 쓰기 함수를 호출
    if (write_file()) {
        printf("write_file() error\n");
        return -1;
    }
    // 파일을 초기화 이후 쓰기 함수를 호출
    if (trunc_file()) {
        printf("trunc_file() error\n");
        return -1;
    }
    // 파일에 붙여쓰기 함수를 호출
    if (append_file()) {
        printf("append_file() error\n");
        return -1;
    }

    return 0;
}
