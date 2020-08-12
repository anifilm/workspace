#include <stdio.h>
#include <string.h>     // strtok 함수가 선언된 헤더 파일

int main() {

    char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당
    char *sArr[10] = {NULL,};           // 크기가 10인 문자열 포인터 배열을 선언하고 NULL로 초기화
    int i = 0;                          // 문자열 포인터 배열의 인덱스로 사용할 변수 할당

    char *ptr = strtok(s1, " ");        // 공백 문자열 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL) {
        sArr[i] = ptr;                  // 문자열을 자른 뒤 메모리 주소를 문자열 포인터 배열에 할당
        i++;

        ptr = strtok(NULL, " ");        // 다음 문자열을 잘라서 포인터를 반환
    }

    for (int i = 0; i < 10; i++) {
        if (sArr[i] != NULL)            // 문자열 포인터 배열의 요소가 NULL이 아닌 경우
            printf("%s\n", sArr[i]);    // 문자열 포인터 배열에 인덱스로 접근하여 각 문자열 출력
    }

    return 0;
}
