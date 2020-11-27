// gets 함수 만들어보기
// 4. GetString 함수를 do ~ while 문으로 재구성
#include <stdio.h>

void GetString(char* ap_string) {
    int temp_char;
    do {
        // 사용자가 입력한 문자를 temp_char에 넣는다
        temp_char = getc(stdin);
        // 사용자가 입력한 문자를 메모리에 추가한다
        *ap_string++ = temp_char;
    // 사용자가 입력한 문자가 Enter 키 값이 아니면 계속 반복하면서 키를 입력 받는다
    } while (temp_char != '\n');
    *(ap_string - 1) = 0;    // 문자열의 끝에 NULL 문자를 추가한다
}

int main() {

    char temp[16];
    GetString(temp);

    printf("input -> %s\n", temp);  // 입력 받은 문자열을 확인

    return 0;
}
