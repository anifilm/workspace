/* 문제 25-2 [메모리 공간의 동적 할당]
문제 1
프로그램 사용자로부터 문자열을 입력 받아서 입력 받은 문자열의 단어를 역으로 출력하는
프로그램을 작성해 보자. 예를 들어서 "I am a boy"가 입력되면, 다음의 출력을 보여야
한다.
  "boy a am I"
단! 문자열의 입력에 앞서 프로그램 사용자가 입력할 문자열의 최대길이 정보를 먼저 입력
받기로 하자. 그리고 그 길이만큼 메모리 공간을 동적으로 할당해서 문자열을 입력 받기로
하자. 참고로 이 문제에서는 메모리의 동적 할당 이외에 문자열의 단어를 역으로 출력하라는
비교적 어려운 주제를 여러분에게 제시하고 있다. 이 문제를 해결하는 방법은 여러 가지이다.
따라서 여유를 가지고 여러분 나름의 방법을 찾아서 구현해보기 바란다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int max_str_len, len, ch, i;
    printf("문자열의 최대 길이? ");
    scanf("%d", &max_str_len); getchar();

    char* str = (char*)malloc(sizeof(char) * max_str_len + 1);

    printf("문자열을 입력\n");
    i = 0;
    while ((ch = getchar()) != '\n') {
        if (max_str_len == i) break;    // 입력된 문자열의 최대 길이 까지만 입력받도록
        str[i] = ch;
        i++;
    }
    str[i] = 0;

//  fgets를 사용한 문자열 입력 예
//  fgets(str, max_str_len + 1, stdin);
//  str[strlen(str) - 1] = 0;
    printf("%s\n\n", str);

    // 문자열을 뒤에서부터 단어별로 출력
    len = strlen(str);
    for (i = len; i > 0; i--) {
        if (str[i] == ' ') {
            printf("%s ", &str[i + 1]);
            str[i] = 0;
        }
    }
    printf("%s\n", &str[0]);

    free(str);
    return 0;
}
