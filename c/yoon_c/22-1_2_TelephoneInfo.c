// ����ü ������ ����� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    struct person man1, man2;
    strcpy(man1.name, "��ä��");
    strcpy(man1.phoneNum, "010-8731-2354");
    man1.age = 43;

    printf("�̸� �Է�: "); scanf("%s", man2.name);
    printf("��ȣ �Է�: "); scanf("%s", man2.phoneNum);
    printf("���� �Է�: "); scanf("%d", &man2.age);

    printf("\n[man1�� ����]\n");
    printf("�̸�: %s, ", man1.name);
    printf("��ȣ: %s, ", man1.phoneNum);
    printf("����: %d\n", man1.age);

    printf("\n[man2�� ����]\n");
    printf("�̸�: %s, ", man2.name);
    printf("��ȣ: %s, ", man2.phoneNum);
    printf("����: %d\n", man2.age);

    return 0;
}
