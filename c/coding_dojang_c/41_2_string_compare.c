#include <stdio.h>
#include <string.h>     // strcmp �Լ��� ����� ��� ����

int main() {

    char *s1 = "Hello";     // �����Ϳ� ���ڿ� Hello�� �ּҰ� �Ҵ�
    char s2[10] = "Hello";  // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ��� �Ҵ�

    int ret = strcmp(s1, s2);   // �� ���ڿ��� ������ ���ڿ� ��

    printf("strcmp(s1, s2): %d\n", ret);    // �� ���ڿ��� ������ 0

    //  1: ASCII �ڵ� �������� ���ڿ�1 (s1)�� Ŭ��
    //  0: ASCII �ڵ� �������� �� ���ڿ��� ������
    // -1: ASCII �ڵ� �������� ���ڿ�2 (s2)�� Ŭ��

    return 0;
}
