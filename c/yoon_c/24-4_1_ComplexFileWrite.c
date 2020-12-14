// 서식에 따른 데이터 입출력: fprintf, fscanf
#include <stdio.h>
#include <stdlib.h>

int main() {

    // 한글 입출력을 위한 설정 (파일은 EUC-KR로 저장할 것!)
    system("chcp 949");

    char name[10];
    char gender;
    int age;

    FILE* fp = fopen("24-4_1_friend.txt", "wt");
    int i;

    for (i = 0; i < 3; i++) {
        printf("이름 성별 나이 순 입력: ");
        scanf("%s %c %d", name, &gender, &age);
        getchar();
        fprintf(fp, "%s %c %d", name, gender, age);
    }

    fclose(fp);
    return 0;
}
