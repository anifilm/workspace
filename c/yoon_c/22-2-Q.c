/* ���� 22-2 [����ü �迭�� ����]
�ռ� ���� 22-1���� ������ employee ����ü�� ������� ���̰� 3�� �迭�� ��������.
�׸��� �� ���� ������ ���α׷� ����ڷκ��� �Է� �޾Ƽ� �迭�� ������ ����, �迭��
����� �����͸� ������� ����ϴ� ������ �ۼ��� ����.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[20];      // ������ �̸�
    char socialNum[20]; // �ֹε�Ϲ�ȣ
    int salary;         // �޿�����
};

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    struct employee emp[3];

    int i;
    for (i = 0; i < 3; i++) {
        printf("\n[%d��° ������ ���� �Է�]\n", i + 1);
        printf("������ �̸� �Է�: "); scanf("%s", emp[i].name);
        printf("�ֹε�Ϲ�ȣ �Է�: "); scanf("%s", emp[i].socialNum);
        printf("�޿����� �Է�: "); scanf("%d", &emp[i].salary);
    }

    for (i = 0; i < 3; i++) {
        printf("\n[%d��° ������ ����]\n", i + 1);
        printf("������ �̸�: %s, ", emp[i].name);
        printf("�ֹε�Ϲ�ȣ: %s, ", emp[i].socialNum);
        printf("�޿�����: %d\n", emp[i].salary);
    }
    return 0;
}
