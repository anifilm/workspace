#include <stdio.h>
#include <string.h>     // strcmp �Լ��� ����� ��� ����

int main() {

    char s1[20];
    char s2[20];

    printf("���ڿ��� �ΰ� �Է��ϼ��� (���ڿ� ���ڿ�): ");
    scanf("%s %s", s1, s2);     // ǥ�� �Է¿��� �������� ���е� ���ڿ� �ΰ��� �Է¹���

    int ret = strcmp(s1, s2);   // �Էµ� ���ڿ� ��

    switch (ret) {
    case 0:
        printf("�� ���ڿ��� ����\n");
        break;
    case 1:
        printf("%s���� %s�� ŭ\n", s2, s1);
        break;
    case -1:
        printf("%s���� %s�� ŭ\n", s1, s2);
        break;
    }

    return 0;
}
