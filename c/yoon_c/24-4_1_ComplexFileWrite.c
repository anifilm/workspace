// ���Ŀ� ���� ������ �����: fprintf, fscanf
#include <stdio.h>
#include <stdlib.h>

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    char name[10];
    char gender;
    int age;

    FILE* fp = fopen("24-4_1_friend.txt", "wt");
    int i;

    for (i = 0; i < 3; i++) {
        printf("�̸� ���� ���� �� �Է�: ");
        scanf("%s %c %d", name, &gender, &age);
        getchar();
        fprintf(fp, "%s %c %d", name, gender, age);
    }

    fclose(fp);
    return 0;
}
