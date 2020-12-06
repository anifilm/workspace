// scanf 함수를 이용한 문자열의 입력
#include <stdio.h>

int main() {

    char str[50];
    int i = 0;

    printf("문자열 입력: ");
    scanf("%s", str);   // 문자열을 입력 받아서 배열 str에 저장 (str 앞에 & 연산자를 삽입하지 않는다)

    printf("\n입력 받은 문자열: %s\n", str);

    printf("문자 단위 출력: ");
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}
