#include <stdio.h>
#include <string.h>     // strcmp �Լ��� ����� ��� ����

int main() {

    // aaa�� ASCII �ڵ�� 97 97 97
    // aab�� ASCII �ڵ�� 97 97 98
    // aac�� ASCII �ڵ�� 97 97 99

    printf("strcmp(\"aaa\", \"aaa\"): %d\n", strcmp("aaa", "aaa"));     // aaa�� aaa�� �����Ƿ� 0
    printf("strcmp(\"aab\", \"aaa\"): %d\n", strcmp("aab", "aaa"));     // aab�� aaa�߿� aab�� ũ�Ƿ� 1
    printf("strcmp(\"aab\", \"aac\"): %d\n", strcmp("aab", "aac"));     // aab�� aac�߿� aac�� ũ�Ƿ� -1

    return 0;
}
