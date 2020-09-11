// gets 함수 만들어보기
// 7. 완성된 GetString 함수를 사용하여 재구성
#include <stdio.h>

void GetString(char *ap_string) {
    // 사용자가 입력한 문자가 Enter 키 값이 아니면 계속 반복하면서 키를 입력 받는다
    while ((*ap_string = getc(stdin)) != '\n') ap_string++
    *ap_string = 0;    // 문자열의 끝에 NULL 문자를 추가한다
}

int main() {

    char temp[16];
    GetString(temp);

    printf("input -> %s\n", temp);  // 입력 받은 문자열을 확인

	return 0;
}
