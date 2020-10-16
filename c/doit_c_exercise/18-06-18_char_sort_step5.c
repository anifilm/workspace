// 문자열 오름차순으로 정렬하기
#include <stdio.h>

int GetStringLength(char *ap_string) {
    char *p = ap_string;
    // 문자열 끝에 있는 NULL 문자가 나올 때까지 반복하면서 주소를 이동
    // while문이 끝나면 포인터 ap_string은 문자열의 끝 위치를 가리키고 있게 된다.
    while (*ap_string++);
    // 문자열 끝 주소에서 시작 주소를 빼면 NULL 문자까지 포함된 문자의 개수를 얻을 수 있다.
    // 따라서 NULL 문자를 뺀 값이 문자열의 실제 길이
    return ap_string - p - 1;
}

void SortCharInString(char *ap_string) {
    int i, step, len;
    char temp;

    // 문자열 길이를 구함
    len = GetStringLength(ap_string) - 1;

    // 버블 소트를 통해서 a부터 오름차순으로 정렬
    for (step = 0; step < len; step++) {
        for (i = 0; i < len - step; i++) {
            if (*(ap_string + i) > *(ap_string + i + 1)) {
                temp = *(ap_string + i);
                *(ap_string + i) = *(ap_string + i + 1);
                *(ap_string + i + 1) = temp;
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
