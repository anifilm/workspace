// strstr 함수 만들기 - Step 2
#include <stdio.h>

// strlen 함수와 같이 문자열 길이를 구하는 함수
int GetStringLength(const char a_str[]) {
    int len = 0;
    while (a_str[len]) len++;
    return len;
}

char* FindStringInString(const char a_str[], const char a_find_str[]) {
    int str_len, find_str_len;
    int limit, i, sub_i;
    if (!a_find_str[0]) return (char *)a_str;
    str_len = GetStringLength(a_str);
    find_str_len = GetStringLength(a_find_str);
    limit = str_len - find_str_len;

    for (i = 0; i < limit; i++) {
        if (a_str[i] == a_find_str[0]) {
            for (sub_i = 1; sub_i < find_str_len; sub_i++) {
                if (a_str[i + sub_i] != a_find_str[sub_i]) break;
            }
            if (sub_i == find_str_len) return (char *)(a_str + i);
        }
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
