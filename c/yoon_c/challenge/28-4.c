/* 도전! 프로그래밍 4
도전 4
문자열을 저장하고 있는 파일을 열어서 A와 P로 시작하는 단어의 수를 세어서 출력하는
프로그램을 작성해 보자. 단 모든 단어는 공백 문자 (스페이스바, \t, \n)에 의해서
구분된다고 가정한다.

[실행의 예]
실행파일의 이름이 wordcnt.exe이고 대상 파일의 이름이 text.txt인 경우의 실행의 예
C:\> wordcnt text.txt
A로 시작하는 단어의 수: 4
P로 시작하는 단어의 수: 3

[도전4의 해겨을 위한 GUIDE]
이번 문제의 구현 방법은 참으로 다양하다. 그런데 어떠한 방법을 쓰건 기본적으로 공백
문자를 기준으로 단어를 뽑아내야 한다. 참고로 이 상황에서 fscanf() 함수의 사용도
고려해 볼만하다. scanf() 함수와 fscanf() 함수는 공백을 기준으로 문자열을 구분하기
때문 이다.
*/
#include <stdio.h>

int main() {    // 파일명 읽어오기 안함

    char word[20];
    int ret, count_A = 0, count_P = 0;
    FILE* fp = fopen("28-4_text.txt", "rt");
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while (1) {
        ret = fscanf(fp, "%s", word);
        if (ret == EOF) break;
        if (word[0] == 'A') count_A++;
        else if (word[0] == 'P') count_P++;
    }

    printf("A로 시작하는 단어의 수: %d\n", count_A);
    printf("P로 시작하는 단어의 수: %d\n", count_P);

    fclose(fp);
    return 0;
}
