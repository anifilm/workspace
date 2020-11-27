// 실수값 입력 시, 소수점 자릿수 제한하기
#include <stdio.h>
#include <stdlib.h>
#define MAX_INT_PART 16
#define MAX_DOT_PART 2

int main() {

    char str[32];
    int ch, count = 0, dot_num = -1;
    double num;

    printf("Input: ");
    while (1) {
        ch = getchar();
        // 사용자가 '엔터키'를 입력했다면 문자열 끝에 NULL문자를 추가하고
        // 입력 작업을 중단
        if (ch == '\r' || ch == '\n') {
            str[count] = 0;
            break;
        } else if (ch == '\b') {
            // Backspace 키를 눌렀을 때 입력된 문자열이 있다면
            // 마지막에 입력된 문자을 삭제
            // 삭제할 때는 str배열에서만 삭제하는 것이 아니라
            // '\b'문자를 사용하면 화면에서도 제거
            if (count > 0) {
                // str 배열에서 마지막 문자 제거
                count--;
                // 화면에서 마지막 문자 제거
                putc('\b', stdout);
                putc(' ', stdout);
                putc('\b', stdout);
                // 소수점 자릿수가 입력되고 있었다면 마지막 자릿수 제거
                if (dot_num != -1) dot_num--;
            }
        } else if (ch == '-') {
            // 부호는 가장 처음에만 입력 가능
            if (count == 0) {
                str[count++] = ch;
                putc(ch, stdout);
            }
        } else if (ch == '.') {
            // '.'이 입력되지 않았다면 str배열에 '.'을 추가하고
            // 소수점 자릿수 입력을 시작
            if (dot_num == -1) {
                str[count++] = ch;
                dot_num++;
                putc(ch, stdout);
            }
        } else {
            // 사용자가 입력한 문자가 숫자인 경우에만 처리
            if (ch >= '0' && ch <= '9') {
                if (dot_num == -1) {
                    // 정수부 입력 상태라면 최대 16자리까지 입력
                    if (count < MAX_INT_PART) {
                        str[count++] = ch;
                        putc(ch, stdout);
                    }
                } else {
                    if (dot_num < MAX_DOT_PART) {
                    // 소수점 자릿수 증가
                        dot_num++;
                        str[count++] = ch;
                        putc(ch, stdout);
                    }
                }
            }
        }
    }

    // 입력된 문자열을 화면에 출력하여 확인
    printf("\nCheck: %s\n", str);
    num = atof(str);
    printf("double: %lf\n", num);

    return 0;
}
