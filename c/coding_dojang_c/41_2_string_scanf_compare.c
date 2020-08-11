#include <stdio.h>
#include <string.h>     // strcmp 함수가 선언된 헤더 파일

int main() {

    char s1[20];
    char s2[20];

    printf("문자열을 두개 입력하세요 (문자열 문자열): ");
    scanf("%s %s", s1, s2);     // 표준 입력에서 공백으로 구분된 문자열 두개를 입력받음

    int ret = strcmp(s1, s2);   // 입력된 문자열 비교

    switch (ret) {
    case 0:
        printf("두 문자열이 같음\n");
        break;
    case 1:
        printf("%s보다 %s가 큼\n", s2, s1);
        break;
    case -1:
        printf("%s보다 %s가 큼\n", s1, s2);
        break;
    }

    return 0;
}
