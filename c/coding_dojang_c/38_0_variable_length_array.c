#include <stdio.h>

int main() {

    int size;

    printf("�迭�� ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &size);     // �迭�� ũ�⸦ �Է¹���

    int numArr[size];

    printf("numArr sizeof: %d\n", sizeof(numArr));
    printf("numArr length: %d\n", sizeof(numArr) / sizeof(numArr[0]));

    return 0;
}
