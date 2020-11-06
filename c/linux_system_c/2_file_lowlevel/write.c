#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct person {
    char name[16];
    int age;
};

static int write_info(struct person* p) {
    int fd;
    ssize_t ret;
    // person_info.bin 파일 쓰기모드 | 파일이 없으면 생성 | append mode, 사용자 읽기쓰기 권한
    fd = open("person_info.bin", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1) {
        printf("open() fail\n");
        return -1;
    }
    // 파일에 구조체의 내용을 쓰기, ret는 리턴값 (byte stream)
    ret = write(fd, p, sizeof(struct person));
    if (ret == -1) {
        printf("write() fail\n");
        close(fd);
        return -1;
    } else if (ret != sizeof(struct person)) {
        printf("write() fail(partial write)\n");
        close(fd);
        return -1;
    }

    close(fd);      // 파일 닫기
    return 0;
}

static int dump_info() {
    int fd;
    ssize_t ret;
    struct person p;
    // person_info.bin 파일 읽기모드로 열기
    fd = open("person_info.bin", O_RDONLY);
    if (fd == -1) {
        printf("open() fail\n");
        return -1;
    }

    do {
        // 파일에서 저장된 구조체의 내용을 읽기, ret는 리턴값 (byte stream)
        ret = read(fd, &p, sizeof(struct person));
        if (ret == -1) {
            printf("read() fail\n");
            close(fd);
            return -1;
        } else if (ret == 0) {
            FILE* fp;
            // 파일 디스크립터를 파일 포인터로 변환 (읽기모드)
            fp = fdopen(fd, "r");
            if (fp == NULL) {
                printf("fdopen() fail\n");
                close(fd);
                return -1;
            }
            printf("file position = %ld\n", ftell(fp));
            fclose(fp);     // 파일 포인터 닫기
            break;
        } else if (ret != sizeof(struct person)) {
            printf("read() fail(partial read)\n");
            close(fd);
            return -1;
        }
        printf("name: %s, age: %d\n", p.name, p.age);

    } while (1);

    close(fd);      // 파일 닫기
    return 0;
}

int main() {

    struct person persons[] = {
        {"Kim", 20},
        {"Lim", 30}
    };
    // 파일에 구조체 배열 내용을 쓰기
    write_info(&persons[0]);
    write_info(&persons[1]);

    dump_info();

    return 0;
}
