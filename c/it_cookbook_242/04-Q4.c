// 04 알파벳 소문자를 읽어 대문자로 변환하는 함수를 작성하고 main에서 그것을 불러 확인하는
// 프로그램을 작성하라. 함수 원형은 char to_upper_case(char ch); 로 한다.
// 힌트 아스키코드 표를 참조하라. 소문자가 대문자보다 크므로 대문자로 변환하려면 'a' - 'A'
// 만큼의 숫자를 뺀다.
#include <stdio.h>

char to_upper_case(char ch);

int main() {

    char c;

    printf("알파벳 소문자를 입력하세요: ");
    scanf("%c", &c);

    printf("소문자 %c의 대문자는 %c 입니다.", c, to_upper_case(c));

    return 0;
}

char to_upper_case(char ch) {
    return ch - 32;
}
