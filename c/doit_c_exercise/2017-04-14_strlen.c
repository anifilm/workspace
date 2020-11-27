// 문자열 길이를 구하는 함수 만들기
#include <stdio.h>

// MyStringLength 함수는 strlen 함수와 동일한 기능을 하는 함수입니다
size_t MyStringLength(const char* ap_string) {
    size_t count = 0;

    while (*ap_string++) {
        count++;
    }

    return count;
}

int main() {

    char* p = "My name is anifilm.";    // 체크할 문자열
    size_t length = MyStringLength(p);  // p가 가리키는 문자열의 길이를 구한다

    printf("12345678901234567890\n");   // 문자열의 길이를 확인할 수 있도록 화면에 출력
    printf("%s\n", p);                  // 체크할 문자열 출력
    printf("\ndata length = %d\n", length); // 문자열의 길이를 출력

    return 0;
}
