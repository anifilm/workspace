// ���Ŀ� ���� ������ �����: fprintf, fscanf
#include <stdio.h>
#include <stdlib.h>

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    char name[10];
    char gender;
    int age;

    FILE* fp = fopen("24-4_1_friend.txt", "rt");
    int ret;

    while (1) {
        ret = fscanf(fp, "%s %c %d", name, &gender, &age);
        if (ret == EOF) break;
        printf("%s %c %d\n", name, gender, age);
    }

    fclose(fp);
    return 0;
}
