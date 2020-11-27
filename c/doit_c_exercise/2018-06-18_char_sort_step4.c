// 문자열 오름차순으로 정렬하기
#include <stdio.h>

int GetStringLength(char a_string[]) {
    int length = 0;
    while (a_string[length] != 0) length++;
    return length;
}

void SortCharInString(char a_string[]) {
    int i, step, len;
    char temp;

    // 문자열 길이를 구함
    len = GetStringLength(a_string) - 1;

    // 버블 소트를 통해서 a부터 오름차순으로 정렬
    for (step = 0; step < len; step++) {
        for (i = 0; i < len - step; i++) {
            if (a_string[i] > a_string[i + 1]) {
                temp = a_string[i];
                a_string[i] = a_string[i + 1];
                a_string[i + 1] = temp;
            }
        }
    }
}

int main() {

    char str[30];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    SortCharInString(str);

    printf("오름차순으로 정렬된 문자열: ");
    printf("%s\n", str);

    return 0;
}
