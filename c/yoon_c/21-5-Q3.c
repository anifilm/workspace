/* ���� 21-2 [���ڿ� ó��]
���� 3
���α׷� ����ڷκ��� �̸��� ���̸� ������ ���Ŀ� ���缭 �ϳ��� ���ڿ��� �Է� �޴´�.
  "������ 29"
  "�Ѽ��� 7"
  "������ 17"

�̸��� �� ���ڰ� �ƴ� ���� �ְ� �������� �Էµ� ���� �ִ�. ��, �̸��� ���� ���̿���
������ ���ԵǾ�� �Ѵ�. �̷��� �������� �� ����� ������ �Է� �޾Ƽ� �̸��� ���̰�
���� ������ �ٸ����� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��� ����. ����� �� ������ ������
��� ���� �ִ� �����̴� õõ�� �����ϸ� �ذ��ϱ� �ٶ���.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    char input1[20], input2[20];

    printf("�̸��� ���̸� �Է�1: ");
    fgets(input1, sizeof(input1), stdin);
    input1[strlen(input1) - 1] = 0;     // �Էµ� ���ڿ��� '\n' ����

    char* name1 = strtok(input1, " ");
    char* age1 = strtok(NULL, " ");

    printf("�̸��� ���̸� �Է�2: ");
    fgets(input2, sizeof(input2), stdin);
    input2[strlen(input2) - 1] = 0;     // �Էµ� ���ڿ��� '\n' ����

    char* name2 = strtok(input2, " ");
    char* age2 = strtok(NULL, " ");

    printf("\n");
    printf("�Է�1 �̸�: %s, ����: %s\n", name1, age1);
    printf("�Է�2 �̸�: %s, ����: %s\n", name2, age2);

    if (!strcmp(name1, name2)) {
        puts("\n�̸��� �����ϴ�.");
        if (!strcmp(age1, age2))
            puts("���̵� �����ϴ�.");
        else
            puts("���̴� ���� �ʽ��ϴ�.");
    }
    else {
        puts("\n�̸��� ���� �ʽ��ϴ�.");
        if (!strcmp(age1, age2))
            puts("���̰� �����ϴ�.");
        else
            puts("���̵� ���� �ʽ��ϴ�.");
    }

    return 0;
}
