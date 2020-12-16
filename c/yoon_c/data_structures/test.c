#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char buffer[30];
    int num, year;

    printf("숫자를 입력: ");
    scanf("%d", &num); rewind(stdin); // 또는 getchar();

    /* fgets() 사용시 */
    printf("책의 이름을 입력하시오: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strlen(buffer) - 1] = '\0'; // 개행 문자 삭제
    printf("%s를 출력\n", buffer);

    printf("책의 출판 연도를 입력하시오: ");
    fgets(buffer, sizeof(buffer), stdin);
    year = atoi(buffer);
    printf("%d를 출력\n", year);

    /* gets() 또는 gets_s() 사용시 */
    printf("책의 이름을 입력하시오: ");
    gets(buffer);
    printf("%s를 출력\n", buffer);

    printf("책의 출판 연도를 입력하시오: ");
    gets(buffer);
    year = atoi(buffer);
    printf("%d를 출력\n", year);

    return 0;
}
