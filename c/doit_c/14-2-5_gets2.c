// gets 함수로 문자열을 입력 받을 때 입력 취소까지 처리하기
#include <stdio.h>

int main() {

    char input_string[10];
    // 반환값이 NULL이 아니라면 문자열을 입력 받아서 input_string에 저장함
    if (NULL != gets(input_string)) {
        printf("input: %s\n", input_string);    // 입력 받은 문자열을 출력함
    } else {
        printf("input -> Canceled\n");
    }

	return 0;
}
