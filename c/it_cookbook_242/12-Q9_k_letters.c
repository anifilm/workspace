/* 09
영문과 한글이 섞인 문장을 입력받아 한글이 몇 문자인지를 출력하는 프로그램을 작성하라. 힌트 아스키코드 범위이면 영문이므로
포인터를 1칸 전진, 아니면 한글이므로 2칸 전진한다.
  int k_letters(const char* string);

  > Enter a sentence with Korean and English letters.
  > 논증 글쓰기: Essay, 논술, 논문의 실체. 주우석 지음. ([Enter])
  > 한글 문자는 17번 나옵니다.
  > Enter a sentence with Korean and English letters.
*/
#include <stdio.h>
#include <string.h>

int k_letters(const char* string) {
    int i = 0, count = 0;
    while (string[i] != 0) {
        if (!(string[i] >= 0 && string[i] < 128)) count++;
        i++;
    }
    return count;
}

int main() {

    char str[50];

    while (1) {
        printf("Enter a sentence with Korean and English letters.\n");
        gets(str);
        if (strcmp(str, "quit") == 0) break;

        printf("한글 문자는 %d번 나옵니다.\n", k_letters(str));
    }

    return 0;
}
