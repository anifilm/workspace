/* ���� 22-1 [����ü�� ����]
���ڿ� ������ '������ �̸�'�� ���ڿ� ������ '�ֹε�Ϲ�ȣ' �׸��� ���� ������ '�޿�����'
�� ������ �� �ִ� employee��� �̸��� ����ü�� ������ ����. �׸��� ���� employee ����ü
������ �ϳ� ������ ����, ���α׷� ����ڰ� �Է��ϴ� ������ �� ������ ä����. �׸���
���������� ����ü ������ ä���� �����͸� ����� ����.
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

    struct employee emp;

    printf("������ �̸� �Է�: ");  scanf("%s", emp.name);
    printf("�ֹε�Ϲ�ȣ �Է�: ");  scanf("%s", emp.socialNum);
    printf("�޿����� �Է�: ");  scanf("%d", &emp.salary);

    printf("������ �̸�: %s, ", emp.name);
    printf("�ֹε�Ϲ�ȣ: %s, ", emp.socialNum);
    printf("�޿�����: %d\n", emp.salary);

    return 0;
}
