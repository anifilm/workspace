// 문자열 목록을 오름차순으로 정렬하기 (C, 1)
#include <stdio.h>
#define MAX_COUNT 5

int StringCompare(const char* ap_string1, const char* ap_string2) {
    while (1) {
        if (*ap_string1 != *ap_string2) break;
        if (*ap_string1 == 0) break;
        ap_string1++;
        ap_string2++;
    }

    if (*ap_string1 == *ap_string2) return 0;
    else if (*ap_string1 > *ap_string2) return 1;
    return -1;
}

void SortStringInList(const char* ap_str_list[], int a_count) {
    int i, step;
    const char* p_temp_str;

    for (step = 0; step < MAX_COUNT - 1; step++) {
        for (i = 0; i < MAX_COUNT - 1 - step; i++) {
            if (StringCompare(ap_str_list[i], ap_str_list[i + 1]) > 0) {
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
