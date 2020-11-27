// 문자열 목록을 오름차순으로 정렬하기 (C, 2)
#include <stdio.h>
#include <string.h>
#define MAX_COUNT 5
#define MAX_LENGTH 16

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

int StringCopy(char* ap_dest, char* ap_src) {
    char* p_start = ap_dest;
    while (*ap_src) *ap_dest++ = *ap_src++;
    *ap_dest = 0;                   // '\0'도 함께 복사
    return ap_dest - p_start;       // 복사된 문자열의 길이를 반환
}

void SortStringInList(char a_str_list[][MAX_LENGTH], int a_count) {
    int i, step;
    char temp_str[MAX_LENGTH];

    for (step = 0; step < a_count; step++) {
        for (i = 0; i < a_count - step; i++) {
            if (StringCompare(a_str_list[i], a_str_list[i + 1]) > 0) {
                StringCopy(temp_str, a_str_list[i]);
                StringCopy(a_str_list[i], a_str_list[i + 1]);
                StringCopy(a_str_list[i + 1], temp_str);
            }
        }
    }
}

int main() {

    int i;
    char str_list[MAX_COUNT][MAX_LENGTH] = {
        "tipsware", "naver", "microsoft", "blog", "mvp"
    };

    printf("< 정렬 전 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", str_list[i]);
    printf("\n");

    SortStringInList(str_list, MAX_COUNT - 1);

    printf("< 정렬 후 >\n");
    for (i = 0; i < MAX_COUNT; i++)
        printf("%s\n", str_list[i]);

    return 0;
}
