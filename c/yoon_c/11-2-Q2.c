/* 문제 11-2 [배열 기반의 문자열 표현]
문제 2
프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다. 그 다음 배열에
저장된 영단어를 역순으로 뒤집는다. 물론 이때에 널 문자의 위치를 변경해서는 안 된다.
뒤집고 나서는 제대로 뒤집혀졋는지 확인하기 위해서 출력해보자.
*/
#include <stdio.h>

int main() {

    char str[20];
    char temp;
    int len = 0, i;

    printf("영단어를 입력: ");
    scanf("%s", str);

    while (str[len] != '\0')    // 영단어 길이 계산
        len++;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];      // 문자를 임시로 저장
        // 맨 앞의 문자부터 맨 뒤의 문자와 차례로 바꿔 나간다
        str[i] = str[(len - i) - 1];
        str[(len - i) - 1] = temp;
    }

    printf("\n뒤집힌 영단어: %s\n", str);

    return 0;
}
