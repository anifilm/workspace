// 문자열 입력받아서 나열하기
#include <stdio.h>
#include <string.h>

#define MAX_COUNT  100  // 문자열은 최대 100개까지 입력
#define MAX_LENGTH  64  // 한 문자열의 최대 길이

int main() {

    char table[MAX_COUNT][MAX_COUNT];
    int count, i;

    for (count = 0; count < MAX_COUNT; count++) {
        // Ctrl + Z가 입력되지 않았다면 문자열의 길이를 구하고
        // 입력되었다면 문자열 입력 작업을 중단한다.

        // gets_s() 함수를 대신해서 fgets() 함수를 사용
        if (NULL == fgets(table[count], MAX_COUNT, stdin)) break;
    }
    printf("\n");
    // 입력된 문자열을 출력한다.
    for (i = 0; i < count; i++) {
        printf("[%02d]: %s", i, table[i]);
    }

    return 0;
}
