// 문자열 입력받아서 나열하기
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_COUNT  100  // 문자열은 최대 100개까지 입력
#define MAX_LENGTH  64  // 한 문자열의 최대 길이

int main() {

    char *p_table[MAX_COUNT], temp[MAX_COUNT];
    int count, i, len;

    for (count = 0; count < MAX_COUNT; count++) {
        // Ctrl + Z가 입력되었는지 체크한다.

        // gets_s() 함수를 대신해서 fgets() 함수를 사용
        if (NULL != fgets(temp, MAX_COUNT, stdin)) {
            // Ctrl + Z가 입력되지 않았다면 문자열의 길이를 구한다.
            // 메모리 할당과 복사가 편하도록 NULL 문자 포함 크기를 구함
            len = strlen(temp) + 1;
            // 입력한 문자만큼 메모리를 할당한다.
            p_table[count] = (char*)malloc(len);
            // temp 배열에 저장된 문자열을 p_table[count] 항목에 복사한다.
            memcpy(p_table[count], temp, len);
        } else {
            // Ctrl + Z를 눌렀다면 작업을 중단
            break;
        }
    }
    printf("\n");
    // 입력된 문자열을 출력한다.
    for (i = 0; i < count; i++) {
        printf("[%02d]: %s", i, p_table[i]);
    }

    // 문자열을 저장하기 위해 할당된 메모리를 제거한다.
    for (i = 0; i < count; i++)
        free(p_table[i]);

    return 0;
}
