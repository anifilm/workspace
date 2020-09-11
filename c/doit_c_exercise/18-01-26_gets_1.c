// gets 함수 만들어보기
// 1. for 반복문을 사용하여 구성
#include <stdio.h>

int main() {

    char temp[16];
    // 사용자가 입력한 첫 문자를 temp_char에 넣는다
    int temp_char = getc(stdin), i;
    // 사용자가 입력한 문자가 Enter 키 값이 아니면 계속 반복하면서 키를 입력 받는다
    for (i = 0; temp_char != '\n'; i++) {
        // 사용자가 입력한 문자를 배열에 추가한다
        temp[i] = temp_char;
        // 다음 문자를 표준 입력 버퍼에서 가져온다
        temp_char = getc(stdin);
    }

    temp[i] = 0;    // 문자열의 끝에 NULL 문자를 추가한다

    printf("input -> %s\n", temp);  // 입력 받은 문자열을 확인

	return 0;
}
