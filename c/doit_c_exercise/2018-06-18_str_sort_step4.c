// 문자열 목록을 오름차순으로 정렬하기 (C, 2)
#include <stdio.h>
#include <string.h>
#define MAX_COUNT 5
#define MAX_LENGTH 16

int main() {

    int i, step;
    char temp_str[MAX_LENGTH];
    char str_list[MAX_COUNT][MAX_LENGTH] = {
        "tipsware", "naver", "microsoft", "blog", "mvp"
    };

    printf("< 정렬 전 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", str_list[i]);
    printf("\n");

    for (step = 0; step < MAX_COUNT - 1; step++) {
        for (i = 0; i < MAX_COUNT - 1 - step; i++) {
            if (strcmp(str_list[i], str_list[i + 1]) > 0) {
                strcpy(temp_str, str_list[i]);
                strcpy(str_list[i], str_list[i + 1]);
                strcpy(str_list[i + 1], temp_str);
            }
        }
    }

    printf("< 정렬 후 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", str_list[i]);

    return 0;
}
