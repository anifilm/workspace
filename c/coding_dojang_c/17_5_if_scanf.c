#include <stdio.h>

int main() {

    int num;

    printf("������ �Է��ϼ��� (10 �Ǵ� 20): ");
    scanf("%d", &num);              // �Է¹��� ���� ������ ����

    if (num == 10) {                // num�� 10�̸�
        printf("10 �Դϴ�.\n");      // "10�Դϴ�."�� ���
    }

    if (num == 20) {                // num�� 20�̸�
        printf("20 �Դϴ�.\n");      // "20�Դϴ�."�� ���
    }

    return 0;
}
