/* 도전! 프로그래밍 2
도전 4
회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다. 예를 들어서
level, bob과 같은 단어들은 회문에 속한다. 이에 우리는 인자로 전달되는 영단어가 회문인지
아닌지를 판단해서 그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main 함수를
정의해 보고자 한다. 단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로
하겠다. (이는 어디까지나 구현의 편의를 고려한 제약사항일 뿐이다)

[실행의 예]
문자열 입력: noon
회문 입니다.

[도전4의 해결을 위한 GUIDE]
입력된 문자열의 길이를 알아야 회문인지 아닌지를 판단할 수 있다. 따라서 문제의 해결을
위해서는 문자열의 길이를 계산해서 반환하는 함수도 정의해야 한다. 참고로 이러한 기능의
함수가 표준함수로 존재한다. 헤더파일 string.h에 선언되어 있는 strlen이란 이름의 함수
이다. 이 함수에 대해서는 Chapter 21에서 소개한다.
*/
#include <stdio.h>

int StringLen(char* str) {
    int len = 0;
    while(str[len] != 0) len++;
    return len;
}

void IsPalindrome(char* str) {
    int i, len = StringLen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[(len - 1) - i]) {
            printf("회문이 아닙니다.\n");
            return;
        }
    }
    printf("회문 입니다.\n");
}

int main() {

    char string[30];

    printf("문자열 입력: ");
    scanf("%s", string);

    IsPalindrome(string);

    return 0;
}
