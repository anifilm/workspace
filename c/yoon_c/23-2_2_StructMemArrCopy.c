// �Լ��� ���ڷ� ���޵ǰ� return���� ���� ��ȯ�Ǵ� ����ü ����
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[20];
    char phoneNum[20];
    int age;
} Person;

void ShowPersonInfo(Person man) {
    printf("�̸�: %s, ", man.name);
    printf("��ȣ: %s, ", man.phoneNum);
    printf("����: %d\n", man.age);
}

Person ReadPersonInfo() {
    Person man;
    printf("�̸� �Է�: "); scanf("%s", man.name);
    printf("��ȣ �Է�: "); scanf("%s", man.phoneNum);
    printf("���� �Է�: "); scanf("%d", &man.age);
    return man;
}

int main() {

    // �ѱ� ������� ���� ���� (������ EUC-KR�� ������ ��!)
    system("chcp 949");

    Person man = ReadPersonInfo();
    ShowPersonInfo(man);

    return 0;
}
