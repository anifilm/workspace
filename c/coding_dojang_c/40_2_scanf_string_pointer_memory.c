#include <stdio.h>
#include <stdlib.h>

int main() {

    char *s1 = malloc(sizeof(char) * 10);       // char 10�� ũ�⸸ŭ ���� �޸� �Ҵ�

    printf("���ڿ��� �Է��ϼ��� [10]: ");
    scanf("%s", s1);       // ǥ�� �Է��� �޾Ƽ� �޸𸮰� �Ҵ�� ���ڿ� �����Ϳ� ����

    printf("s1: %s\n", s1);     // �Էµ� ���ڿ��� ������ ���

    free(s1);       // ���� �޸� ����

    return 0;
}
