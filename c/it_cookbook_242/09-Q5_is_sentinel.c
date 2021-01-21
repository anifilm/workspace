/* 05
입력받은 문장 중에 'e'가 있는지 확인하여 있으면 yes를, 없으면 no를 출력하는 프로그램을 작성하라.
단, 입력 문장을 배열에 입력한 다음 무조건 마지막에 'e'를 추가로 삽입해야 한다. 그 경우 루프를 돌면서
'e'를 찾되 찾는 위치가 마지막이면 no라고 출력하고 그렇지 않으면 yes라고 출력할 수 있다. 또, 배열 내
에 반드시 'e'가 존재하므로 루프를 돌 때마다 매번 현재 인덱스가 배열 범위를 초과하는지를 비교할 필요가
없어 실행 시간을 줄일 수 있다. 데이터가 끝났음을 알릴 목적으로 삽입된 이러한 문자나 숫자를 센티넬
(Sentinel)이라 부른다. 예들 들어, 입력으로 -1이 들어오면 프로그램을 종료하라고 할 때 -1도 센티넬이다.
  > Enter input sentence.
  > It is not difficult. ([Enter])
  > no.
*/
#include <stdio.h>
#define YES  1
#define NO   0

int main() {

    char ch[100] = {0};
    int i, is_sentinel = NO;

    printf("Enter input sentence.\n");
    gets(ch);
    for (i = 0; ; i++) {
        if (ch[i] == 'e') {
            if (ch[i + 1] == '\0')
                break;
        } else if (ch[i] == '\0') {
            ch[i] = 'e'; ch[i + 1] = '\0';
            break;
        }
    }

    for (i = 0; ; i++) {
        if (ch[i] == 'e') {
            if (ch[i + 1] != '\0')
                is_sentinel = YES;
            break;
        }
    }
    if (is_sentinel)
        printf("yes.\n");
    else
        printf("no.\n");

    return 0;
}
