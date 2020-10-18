// strstr 함수 만들기 - Step 1
#include <stdio.h>

char* FindStringInString(const char *ap_str, const char *ap_find_str) {
    const char *p_pos, *p_find_pos;
    if (*ap_find_str == 0) return (char *)ap_str;
    while (*ap_str != 0) {
        if (*ap_str == *ap_find_str) {
            p_pos = ap_str + 1;
            p_find_pos = ap_find_str + 1;
            while (*p_find_pos != 0 && *p_pos != 0 && *p_pos == *p_find_pos) {
                p_pos++;
                p_find_pos++;
            }
            if (*p_find_pos == 0) return (char *)ap_str;
            if (*p_pos == 0) break;
        }
        ap_str++;
    }
    return (char *)NULL;
}

int main() {

    char *p_src_str = "abcdefg", *p_find_str = "cde";
    char *p_pos = FindStringInString(p_src_str, p_find_str);

    if (p_pos != NULL) {
        printf("기준 문자열: %s\n", p_src_str);
        printf("찾을 문자열: %s\n", p_find_str);
        printf("찾은 위치: %s\n", p_pos);
    } else {
        printf("%s 문자열을 찾을 수 없습니다.", p_find_str);
    }

    return 0;
}
