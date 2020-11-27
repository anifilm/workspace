// 문자열 오름차순으로 정렬하기
#include <stdio.h>

int GetStringLength(char a_string[]) {
    int length = 0;
    while (a_string[length] != 0) length++;
    return length;
}

int main() {

    int i, step, len;
    char str[30], temp;

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    // 문자열 길이를 구함
    len = GetStringLength(str) - 1;

    // 버블 소트를 통해서 a부터 오름차순으로 정렬
    for (step = 0; step < len; step++) {
        for (i = 0; i < len - step; i++) {
            if (str[i] > str[i + 1]) {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }
        }
    }

    printf("오름차순으로 정렬된 문자열: ");
    printf("%s\n", str);

    return 0;
}
