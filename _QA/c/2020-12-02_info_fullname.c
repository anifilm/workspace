#include <stdio.h>
#include <string.h>

typedef struct Info {
    char name[20];
    int age;
    char sex[3];
    char city[10];
} Info;

int main() {

    FILE* fp = fopen("./2020-12-02_Info.txt", "rt");
    Info info[3];

    char temp_name[20], temp_chr;
    int i, j;

    for (i = 0; i < 3; i++) {
        // 이름을 나이 이전까지 추출해서 info[i].name에 넣어주는 부분입니다.
        for (j = 0; j < 20; j++) {
            temp_chr = fgetc(fp);       // 문자 하나씩 temp_chr에 저장
            if (temp_chr >= '0' && temp_chr <= '9') break;  // 나이를 만나면 빠져나감
            temp_name[j] = temp_chr;    // 문자열 배열에 문자를 저장
        }
        temp_name[j - 1] = '\0';        // 문자열 배열 공백 이전에 \0을 추가하여 이름 문자열 완성

        // printf("%s\n", temp_name);   // 확인용
        strcpy(info[i].name, temp_name);// 문자열 배열의 이름을 info[i].name에 복사

        fseek(fp, -1, SEEK_CUR);        // 파일 포인터의 커서 위치가 나이까지 진행되었기 때문에
                                        // 한칸 이전으로 되돌림
        // 나머지 내용은 서식으로 받음
        fscanf(fp, "%d %s %s", &info[i].age, &info[i].sex, &info[i].city);
    }

    // 저장 내용 확인용
    for (i = 0; i < 3; i++)
        printf("%s %d %s %s", info[i].name, info[i].age, info[i].sex, info[i].city);

    fclose(fp);
    return 0;
}
