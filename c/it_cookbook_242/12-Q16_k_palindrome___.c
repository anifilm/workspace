// 16 한글 문장을 입력받아 그것이 회문인지를 판단하는 프로그램을 작성하라. 단, 빈칸이나 기호
// (아스키코드 32에서 47까지)는 무시하기로 한다.
// 힌트 first를 0으로, last를 배열 끝으로 초기화한 다음 first와 last가 교차할 때까지 대칭
// 위치의 문자를 비교한다. first는 2바이트씩 전진, last는 2바이트씩 후퇴, 빈칸이나 기호는
// 건너뛴다.
// int k_palindrome(const char *string);
// > 한글 문장을 입력하세요.
// > 다시 올 이월이 윤이월이올시다. ([Enter])
// > 네. 회문입니다.
// > 한글 문장을 입력하세요.
// > 소주 ([Enter])
// > 회문이 아닙니다.
// > 한글 문장을 입력하세요.
// > 소주 만 병만 주소. ([Enter])
// > 네. 회문입니다.
#include <stdio.h>
#include <string.h>

int k_palindrome(const char *string) {
    // TODO 한글 코드를 비교 하도록, 빈칸 기호 무시하도록 수정 필요
    int i, j, first = 0, last = (int)strlen(string) - 1;
    for (i = first, j = last ; i <= last / 2; i++, j--) {
        printf("%d %d\n", string[i], string[j]);
        if (string[i] != string[j])
            return 0;
    }
    return 1;
}

int main() {

    char str[100];

    while (1) {
        printf("한글 문장을 입력하세요.\n");
        gets(str);
        if (strcmp(str, "quit") == 0) break;

        if (k_palindrome(str) == 1)
            printf("네. 회문입니다.\n");
        else
            printf("회문이 아닙니다.\n");
    }

    return 0;
}
