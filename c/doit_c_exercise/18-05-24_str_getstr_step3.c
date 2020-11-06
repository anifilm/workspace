// 문자열에 범위를 지정하여 문자열 추출하기 - 동적 메모리 할당 연습
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 64

int main() {

    char *p_str, *p_sub_str;
    char *p_src, *p_dest;
    int i, len, start, end;

    p_str = (char*)malloc(MAX_LENGTH);
    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", p_str);

    len = strlen(p_str);

    // 시작은 0부터 8이전까지 추출 [0:8] 파이썬과 같은 형식으로 함
    printf("문자열을 추출할 시작 위치와 끝 위치를 입력하세요: ");
    scanf("%d %d", &start, &end);

    if (len < end)
        printf("입력된 문자열의 길이보다 추출 범위가 더 큽니다.\n");
    else if (start > end)
        printf("끝 위치가 시작 위치보다 커야 합니다.\n");
    else {
        p_sub_str = (char*)malloc(end - start + 1);

        p_src = p_str + start;
        p_dest = p_sub_str;
        while (start < end) {
            *p_dest++ = *p_src++;
            start++;
        }
        *p_dest = 0;
        printf("%s\n", p_sub_str);

        free(p_sub_str);
    }
    free(p_str);

    return 0;
}
