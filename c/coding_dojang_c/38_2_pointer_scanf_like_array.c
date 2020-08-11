#include <stdio.h>
#include <stdlib.h>     // malloc, free �Լ��� ����� ��� ����

int main() {

    int size;

    printf("�Ҵ��� �����޸� ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &size);
    printf("\n");

    int *numPtr = malloc(sizeof(int) * size);       // (int ũ�� * �Է¹��� ũ��) ��ŭ ���� �޸� �Ҵ�

    for (int i = 0; i < size; i++) {        // �Է� ���� size ��ŭ �ݺ�
        numPtr[i] = i;                      // �ε����� �����Ͽ� ���� �Ҵ�
    }

    for (int i = 0; i < size; i++) {        // �Է� ���� size ��ŭ �ݺ�
        printf("numPtr[%d]: %d\n", i, numPtr[i]);          // �ε����� �����Ͽ� �� ���
    }

    free(numPtr);       // �������� �Ҵ��� �޸� ����

    return 0;
}
