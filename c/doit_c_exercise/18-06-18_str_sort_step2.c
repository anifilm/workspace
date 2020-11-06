// 문자열 목록을 오름차순으로 정렬하기 (C, 1)
#include <stdio.h>
#include <string.h>
#define MAX_COUNT 5

void SortStringInList(const char* ap_str_list[], int a_count) {
    int i, step;
    const char* p_temp_str;

    for (step = 0; step < MAX_COUNT - 1; step++) {
        for (i = 0; i < MAX_COUNT - 1 - step; i++) {
            if (strcmp(ap_str_list[i], ap_str_list[i + 1]) > 0) {
                p_temp_str = ap_str_list[i];
                ap_str_list[i] = ap_str_list[i + 1];
                ap_str_list[i + 1] = p_temp_str;
            }
        }
    }
}

int main() {

    int i;
    const char* p_str_list[MAX_COUNT] = {
        "tipsware", "naver", "microsoft", "blog", "mvp"
    };

    printf("< 정렬 전 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", p_str_list[i]);
    printf("\n");

    SortStringInList(p_str_list, MAX_COUNT - 1);

    printf("< 정렬 후 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", p_str_list[i]);

    return 0;
}
