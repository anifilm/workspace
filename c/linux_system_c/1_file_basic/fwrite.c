#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[20];
    int age;
};

static int write_to_file() {
    FILE* fp = NULL;

    struct person kim = {"Kim", 20};
    struct person lee = {"Lee", 30};

    if (!(fp = fopen("persons.bin", "wb")))            // persons.bin 파일을 쓰기모드(바이너리)로 열기
        return -1;

    if (fwrite(&kim, sizeof(struct person), 1, fp) != 1)    // 파일에 kim 구조체 내용을 쓰기 (byte stream)
        goto err;
    if (fwrite(&lee, sizeof(struct person), 1, fp) != 1)    // 파일에 lim 구조체 내용을 쓰기 (byte stream)
        goto err;

    fclose(fp);
    return 0;

err:
    if (fp)
        fclose(fp);
    return -1;
}

static int read_from_file() {
    FILE* fp;

    struct person persons[2];

    if (!(fp = fopen("persons.bin", "rb")))            // persons.bin 파일을 읽기모드(바이너리)로 열기
        return -1;

    if (fread(persons, sizeof(struct person), 2, fp) != 2) {    // 파일에서 구조체 내용을 두개 읽어 (byte stream) 배열에 저장
        fclose(fp);
        return -1;
    }

    for (int i = 0; i < 2; i++)
        printf("name: %s, age: %d\n", persons[i].name, persons[i].age);

    fclose(fp);
    return 0;
}

int main() {

    // 파일에 쓰기 함수 호출
    if (write_to_file()) {
        printf("write fail\n");
        return -1;
    }
    // 파일에서 읽기 함수 호출
    if (read_from_file()) {
        printf("read fail\n");
        return -1;
    }

    return 0;
}
