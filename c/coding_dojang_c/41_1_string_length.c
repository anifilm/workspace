#include <stdio.h>
#include <string.h>     // strlen �Լ��� ����� ��� ����

int main() {

    char *s1 = "Hello";     // �����Ϳ� ���ڿ� Hello�� �ּҰ� �Ҵ�
    char s2[10] = "Hello";  // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ��� �Ҵ�

    printf("strlen(s1): %d\n", strlen(s1));     // strlen �Լ��� ���ڿ��� ���̸� ����
    printf("strlen(s2): %d\n", strlen(s2));     // strlen �Լ��� ���ڿ��� ���̸� ����

    return 0;
}
