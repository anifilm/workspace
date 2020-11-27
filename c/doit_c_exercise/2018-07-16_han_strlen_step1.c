// 한글이 포함된 문자열의 길이 구하기
#include <stdio.h>
#define MAX_LENGTH 32

int GetStringLength(const char* ap_string) {
    int count = 0;
    // 문자열의 끝에 있는 'NULL 문자'가 나올때까지 반복
    while (*ap_string) {
        // 최상위 비트가 1이면 한글, 한글은 두바이에 걸쳐서 저장되기 때문
        // 한글이면 배열의 항목을 한 개 더 증가시킴
        if (*ap_string >> 7) ap_string++;   // 한글인 경우
        ap_string++;
        count++;    // 문자의 개수를 계산
    }
    return count;
}

void PrintString(const char* ap_string) {
    while (*ap_string) {
        if (*ap_string >> 7) {
            printf("%c%c%c\n", *ap_string, *(ap_string + 1), *(ap_string + 3));
            ap_string += 2;
        } else
            printf("%c\n", *ap_string++);
    }
}

int main() {

    char str[MAX_LENGTH];
    int len;

    printf("Input(영문한글포함): ");
    scanf("%[^\n]s", str);

    len = GetStringLength(str);
    printf("length: %d\n", len);

    PrintString(str);

    return 0;
}
