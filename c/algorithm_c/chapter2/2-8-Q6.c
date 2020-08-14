// Q6 실습 2-8의 card_convr 함수를 수정하여 배열의 맨 앞쪽에 아랫자리가 아니라 윗자리를 저장하는
// card_conv 함수를 작성하세요.
#include <stdio.h>
#include <stdlib.h>

// 정수값 x를 n진수로 변환하여 배열 d에 윗자리부터 저장
int card_conv(unsigned x, int n, char d[]) {
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int number = x;     // 변환할 값
    int digits = 0;     // 변환 후 자릿수
    int digits2 = 0;

    if (x == 0)
        d[digits++] = dchar[0];
    else {
        while (number) {
            // 루프를 돌면서 변환 후 자릿수를 구함
            number = number / n;
            digits++;
        }
        digits2 = digits;
        while (x) {
            // 나머지를 구하는 방법이 아닌 다른 방법이 있는지 확인 필요
            // 현재는 루프를 돌면서 변환 후 자릿수를 구하여
            // 아랫자리를 배열의 뒤쪽 인덱스부터 반대로 할당하는 방법으로 구현함
            d[digits2--] = dchar[x % n];     // n으로 나눈 나머지를 저장
            x /= n;
        }
    }
    return digits;
}

int main(void) {

    int i;
    unsigned no;    // 변환하는 정수
    int cd;         // 기수
    int dno;        // 변환 후 자릿수
    char cno[512];  // 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
    int retry;      // 한번 더?

    puts("10진수를 기수 변환 합니다.");
    do {
        printf("변환하는 음이 아닌 정수: ");
        scanf("%u", &no);
        do {
            printf("어떤 진수로 변환 할까요? (2-36): ");
            scanf("%d", &cd);
        } while (cd < 2 || cd > 36);
        dno = card_conv(no, cd, cno);   // no를 cd진수로 변환
        printf("%d진수로는 ", cd);
        for (i = 0; i <= dno; i++)  // 윗자리부터 차례대로 출력
            printf("%c", cno[i]);
        printf(" 입니다.\n");
        printf("한번 더 할까요? (1...예 / 0...아니오): ");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}