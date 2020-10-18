// 난수를 사용하여 문자열 생성하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_COUNT 5
#define MAX_LENGTH 8

int main() {

    char str_list[MAX_COUNT][MAX_LENGTH + 1];
    int i, count = 1;

    srand(time(NULL));

    for (count = 0; count <= MAX_COUNT; count++) {
        for (i = 0; i < MAX_LENGTH; i++) {
            str_list[count][i] = 'a' + rand() % 26;
        }
        str_list[count][i] = 0;

        printf("(%d)th: %s\n", count + 1, str_list[count]);
    }
    return 0;
}
