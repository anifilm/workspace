#include <stdio.h>
#include <string.h>     // strcmp �Լ��� ����� ��� ����

int main() {

    char s1[20];
    char s2[20];

    printf("���ڿ��� �ΰ� �Է��ϼ��� (���ڿ� ���ڿ�): ");
    scanf("%s %s", s1, s2);     // ǥ�� �Է¿��� �������� ���е� ���ڿ� �ΰ��� �Է¹���

    int ret = strcmp(s1, s2);   // �Էµ� ���ڿ� ��

    // �������� OSX������ ASCII �ڵ尪�� ���̸� ��ȯ�ϹǷ�
    // if ���ǹ����� �Ǵ�
    if (ret == 0) {
        printf("�� ���ڿ��� ����\n");
    } else if (ret > 0) {       // ����� ��
        printf("%s���� %s�� ŭ\n", s2, s1);
    } else if (ret < 0) {       // ������ ��
        printf("%s���� %s�� ŭ\n", s1, s2);
    }

    return 0;
}
