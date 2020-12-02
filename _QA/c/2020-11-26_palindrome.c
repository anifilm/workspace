/*
https://cafe.naver.com/cstudyjava/127102
회문 이용
도도도도도토리 2020.11.26.
문자열 받으면 길이랑 회문인지 아닌지 판단하는거 코드 짰는데
*/
#include <stdio.h>
#include <string.h>

int main() {

    char arr[30];
    int length;     // int length = strlen(arr); 수정
    int i;

    printf("input: ");
    scanf("%s", arr);

    length = strlen(arr);   // 입력받은 문자열의 길이를 구하여 length에 저장
    printf("arr length: %d\n", length);

    for (i = 0; i < length / 2; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            printf("회문이 아닙니다.\n");
            break;
        }
        // 판단을 한번만 출력하도록 추가함
        if (i >= length / 2 - 1) printf("회문입니다.\n");
    }

    return 0;
}
